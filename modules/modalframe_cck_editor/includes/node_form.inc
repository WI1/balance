<?php
// $Id: node_form.inc,v 1.1.2.7 2010/01/18 22:40:11 markuspetrux Exp $

/**
 * @file
 * Functions related to node form processing.
 */

/**
 * Alter the node edit form.
 */
function modalframe_cck_editor_node_edit_form_alter(&$form) {
  $type_name = $form['#node']->type;

  if (strpos($_GET['modalframe_cck_editor'], 'field_') === 0) {
    $field_name = $_GET['modalframe_cck_editor'];
    $field = content_fields($field_name, $type_name);

    // Ignore further processing if the requested field name is unknown.
    if (empty($field)) {
      return;
    }

    // Adjust the page title to reflect we're just editing a field.
    drupal_set_title(t('@label in @title', array('@label' => $field['widget']['label'], '@title' => $form['#node']->title)));

    // Build list of possible editable fields.
    $editable_fields[$field_name] = TRUE;
  }
  else {
    $group_name = $_GET['modalframe_cck_editor'];
    $groups = fieldgroup_groups($type_name);

    // Ignore further processing if the requested group name is unknown.
    if (!isset($groups[$group_name])) {
      return;
    }
    $group = $groups[$group_name];

    // Adjust the page title to reflect we're just editing a field group.
    drupal_set_title(t('@label in @title', array('@label' => $group['label'], '@title' => $form['#node']->title)));

    // Build list of possible editable fields.
    $editable_fields = $group['fields'];
  }

  // Scan the form to keep only visible the elements that are part of the
  // requested field or field group.
  foreach (element_children($form) as $key) {
    if (isset($form[$key]) && $form[$key]) {
      if ($key == 'buttons') {
        // Keep only the Save button in this form.
        foreach (element_children($form['buttons']) as $key) {
          if ($key != 'submit') {
            $form['buttons'][$key]['#access'] = FALSE;
          }
        }
      }
      // Lock access to fields that are not part of the requested field group,
      // except hidden fields and items of type 'value', that are necessary for
      // proper form processing.
      elseif ((!isset($form[$key]['#type']) && isset($form[$key]['#theme'])) || (isset($form[$key]['#type']) && !in_array($form[$key]['#type'], array('value', 'hidden')))) {
        if (!isset($editable_fields[$key])) {
          modalframe_cck_editor_hide_form_element_recursive($form[$key]);
        }
      }
    }
  }

  // Save the name of the target field group into the form for submit processing.
  $form['#modalframe_cck_editor'] = $_GET['modalframe_cck_editor'];

  // Attach our submit handler to the Save button. This way we can be sure that
  // node_save() has already been executed when our submit handler gets control.
  // Note the we are using a proxy function defined on the main module script
  // because the node edit form is often cached, meaning the current script may
  // not be loaded automatically during form submit processing.
  $form['buttons']['submit']['#submit'][] = 'modalframe_cck_editor_node_edit_form_submit_proxy';
}

/**
 * Hide an element from the form recursively.
 */
function modalframe_cck_editor_hide_form_element_recursive(&$element) {
  foreach (element_children($element) as $key) {
    if (isset($element[$key]) && $element[$key]) {
      // Traverse the form recursively.
      modalframe_cck_editor_hide_form_element_recursive($element[$key]);
    }
  }

  // Hide the element from the form.
  $element['#access'] = FALSE;
  if (isset($element['#type'])) {
    $element['#type'] = 'value';
  }
  if (isset($element['#default_value'])) {
    $element['#value'] = $element['#default_value'];
  }
}

/**
 * Process the node edit form.
 */
function modalframe_cck_editor_node_edit_form_submit($form, &$form_state) {
  $form_values = &$form_state['values'];

  // Load information about the target field or field group as well as their
  // own corresponding CCK Editor settings.
  $type_name = $form_values['type'];
  if (strpos($form['#modalframe_cck_editor'], 'field_') === 0) {
    $field_name = $form['#modalframe_cck_editor'];
    $field = content_fields($field_name, $type_name);
    $settings = variable_get('modalframe_cck_editor_settings_'. $type_name .'-'. $field_name, array());
  }
  else {
    $group_name = $form['#modalframe_cck_editor'];
    $groups = fieldgroup_groups($type_name);
    $group = $groups[$group_name];
    $settings = variable_get('modalframe_cck_editor_settings_'. $type_name .'-'. $group_name, array());
  }

  // Load the updated node. Note that node_save() has already been executed,
  // however, the static storage of node_load() may contain the previous
  // version of the node, so we need here to reset node_load() storage.
  $node = node_load($form_values['nid'], NULL, TRUE);
  $node->build_mode = NODE_BUILD_NORMAL;

  // Build arguments for the modal frame onSubmit callback based on settings.
  $modalframe_args = array();

  if ($settings['status'] == MODALFRAME_CCK_EDITOR_STATUS_RELOAD_PAGE) {
    // Ok, so we just need to tell the client-side to reload the parent page.
    drupal_set_message(t('Reloading the page. Please, wait...'));
    $modalframe_args['reload'] = TRUE;
  }
  else {
    // We are requested to refresh only the target element on the page.
    if (!empty($field)) {
      // Render the new field and close the child dialog.
      $modalframe_args['content'] = content_view_field($field, $node);
    }
    elseif (!empty($group)) {
      // If the field group is collapsible, make sure we do not render it collapsed.
      if (isset($group['settings']['display']['full']['format']) && $group['settings']['display']['full']['format'] == 'fieldset_collapsed') {
        $group['settings']['display']['full']['format'] = 'fieldset_collapsible';
      }

      // Render the new field group and close the child dialog.
      $modalframe_args['content'] = fieldgroup_view_group($group, $node);
    }
  }

  // Allow external modules alter the modal frame arguments to close the dialog.
  drupal_alter('modalframe_cck_editor_close_dialog', $modalframe_args, $node, 'group', $group);

  modalframe_close_dialog($modalframe_args);
}
