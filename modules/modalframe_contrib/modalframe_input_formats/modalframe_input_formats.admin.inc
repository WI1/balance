<?php
// $Id: modalframe_input_formats.admin.inc,v 1.1.2.1 2010/01/06 20:32:14 markuspetrux Exp $

/**
 * @file
 * Administration related functions for the Modal Frame Input Formats module.
 */

/**
 * Render the input formats admin overview form.
 */
function theme_modalframe_input_formats_admin_overview($form) {
  if (empty($_COOKIE['has_js'])) {
    // Invoke the original theme function.
    $theme_registry = variable_get('modalframe_input_formats_theme_entry', array());
    $function = !empty($theme_registry['function']) && function_exists($theme_registry['function']) ? $theme_registry['function'] : 'filter_admin_overview';
    return $function($form);
  }
  $rows = array();
  foreach ($form as $name => $element) {
    if (isset($element['roles']) && is_array($element['roles'])) {
      $rows[] = array(
        drupal_render($form['default'][$element['id']['#value']]),
        check_plain($name),
        drupal_render($element['roles']),
        drupal_render($element['filters']),
        drupal_render($element['edit']),
        drupal_render($element['configure']),
        drupal_render($element['order']),
        drupal_render($element['delete'])
      );
      unset($form[$name]);
    }
  }
  $header = array(t('Default'), t('Name'), t('Roles'), t('Filters'), array('data' => t('Operations'), 'colspan' => 4));
  $output = theme('table', $header, $rows);
  $output .= drupal_render($form);
  return $output;
}

/**
 * Implementation of hook_form_alter().
 */
function _modalframe_input_formats_form_alter(&$form, $form_state, $form_id) {
  if ($form_id == 'filter_admin_overview') {
    $default_format = variable_get('filter_default_format', 1);
    foreach (filter_formats() as $id => $format) {
      $form[$format->name]['filters']   = array('#value' => modalframe_input_formats_get_filters($id));
      $form[$format->name]['edit']      = array('#value' => l(t('edit'), 'admin/settings/filters/'. $id .'/edit'));
      $form[$format->name]['configure'] = array('#value' => (modalframe_input_formats_is_filter_configurable($id) ? l(t('configure'), 'admin/settings/filters/'. $id .'/configure') : ''));
      $form[$format->name]['order']     = array('#value' => (count(modalframe_input_formats_list_format($id)) > 1 ? l(t('rearrange'), 'admin/settings/filters/'. $id .'/order') : ''));
      $form[$format->name]['delete']    = array('#value' => ($id != $default_format ? l(t('delete'), 'admin/settings/filters/delete/'. $id) : ''));
    }
    $form['#action'] = url('admin/settings/filters');
  }
  elseif (!empty($_GET['modalframe']) && in_array($form_id, array('filter_admin_format_form', 'filter_admin_configure', 'filter_admin_order', 'filter_admin_delete', 'better_formats_settings_admin_form', 'better_formats_defaults_admin_form'))) {
    $form['#submit'][] = 'modalframe_input_formats_form_submit';

    // For the delete form, render the page title in the content area as well.
    if ($form_id == 'filter_admin_delete') {
      $form['#prefix'] = '<h2 class="title">'. drupal_get_title() .'</h2>';
    }
  }
}

/**
 * Process the path administration forms.
 */
function modalframe_input_formats_form_submit($form, &$form_state) {
  $form_values = $form_state['values'];
  $modalframe_args = array(
    'submitted' => TRUE,
  );
  if ($form_values['form_id'] == 'filter_admin_format_form') {
    // Ignore add input format forms, because these are managed
    // client-side, reloading the overview page.
    if (!isset($form_values['format'])) {
      $modalframe_args['form'] = drupal_get_form('filter_admin_overview');
    }
    else {
      $id = $form_values['format'];

      if ($form_values['name'] != $form['name']['#default_value']) {
        $modalframe_args['name'] = check_plain(trim($form_values['name']));
      }

      // Update the list of roles that may access this filter.
      if ($id && $id != variable_get('filter_default_format', 1)) {
        $format_roles = array();
        if (isset($form_values['roles'])) {
          $format_roles = array_keys(array_filter($form_values['roles']));
        }
        $roles = array();
        foreach (user_roles() as $rid => $name) {
          if (in_array($rid, $format_roles)) {
            $roles[] = $name;
          }
        }
        $modalframe_args['roles'] = (!empty($roles) ? implode(', ', $roles) : t('No roles may use this format'));
      }

      // Update the list of filters assigned to the format.
      $modalframe_args['filters'] = modalframe_input_formats_get_filters($id);

      // Update the configure and rearrange links.
      $modalframe_args['configure'] = (modalframe_input_formats_is_filter_configurable($id) ? l(t('configure'), 'admin/settings/filters/'. $id .'/configure') : '');
      $modalframe_args['order'] = (count(modalframe_input_formats_list_format($id)) > 1 ? l(t('rearrange'), 'admin/settings/filters/'. $id .'/order') : '');
    }
  }
  elseif ($form_values['form_id'] == 'filter_admin_order') {
    $modalframe_args['filters'] = modalframe_input_formats_get_filters($form_values['format']);
  }
  modalframe_close_dialog($modalframe_args);
}

/**
 * Helper function to load information about filter for the given format.
 *
 * @see filter_list_format()
 */
function modalframe_input_formats_list_format($format, $fallback_to_default = FALSE) {
  $filters = array();
  $result = db_query("SELECT * FROM {filters} WHERE format = %d ORDER BY weight, module, delta", $format);
  if (db_affected_rows($result) == 0 && !db_result(db_query("SELECT 1 FROM {filter_formats} WHERE format = %d", $format))) {
    if ($fallback_to_default) {
      return modalframe_input_formats_get_filters(variable_get('filter_default_format', 1));
    }
  }
  while ($filter = db_fetch_object($result)) {
    $list = module_invoke($filter->module, 'filter', 'list');
    if (isset($list) && is_array($list) && isset($list[$filter->delta])) {
      $filter->title = $list[$filter->delta];
      $filters[] = $filter;
    }
  }
  return $filters;
}

/**
 * Helper function to retrieve the list of filters assigned to an input format.
 */
function modalframe_input_formats_get_filters($format) {
  $filters = array();
  foreach (modalframe_input_formats_list_format($format, TRUE) as $filter) {
    $filters[] = $filter->title;
  }
  return (!empty($filters) ? implode(', ', $filters) : '');
}

/**
 * Find out if the given input format is configurable.
 */
function modalframe_input_formats_is_filter_configurable($format) {
  foreach (modalframe_input_formats_list_format($format) as $filter) {
    $form_module = module_invoke($filter->module, 'filter', 'settings', $filter->delta, $format);
    if (isset($form_module) && is_array($form_module) && !empty($form_module)) {
      return TRUE;
    }
  }
  return FALSE;
}
