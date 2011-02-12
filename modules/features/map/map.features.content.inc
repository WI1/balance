<?php

/**
 * Implementation of hook_content_default_fields().
 */
function map_content_default_fields() {
  $fields = array();

  // Exported field: field_companylogo
  $fields['organisation-field_companylogo'] = array(
    'field_name' => 'field_companylogo',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '33',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'projectlogo_9c_imagelink',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
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
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
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
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Logo',
      'weight' => '33',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_org_project
  $fields['organisation-field_org_project'] = array(
    'field_name' => 'field_org_project',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '45',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project' => 'project',
      'balancewiki' => 0,
      'image' => 0,
      'blog' => 0,
      'definition' => 0,
      'download' => 0,
      'faq' => 0,
      'focusgroup' => 0,
      'forum' => 0,
      'gallery_image' => 0,
      'gallery' => 0,
      'group' => 0,
      'headerimage' => 0,
      'link' => 0,
      'simplenews' => 0,
      'organisation' => 0,
      'page' => 0,
      'panel' => 0,
      'pressemeldung' => 0,
      'sparql' => 0,
      'story' => 0,
      'poll' => 0,
      'event' => 0,
      'wiki' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mitgliedschaft in Projekten',
      'weight' => '45',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_org_project_vp
  $fields['organisation-field_org_project_vp'] = array(
    'field_name' => 'field_org_project_vp',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '46',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'project' => 'project',
      'balancewiki' => 0,
      'image' => 0,
      'blog' => 0,
      'definition' => 0,
      'download' => 0,
      'faq' => 0,
      'focusgroup' => 0,
      'forum' => 0,
      'gallery_image' => 0,
      'gallery' => 0,
      'group' => 0,
      'headerimage' => 0,
      'link' => 0,
      'simplenews' => 0,
      'organisation' => 0,
      'page' => 0,
      'panel' => 0,
      'pressemeldung' => 0,
      'sparql' => 0,
      'story' => 0,
      'poll' => 0,
      'event' => 0,
      'wiki' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Beteiligung als Umsetungspartner',
      'weight' => '46',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Beteiligung als Umsetungspartner');
  t('Logo');
  t('Mitgliedschaft in Projekten');

  return $fields;
}
