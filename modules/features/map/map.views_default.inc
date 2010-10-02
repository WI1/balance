<?php

/**
 * Implementation of hook_views_default_views().
 */
function map_views_default_views() {
  $views = array();

  // Exported view: bo_gmap_forschungsladnkarte
  $view = new view;
  $view->name = 'bo_gmap_forschungsladnkarte';
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
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
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
  /* Feld: Inhalt: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['relationship'] = 'field_org_project_nid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['label'] = 'Mitglied im Projekt:';
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'pic-1c-square_linked';
  /* Feld: Inhalt: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['id'] = 'field_projectlogo_fid_1';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['relationship'] = 'field_org_project_vp_nid';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['label'] = 'Umsetzungspartner im Projekt';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_projectlogo_fid_1']['format'] = 'pic-1c-square_linked';
  /* Filter: Node: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organisation' => 'organisation',
  );
  
/* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['preset'] = 'research_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'forschungslandkarte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Forschungslandkarte';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  
/* Display: OpenLayers Data */
  $handler = $view->new_display('openlayers', 'OpenLayers Data', 'openlayers_1');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  $views[$view->name] = $view;

  return $views;
}
