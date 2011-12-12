<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function groups_node_info() {
  $items = array(
    'focusgroup' => array(
      'name' => t('Fokusgruppe'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Kurzbeschreibung'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'project' => array(
      'name' => t('Projekt'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Projektname'),
      'has_body' => '1',
      'body_label' => t('Kurzbeschreibung'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function groups_views_api() {
  return array(
    'api' => '3.0',
  );
}
