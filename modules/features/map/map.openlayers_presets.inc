<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function map_openlayers_presets() {
  $export = array();
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'research_map';
  $openlayers_presets->title = 'Forschungslandkarte';
  $openlayers_presets->description = 'Shows a research map';
  $openlayers_presets->data = array(
    'width' => '780px',
    'height' => '482px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '8.7011718746513, 51.426614495565',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'bo_gmap_forschungsladnkarte_openlayers_1' => 'bo_gmap_forschungsladnkarte_openlayers_1',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'bo_gmap_forschungsladnkarte_openlayers_1' => 'bo_gmap_forschungsladnkarte_openlayers_1',
        ),
        'distance' => '20',
        'threshold' => 'null',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'bo_gmap_forschungsladnkarte_openlayers_1' => 'bo_gmap_forschungsladnkarte_openlayers_1',
    ),
    'layer_styles' => array(
      'bo_gmap_forschungsladnkarte_openlayers_1' => 'default_select',
    ),
    'layer_activated' => array(
      'bo_gmap_forschungsladnkarte_openlayers_1' => 'bo_gmap_forschungsladnkarte_openlayers_1',
    ),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['research_map'] = $openlayers_presets;
  return $export;
}
