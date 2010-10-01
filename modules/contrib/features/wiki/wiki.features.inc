<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function wiki_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function wiki_imagecache_default_presets() {
  $items = array(
    'pic-1c-square' => array(
      'presetname' => 'pic-1c-square',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '70',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '70',
            'upscale' => 0,
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => 'ffffff',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '70',
              'height' => '70',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
    'userpic-1c-square' => array(
      'presetname' => 'userpic-1c-square',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '70',
            'height' => '70',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function wiki_node_info() {
  $items = array(
    'balancewiki' => array(
      'name' => t('BALANCE Wiki'),
      'module' => 'features',
      'description' => t('Wiki Seite für das thematische BALANCE-Wiki'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'definition' => array(
      'name' => t('Definition'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '1',
      'body_label' => t('Beschreibung'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function wiki_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
