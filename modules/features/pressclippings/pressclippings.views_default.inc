<?php

/**
 * Implementation of hook_views_default_views().
 */
function pressclippings_views_default_views() {
  $views = array();

  // Exported view: bo_pressreleases
  $view = new view;
  $view->name = 'bo_pressreleases';
  $view->description = 'Liste der Pressemeldungen';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['title'] = 'Pressespiegel: Arbeit im 21. Jahrhundert';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Beträge pro Seite';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_smallteaser_fid' => 'field_smallteaser_fid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'body' => array(
      'separator' => '',
    ),
    'field_smallteaser_fid' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['exposed_block'] = TRUE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['label'] = '';
  $handler->display->display_options['header']['text']['empty'] = TRUE;
  $handler->display->display_options['header']['text']['content'] = 'Der Pressespiegel soll die wissenschaftliche Auseinandersetzung des Förderschwerpunkts mit dem Thema „Balance von Flexibilität und Stabilität in einer sich wandelnden Arbeitswelt“ durch <b>aktuelle Meldungen</b> ergänzen. Die Pressemeldungen umfasst einerseits Nachrichten, die die Verbundprojekte und Teilvorhaben betreffen (<b>Blick nach innen</b>), andererseits Meldungen, die einschlägige Themen außerhalb des Förderschwerpunkts betreffen (<b>Blick nach außen</b>). Vorschläge zu Themen oder weiteren Quellen, die berücksichtigt werden sollten, werden gerne berücksichtigt.
<br><br>';
  $handler->display->display_options['header']['text']['format'] = '2';
  /* Feld: Inhalt: Kleines Bild für die Startseite / Logo der Quelle (field_smallteaser) */
  $handler->display->display_options['fields']['field_smallteaser_fid']['id'] = 'field_smallteaser_fid';
  $handler->display->display_options['fields']['field_smallteaser_fid']['table'] = 'node_data_field_smallteaser';
  $handler->display->display_options['fields']['field_smallteaser_fid']['field'] = 'field_smallteaser_fid';
  $handler->display->display_options['fields']['field_smallteaser_fid']['label'] = 'Quelle';
  $handler->display->display_options['fields']['field_smallteaser_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_smallteaser_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_smallteaser_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_smallteaser_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_smallteaser_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_smallteaser_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_smallteaser_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_smallteaser_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_smallteaser_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_smallteaser_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_smallteaser_fid']['label_type'] = 'custom';
  $handler->display->display_options['fields']['field_smallteaser_fid']['format'] = 'pic-1c-square_default';
  /* Feld: Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Vollständige Pressemeldung';
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Feld: Node: Textkörper */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Vorschau';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 1;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Sortierkriterien: Inhalt: Pressemeldung vom (field_pressdate) */
  $handler->display->display_options['sorts']['field_pressdate_value']['id'] = 'field_pressdate_value';
  $handler->display->display_options['sorts']['field_pressdate_value']['table'] = 'node_data_field_pressdate';
  $handler->display->display_options['sorts']['field_pressdate_value']['field'] = 'field_pressdate_value';
  $handler->display->display_options['sorts']['field_pressdate_value']['order'] = 'DESC';
  /* Filter: Node: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pressemeldung' => 'pressemeldung',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter: Taxonomie: Begriff */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Kennzeichnung';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['case'] = 0;
  
/* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'presse';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Pressespiegel';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  return $views;
}
