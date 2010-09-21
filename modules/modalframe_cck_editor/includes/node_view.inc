<?php
// $Id: node_view.inc,v 1.1.2.5 2010/01/17 16:38:54 markuspetrux Exp $

/**
 * @file
 * Functions related to node view processing.
 */

/**
 * Helper function for hook_fieldgroup_view().
 */
function _modalframe_cck_editor_fieldgroup_view($node, $group) {
  $type_name = $group['type_name'];
  $group_name = $group['group_name'];
  $settings = variable_get('modalframe_cck_editor_settings_'. $type_name .'-'. $group_name, array());
  // Ignore this field group if our features are not enabled or the current user
  // is not allowed to edit this node.
  if (empty($settings['status']) || !node_access('update', $node)) {
    return;
  }

  // Build list of editable fields in this group.
  $content_type = content_types($type_name);
  $editable_fields = array();
  foreach ($content_type['fields'] as $field_name => $field) {
    if (isset($group['fields'][$field_name]) && content_access('edit', $field, NULL, $node)) {
      $editable_fields[] = $field_name;
    }
  }
  // Ignore this field group if the current user cannot edit its fields.
  if (empty($editable_fields)) {
    return;
  }

  if ($group['group_type'] == 'standard') {
    $selector = 'fieldset.'. str_replace('_', '-', $group_name);
  }
  elseif ($group['group_type'] == 'multigroup') {
    $selector = 'fieldset.content-multigroup-'. str_replace('_', '-', $group_name);
  }
  else {
    // Just for safety, ignore this field group if its type is unknown.
    return;
  }

  // Send javascript and stylesheets to the parent document page.
  modalframe_cck_editor_add_parent_js(array(
    'selector' => $selector,
    'type'     => 'group',
    'name'     => $group_name,
    'label'    => $group['label'],
    'nid'      => $node->nid,
  ));
}

/**
 * Helper function for MODULE_preprocess_content_field().
 */
function _modalframe_cck_editor_content_field_view($node, $field_name) {
  $settings = variable_get('modalframe_cck_editor_settings_'. $node->type .'-'. $field_name, array());
  // Ignore this field if our features are not enabled or the current user
  // is not allowed to edit this node.
  if (empty($settings['status']) || !node_access('update', $node)) {
    return;
  }

  // Load information about the field.
  $field = content_fields($field_name, $node->type);

  // Ignore this field if the current user is not allowed to edit.
  if (!content_access('edit', $field, NULL, $node)) {
    return;
  }

  // Send javascript and stylesheets to the parent document page.
  modalframe_cck_editor_add_parent_js(array(
    'selector' => '.node .field-'. str_replace('_', '-', $field_name),
    'type'     => 'field',
    'name'     => $field_name,
    'label'    => $field['widget']['label'],
    'nid'      => $node->nid,
  ));
}

/**
 * Send javascript and stylesheets to the parent document page.
 *
 * @param $options
 *   An array with the following elements:
 *   - 'selector'  The jQuery selector to find out the target element on the page.
 *   - 'type'      The type of element. It can be 'group' or 'field'.
 *   - 'name'      The name of the field or field group.
 *   - 'label'     The label of the field or field group.
 *   - 'nid'       The ID of the node the target element belongs to.
 */
function modalframe_cck_editor_add_parent_js($options) {
  static $processed_selectors;

  // Send javascript and stylesheets to the page (just once).
  if (!isset($processed_selectors)) {
    $processed_selectors = array();
    modalframe_parent_js();
    drupal_add_css(drupal_get_path('module', 'modalframe_cck_editor') .'/css/modalframe_cck_editor.css');
    drupal_add_js(drupal_get_path('module', 'modalframe_cck_editor') .'/js/parent.js');
  }

  // Make sure the same selector is not sent to the page more than once.
  if (!isset($processed_selectors[$options['selector']])) {
    $processed_selectors[$options['selector']] = TRUE;

    $js_settings = array();
    $js_settings[$options['selector']] = array(
      'type'    => $options['type'],
      'label'   => $options['label'],
      'editUrl' => url('node/'. $options['nid'] .'/edit', array('query' => array(
        'modalframe_cck_editor' => $options['name'],
      ))),
    );
    drupal_add_js(array('modalFrameCCKEditor' => $js_settings), 'setting');
  }
}
