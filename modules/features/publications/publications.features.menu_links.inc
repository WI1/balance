<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function publications_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:publikationen
  $menu_links['primary-links:publikationen'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'publikationen',
    'router_path' => 'publikationen',
    'link_title' => 'Publikationen',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Publikationen');


  return $menu_links;
}
