<?php

/**
 * Implementation of hook_strongarm().
 */
function groups_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_focusgroup';
  $strongarm->value = '0';

  $export['comment_anonymous_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_project';
  $strongarm->value = '0';

  $export['comment_anonymous_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_focusgroup';
  $strongarm->value = '3';

  $export['comment_controls_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_project';
  $strongarm->value = '3';

  $export['comment_controls_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_focusgroup';
  $strongarm->value = '2';

  $export['comment_default_mode_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_project';
  $strongarm->value = '2';

  $export['comment_default_mode_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_focusgroup';
  $strongarm->value = '2';

  $export['comment_default_order_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_project';
  $strongarm->value = '2';

  $export['comment_default_order_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_focusgroup';
  $strongarm->value = '50';

  $export['comment_default_per_page_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_project';
  $strongarm->value = '50';

  $export['comment_default_per_page_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_focusgroup';
  $strongarm->value = '0';

  $export['comment_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_focusgroup';
  $strongarm->value = '1';

  $export['comment_form_location_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_project';
  $strongarm->value = '0';

  $export['comment_form_location_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_focusgroup';
  $strongarm->value = '1';

  $export['comment_preview_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_project';
  $strongarm->value = '0';

  $export['comment_preview_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_project';
  $strongarm->value = '0';

  $export['comment_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_focusgroup';
  $strongarm->value = '1';

  $export['comment_subject_field_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_project';
  $strongarm->value = '1';

  $export['comment_subject_field_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_focusgroup';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '6',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '9',
    'menu' => '1',
    'taxonomy' => '-1',
    'book' => '10',
    'path' => '8',
    'attachments' => '7',
    'detailed_question' => '10',
    'og_description' => '-3',
    'og_selective' => '5',
    'og_register' => '2',
    'og_directory' => '3',
    'og_language' => '0',
    'og_private' => '4',
  );

  $export['content_extra_weights_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_project';
  $strongarm->value = array(
    'title' => '4',
    'body_field' => '6',
    'revision_information' => '21',
    'author' => '2',
    'options' => '3',
    'comment_settings' => '17',
    'menu' => '13',
    'taxonomy' => '7',
    'book' => '1',
    'path' => '14',
    'attachments' => '18',
    'detailed_question' => '9',
    'og_description' => '5',
    'og_selective' => '15',
    'og_register' => '20',
    'og_directory' => '16',
    'og_language' => '0',
    'og_private' => '19',
  );

  $export['content_extra_weights_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_focusgroup';
  $strongarm->value = '0';

  $export['language_content_type_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_project';
  $strongarm->value = '0';

  $export['language_content_type_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_focusgroup';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_project';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_project'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_focusgroup';
  $strongarm->value = '1';

  $export['upload_focusgroup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_project';
  $strongarm->value = '1';

  $export['upload_project'] = $strongarm;
  return $export;
}
