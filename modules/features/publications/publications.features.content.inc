<?php

/**
 * Implementation of hook_content_default_fields().
 */
function publications_content_default_fields() {
  $fields = array();

  // Exported field: field_projectlogo
  $fields['focusgroup-field_projectlogo'] = array(
    'field_name' => 'field_projectlogo',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'projectlogo_9c_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'projectlogo_9c_default',
        'exclude' => 0,
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
      'file_path' => 'logos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '124x124',
      'min_resolution' => '0',
      'alt' => 'Fokusgruppenlogo',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'Balance-Logo_30.png',
        'filepath' => 'sites/balanceonline.org/files/imagefield_default_images/Balance-Logo_30.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/balanceonline.org/files/imagefield_default_images/Balance-Logo_30.png',
        'filesize' => '8411',
        'uid' => '8',
        'status' => 1,
        'timestamp' => 1264440203,
        'fid' => '150',
      ),
      'use_default_image' => 1,
      'label' => 'Projektlogo',
      'weight' => '14',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Projektlogo');

  return $fields;
}
