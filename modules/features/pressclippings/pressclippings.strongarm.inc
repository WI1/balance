<?php

/**
 * Implementation of hook_strongarm().
 */
function pressclippings_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pressemeldung';
  $strongarm->value = 0;

  $export['comment_anonymous_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_pressemeldung';
  $strongarm->value = '3';

  $export['comment_controls_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pressemeldung';
  $strongarm->value = '4';

  $export['comment_default_mode_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_pressemeldung';
  $strongarm->value = '1';

  $export['comment_default_order_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pressemeldung';
  $strongarm->value = '50';

  $export['comment_default_per_page_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pressemeldung';
  $strongarm->value = '1';

  $export['comment_form_location_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pressemeldung';
  $strongarm->value = '2';

  $export['comment_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pressemeldung';
  $strongarm->value = '0';

  $export['comment_preview_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pressemeldung';
  $strongarm->value = '1';

  $export['comment_subject_field_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_pressemeldung';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '4',
    'comment_settings' => '7',
    'menu' => '2',
    'book' => '3',
    'path' => '6',
    'attachments' => '5',
  );

  $export['content_extra_weights_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pressemeldung';
  $strongarm->value = '0';

  $export['language_content_type_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pressemeldung';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_pressemeldung'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_pressemeldung';
  $strongarm->value = '1';

  $export['upload_pressemeldung'] = $strongarm;
  return $export;
}
