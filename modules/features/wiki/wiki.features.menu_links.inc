<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:node/2415
  $menu_links['primary-links:node/2415'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/2415',
    'router_path' => 'node/%',
    'link_title' => 'Enzyklopädie',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Enzyklopädie');


  return $menu_links;
}
