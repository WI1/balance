<?php

/**
 * Implementation of hook_views_default_views().
 */
function groups_views_default_views() {
  $views = array();

  // Exported view: bo_admin_projects_fg
  $view = new view;
  $view->name = 'bo_admin_projects_fg';
  $view->description = 'Lists all Projects and their node relationships to Focusgroups';
  $view->tag = 'bo';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => 10,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_fg_membership_nid' => 'field_project_fg_membership_nid',
    'tid' => 'tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_project_fg_membership_nid' => array(
      'align' => '',
      'separator' => '',
    ),
    'tid' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Beziehung: Inhalt: Mitglied in Fokusgruppe (field_project_fg_membership) */
  $handler->display->display_options['relationships']['field_project_fg_membership_nid']['id'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['relationships']['field_project_fg_membership_nid']['table'] = 'node_data_field_project_fg_membership';
  $handler->display->display_options['relationships']['field_project_fg_membership_nid']['field'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['relationships']['field_project_fg_membership_nid']['required'] = 0;
  /* Feld: Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Feld: Inhalt: Mitglied in Fokusgruppe (field_project_fg_membership) */
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['id'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['table'] = 'node_data_field_project_fg_membership';
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['field'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_fg_membership_nid']['link_to_node'] = 0;
  /* Feld: Taxonomie: Alle Begriffe */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['tid']['limit'] = 1;
  $handler->display->display_options['fields']['tid']['vids'] = array(
    1 => 1,
    8 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    2 => 0,
    3 => 0,
    4 => 0,
  );
  /* Feld: Inhalt: Farbcode (field_color_hex) */
  $handler->display->display_options['fields']['field_color_hex_value']['id'] = 'field_color_hex_value';
  $handler->display->display_options['fields']['field_color_hex_value']['table'] = 'node_data_field_color_hex';
  $handler->display->display_options['fields']['field_color_hex_value']['field'] = 'field_color_hex_value';
  $handler->display->display_options['fields']['field_color_hex_value']['relationship'] = 'field_project_fg_membership_nid';
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_color_hex_value']['format'] = 'editable_html';
  /* Filter: Node: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'admin/projects_fg';

  $views[$view->name] = $view;

  // Exported view: fg_projects
  $view = new view;
  $view->name = 'fg_projects';
  $view->description = 'Attribuierter View über alle Projekte zur anzeige auf der jeweiligen Fokusgruppenseite';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Taxonomie: Begriff */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  /* Feld: Inhalt: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'pic-1c-square_linked';
  /* Feld: Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Node: Textkörper */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Feld: Taxonomie: Begriff */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = 0;
  /* Sortierkriterien: Taxonomie: Begriff */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Sortierkriterien: Node: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Argument: Taxonomie: Begriff */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['ignorecase'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Filter: Node: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Taxonomie: Vokabular */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['vid']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'projekte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  return $views;
}
