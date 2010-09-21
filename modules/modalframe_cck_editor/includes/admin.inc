<?php
// $Id: admin.inc,v 1.1.2.4 2010/01/17 16:39:25 markuspetrux Exp $

/**
 * @file
 * Administration functions for the module.
 */

/**
 * Alter the field group settings form.
 */
function modalframe_cck_editor_fieldgroup_edit_form_alter(&$form) {
  $type_name = $form['#content_type']['type'];
  $group_name = $form['group_name']['#default_value'];

  // Build the variable name with the group name and also the node type,
  // because the same group name could be used on different node types.
  $settings = variable_get('modalframe_cck_editor_settings_'. $type_name .'-'. $group_name, array());

  $form['settings']['display']['modalframe_cck_editor'] = array(
    '#type' => 'fieldset',
    '#title' => t('Modal frame editor settings'),
    '#tree' => TRUE,
  );
  $form['settings']['display']['modalframe_cck_editor']['status'] = array(
    '#type' => 'radios',
    '#title' => t('Status'),
    '#options' => array(
      MODALFRAME_CCK_EDITOR_STATUS_DISABLED        => t('Disabled'),
      MODALFRAME_CCK_EDITOR_STATUS_REFRESH_ELEMENT => t('Enabled, and refresh the target element after a successful edit operation'),
      MODALFRAME_CCK_EDITOR_STATUS_RELOAD_PAGE     => t('Enabled, and reload the current page after a successful edit operation'),
    ),
    '#default_value' => (isset($settings['status']) ? $settings['status'] : 0),
    '#description' => t('Use this options to enable edition of this field group in a Modal Frame from the node view. Only users with edit permission are allowed to use this feature.'),
  );
  $form['#submit'][] = 'modalframe_cck_editor_fieldgroup_edit_form_submit';
}

/**
 * Process the field group settings form.
 */
function modalframe_cck_editor_fieldgroup_edit_form_submit($form, &$form_state) {
  $form_values = &$form_state['values'];
  $type_name = $form['#content_type']['type'];
  $group_name = $form_values['group_name'];
  $settings = $form_values['settings']['display']['modalframe_cck_editor'];
  variable_set('modalframe_cck_editor_settings_'. $type_name .'-'. $group_name, $settings);
}

/**
 * Alter the field settings form.
 */
function modalframe_cck_editor_field_edit_form_alter(&$form) {
  $type_name = $form['#field']['type_name'];
  $field_name = $form['#field']['field_name'];

  // It should not be possible to allow edition of fields that are part of
  // a multigroup. This is because delta values for fields in multigroups
  // must be in sync with each other.
  foreach (fieldgroup_groups($type_name) as $group_name => $group) {
    if ($group['group_type'] == 'multigroup' && isset($group['fields'][$field_name])) {
      return;
    }
  }

  // Build the variable name with the field name and also the node type,
  // because the same field could be shared between different node types.
  $settings = variable_get('modalframe_cck_editor_settings_'. $type_name .'-'. $field_name, array());

  $form['widget']['modalframe_cck_editor'] = array(
    '#type' => 'fieldset',
    '#title' => t('Modal frame editor settings'),
    '#tree' => TRUE,
  );
  $form['widget']['modalframe_cck_editor']['status'] = array(
    '#type' => 'radios',
    '#title' => t('Status'),
    '#options' => array(
      MODALFRAME_CCK_EDITOR_STATUS_DISABLED        => t('Disabled'),
      MODALFRAME_CCK_EDITOR_STATUS_REFRESH_ELEMENT => t('Enabled, and refresh the target element after a successful edit operation'),
      MODALFRAME_CCK_EDITOR_STATUS_RELOAD_PAGE     => t('Enabled, and reload the current page after a successful edit operation'),
    ),
    '#default_value' => (isset($settings['status']) ? $settings['status'] : 0),
    '#description' => t('Use this options to enable edition of this field in a Modal Frame from the node view. Only users with edit permission are allowed to use this feature.'),
  );
  $form['#submit'][] = 'modalframe_cck_editor_field_edit_form_submit_proxy';
}

/**
 * Process the field settings form.
 */
function modalframe_cck_editor_field_edit_form_submit($form, &$form_state) {
  $form_values = &$form_state['values'];
  $type_name = $form_values['type_name'];
  $field_name = $form_values['field_name'];
  $settings = $form_values['modalframe_cck_editor'];
  variable_set('modalframe_cck_editor_settings_'. $type_name .'-'. $field_name, $settings);
}
