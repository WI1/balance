<?php

/**
 * Implementation of hook_content_default_fields().
 */
function events_content_default_fields() {
  $fields = array();

  // Exported field: field_smallteaser
  $fields['event-field_smallteaser'] = array(
    'field_name' => 'field_smallteaser',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'pic-1c-square_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'pic_2c_square_default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '150x100',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'Balance-Logo_30.png',
        'filepath' => 'sites/balanceonline.org/files/imagefield_default_images/Balance-Logo_30_0.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/balanceonline.org/files/imagefield_default_images/Balance-Logo_30_0.png',
        'filesize' => 6417,
        'uid' => '8',
        'status' => 1,
        'timestamp' => 1287829438,
        'fid' => '1080',
      ),
      'use_default_image' => 1,
      'label' => 'Kleines Bild für die Startseite / Logo der Quelle',
      'weight' => '-3',
      'description' => 'Dieses Bild wird für Beiträge angezeigt, die auf der Startseite erscheinen.

Bitte das Logo der Quelle (also z.B. das FAZ-Logo) oder ein passendes Teaser-Bilder (z.B. eine Grafik aus dem Beitrag) hochladen.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Kleines Bild für die Startseite / Logo der Quelle');

  return $fields;
}
