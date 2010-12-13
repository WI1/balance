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
        'centerpoint' => '10.371093749585, 51.041393896627',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '486750.996033,5997554.986293,1817366.784183,7352630.623489',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'bo_gmap_forschungsladnkarte_openlayers_1' => 'bo_gmap_forschungsladnkarte_openlayers_1',
          'bo_gmap_forschungsladnkarte_openlayers_2' => 'bo_gmap_forschungsladnkarte_openlayers_2',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
    ),
    'default_layer' => 'google_physical',
    'layers' => array(
      'google_physical' => 'google_physical',
      'bo_gmap_forschungsladnkarte_openlayers_1' => 'bo_gmap_forschungsladnkarte_openlayers_1',
      'bo_gmap_forschungsladnkarte_openlayers_2' => 'bo_gmap_forschungsladnkarte_openlayers_2',
    ),
    'layer_styles' => array(
      'bo_gmap_forschungsladnkarte_openlayers_1' => 'forschungslandkarte_kreise',
      'bo_gmap_forschungsladnkarte_openlayers_2' => 'forschungslandkarte_quadrate',
    ),
    'layer_activated' => array(
      'bo_gmap_forschungsladnkarte_openlayers_1' => 'bo_gmap_forschungsladnkarte_openlayers_1',
      'bo_gmap_forschungsladnkarte_openlayers_2' => 'bo_gmap_forschungsladnkarte_openlayers_2',
    ),
    'layer_switcher' => array(
      'bo_gmap_forschungsladnkarte_openlayers_1' => 'bo_gmap_forschungsladnkarte_openlayers_1',
      'bo_gmap_forschungsladnkarte_openlayers_2' => 'bo_gmap_forschungsladnkarte_openlayers_2',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'forschungslandkarte_kreise',
      'select' => 'forschungslandkarte_kreise',
      'temporary' => 'forschungslandkarte_kreise',
    ),
  );

  $export['research_map'] = $openlayers_presets;
  return $export;
}
