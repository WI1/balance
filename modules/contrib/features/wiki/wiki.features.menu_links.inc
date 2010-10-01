<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:enzyklopaedie
  $menu_links['primary-links:enzyklopaedie'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'enzyklopaedie',
    'router_path' => 'enzyklopaedie',
    'link_title' => 'Enzyklopädie',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Enzyklopädie');


  return $menu_links;
}
