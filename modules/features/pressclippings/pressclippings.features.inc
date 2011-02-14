<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function pressclippings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function pressclippings_node_info() {
  $items = array(
    'pressemeldung' => array(
      'name' => t('Pressemeldung'),
      'module' => 'features',
      'description' => t('Hiermit werden Meldungen für den Pressespiegel (sowohl Blick nach innen, als auch Blick nach außen) erstellt.'),
      'has_title' => '1',
      'title_label' => t('Überschrift'),
      'has_body' => '1',
      'body_label' => t('Textkörper'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function pressclippings_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
