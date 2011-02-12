<?php

/**
 * Implementation of hook_views_default_views().
 */
function map_views_default_views() {
  $views = array();

  // Exported view: bo_exhibit_forschungslandkarte
  $view = new view;
  $view->name = 'bo_exhibit_forschungslandkarte';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['title'] = 'Forschungslandkarte';
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_projectlogo_fid_1' => 'field_projectlogo_fid_1',
    'field_projectlogo_fid' => 'field_projectlogo_fid',
    'latitude' => 'latitude',
    'longitude' => 'longitude',
    'title' => 'title',
    'address' => 'address',
    'street' => 'street',
    'postal_code' => 'postal_code',
    'city' => 'city',
    'country' => 'country',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_projectlogo_fid_1' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_projectlogo_fid' => array(
      'align' => '',
      'separator' => '',
    ),
    'latitude' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'longitude' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'address' => array(
      'align' => '',
      'separator' => '',
    ),
    'street' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'postal_code' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
    'country' => array(
      'sortable' => 1,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  /* Beziehung: Inhalt: Mitgliedschaft in Projekten (field_org_project) */
  $handler->display->display_options['relationships']['field_org_project_nid']['id'] = 'field_org_project_nid';
  $handler->display->display_options['relationships']['field_org_project_nid']['table'] = 'node_data_field_org_project';
  $handler->display->display_options['relationships']['field_org_project_nid']['field'] = 'field_org_project_nid';
  $handler->display->display_options['relationships']['field_org_project_nid']['label'] = 'Projekt';
  $handler->display->display_options['relationships']['field_org_project_nid']['required'] = 0;
  /* Beziehung: Inhalt: Beteiligung als Umsetungspartner (field_org_project_vp) */
  $handler->display->display_options['relationships']['field_org_project_vp_nid']['id'] = 'field_org_project_vp_nid';
  $handler->display->display_options['relationships']['field_org_project_vp_nid']['table'] = 'node_data_field_org_project_vp';
  $handler->display->display_options['relationships']['field_org_project_vp_nid']['field'] = 'field_org_project_vp_nid';
  $handler->display->display_options['relationships']['field_org_project_vp_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_org_project_vp_nid']['delta'] = '-1';
  /* Feld: Node: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Feld: Inhalt: Mitgliedschaft in Projekten (field_org_project) */
  $handler->display->display_options['fields']['field_org_project_nid']['id'] = 'field_org_project_nid';
  $handler->display->display_options['fields']['field_org_project_nid']['table'] = 'node_data_field_org_project';
  $handler->display->display_options['fields']['field_org_project_nid']['field'] = 'field_org_project_nid';
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_org_project_nid']['format'] = 'plain';
  $handler->display->display_options['fields']['field_org_project_nid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_org_project_nid']['multiple']['multiple_reversed'] = 0;
  /* Feld: Inhalt: Beteiligung als Umsetungspartner (field_org_project_vp) */
  $handler->display->display_options['fields']['field_org_project_vp_nid']['id'] = 'field_org_project_vp_nid';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['table'] = 'node_data_field_org_project_vp';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['field'] = 'field_org_project_vp_nid';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['format'] = 'plain';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['multiple']['multiple_reversed'] = 0;
  /* Feld: Inhalt: Logo (field_companylogo) */
  $handler->display->display_options['fields']['field_companylogo_fid']['id'] = 'field_companylogo_fid';
  $handler->display->display_options['fields']['field_companylogo_fid']['table'] = 'node_data_field_companylogo';
  $handler->display->display_options['fields']['field_companylogo_fid']['field'] = 'field_companylogo_fid';
  $handler->display->display_options['fields']['field_companylogo_fid']['label'] = 'Logo';
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_companylogo_fid']['format'] = 'logo-small_default';
  /* Feld: Inhalt: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['id'] = 'field_projectlogo_fid_1';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['relationship'] = 'field_org_project_nid';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['label'] = 'Umsetzungspartner im Projekt';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['format'] = 'projectlogo_1-3c_url';
  /* Feld: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  /* Feld: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  /* Feld: Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Umsetzungspartner';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Location: Adresse */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  /* Feld: Location: Straße */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  /* Feld: Location: Postleitzahl */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  /* Feld: Location: Ort */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Feld: Location: Land */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Feld: Taxonomie: Alle Begriffe */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_org_project_nid';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    '2' => 2,
    '8' => 0,
    '1' => 0,
    '5' => 0,
    '7' => 0,
    '6' => 0,
    '3' => 0,
    '4' => 0,
  );
  /* Feld: Customfield: Markup */
  $handler->display->display_options['fields']['markup']['id'] = 'markup';
  $handler->display->display_options['fields']['markup']['table'] = 'customfield';
  $handler->display->display_options['fields']['markup']['field'] = 'markup';
  $handler->display->display_options['fields']['markup']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['markup']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['markup']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['html'] = 0;
  $handler->display->display_options['fields']['markup']['hide_empty'] = 0;
  $handler->display->display_options['fields']['markup']['empty_zero'] = 0;
  $handler->display->display_options['fields']['markup']['value'] = 'Projektmitglied';
  $handler->display->display_options['fields']['markup']['format'] = '1';
  /* Feld: Location: Coordinates */
  $handler->display->display_options['fields']['coordinates']['id'] = 'coordinates';
  $handler->display->display_options['fields']['coordinates']['table'] = 'location';
  $handler->display->display_options['fields']['coordinates']['field'] = 'coordinates';
  $handler->display->display_options['fields']['coordinates']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['coordinates']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['coordinates']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['html'] = 0;
  $handler->display->display_options['fields']['coordinates']['hide_empty'] = 0;
  $handler->display->display_options['fields']['coordinates']['empty_zero'] = 0;
  $handler->display->display_options['fields']['coordinates']['style'] = 'dd';
  /* Filter: Node: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organisation' => 'organisation',
  );
  /* Filter: Inhalt: Mitgliedschaft in Projekten (field_org_project) */
  $handler->display->display_options['filters']['field_org_project_nid']['id'] = 'field_org_project_nid';
  $handler->display->display_options['filters']['field_org_project_nid']['table'] = 'node_data_field_org_project';
  $handler->display->display_options['filters']['field_org_project_nid']['field'] = 'field_org_project_nid';
  $handler->display->display_options['filters']['field_org_project_nid']['operator'] = 'not empty';
  
/* Display: Newsfeed */
  $handler = $view->new_display('feed', 'Newsfeed', 'feed_1');
  $handler->display->display_options['style_plugin'] = 'exhibit_json';
  $handler->display->display_options['style_options']['type_label'] = 'Institution';
  $handler->display->display_options['style_options']['type_plural_label'] = 'Institutionen';
  $handler->display->display_options['row_plugin'] = 'node_exhibit';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['id'] = 'field_projectlogo_fid_1';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['relationship'] = 'field_org_project_vp_nid';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['label'] = 'Umsetzungspartner im Projekt';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['format'] = 'projectlogo_1-3c_url';
  /* Feld: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  /* Feld: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  /* Feld: Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Umsetzungspartner';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Location: Adresse */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  /* Feld: Location: Straße */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  /* Feld: Location: Postleitzahl */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  /* Feld: Location: Ort */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Feld: Location: Land */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Feld: Inhalt: Beteiligung als Umsetungspartner (field_org_project_vp) */
  $handler->display->display_options['fields']['field_org_project_vp_nid']['id'] = 'field_org_project_vp_nid';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['table'] = 'node_data_field_org_project_vp';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['field'] = 'field_org_project_vp_nid';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['format'] = 'plain';
  $handler->display->display_options['fields']['field_org_project_vp_nid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_org_project_vp_nid']['multiple']['multiple_reversed'] = 0;
  /* Feld: Inhalt: Mitgliedschaft in Projekten (field_org_project) */
  $handler->display->display_options['fields']['field_org_project_nid']['id'] = 'field_org_project_nid';
  $handler->display->display_options['fields']['field_org_project_nid']['table'] = 'node_data_field_org_project';
  $handler->display->display_options['fields']['field_org_project_nid']['field'] = 'field_org_project_nid';
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_org_project_nid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_org_project_nid']['format'] = 'plain';
  $handler->display->display_options['fields']['field_org_project_nid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_org_project_nid']['multiple']['multiple_reversed'] = 0;
  /* Feld: Taxonomie: Alle Begriffe */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_org_project_vp_nid';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    '2' => 2,
    '8' => 0,
    '1' => 0,
    '5' => 0,
    '7' => 0,
    '6' => 0,
    '3' => 0,
    '4' => 0,
  );
  /* Feld: Customfield: Markup */
  $handler->display->display_options['fields']['markup']['id'] = 'markup';
  $handler->display->display_options['fields']['markup']['table'] = 'customfield';
  $handler->display->display_options['fields']['markup']['field'] = 'markup';
  $handler->display->display_options['fields']['markup']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['markup']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['markup']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['markup']['alter']['html'] = 0;
  $handler->display->display_options['fields']['markup']['hide_empty'] = 0;
  $handler->display->display_options['fields']['markup']['empty_zero'] = 0;
  $handler->display->display_options['fields']['markup']['value'] = 'Umsetzungspartner';
  $handler->display->display_options['fields']['markup']['format'] = '1';
  /* Feld: Location: Coordinates */
  $handler->display->display_options['fields']['coordinates']['id'] = 'coordinates';
  $handler->display->display_options['fields']['coordinates']['table'] = 'location';
  $handler->display->display_options['fields']['coordinates']['field'] = 'coordinates';
  $handler->display->display_options['fields']['coordinates']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['coordinates']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['coordinates']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['coordinates']['alter']['html'] = 0;
  $handler->display->display_options['fields']['coordinates']['hide_empty'] = 0;
  $handler->display->display_options['fields']['coordinates']['empty_zero'] = 0;
  $handler->display->display_options['fields']['coordinates']['style'] = 'dd';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organisation' => 'organisation',
  );
  /* Filter: Inhalt: Beteiligung als Umsetungspartner (field_org_project_vp) */
  $handler->display->display_options['filters']['field_org_project_vp_nid']['id'] = 'field_org_project_vp_nid';
  $handler->display->display_options['filters']['field_org_project_vp_nid']['table'] = 'node_data_field_org_project_vp';
  $handler->display->display_options['filters']['field_org_project_vp_nid']['field'] = 'field_org_project_vp_nid';
  $handler->display->display_options['filters']['field_org_project_vp_nid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'projekte/organisationen/umsetzungspartner/json';
  
/* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organisation' => 'organisation',
  );
  $handler->display->display_options['path'] = 'admin/forschungslandkarte';
  
/* Display: Newsfeed */
  $handler = $view->new_display('feed', 'Newsfeed', 'feed_2');
  $handler->display->display_options['style_plugin'] = 'exhibit_json';
  $handler->display->display_options['style_options']['type_label'] = 'Institution';
  $handler->display->display_options['style_options']['type_plural_label'] = 'Institutionen';
  $handler->display->display_options['row_plugin'] = 'node_exhibit';
  $handler->display->display_options['path'] = 'projekte/organisationen/projektmitglieder/json';

  $views[$view->name] = $view;

  return $views;
}
