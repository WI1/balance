<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function pressclippings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:presse
  $menu_links['primary-links:presse'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'presse',
    'router_path' => 'presse',
    'link_title' => 'Pressespiegel',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/2',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Pressespiegel');


  return $menu_links;
}
