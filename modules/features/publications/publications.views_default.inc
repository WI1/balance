<?php

/**
 * Implementation of hook_views_default_views().
 */
function publications_views_default_views() {
  $views = array();

  // Exported view: bo_exhibit_publications
  $view = new view;
  $view->name = 'bo_exhibit_publications';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Beziehung: Biblio: Drupal User ID */
  $handler->display->display_options['relationships']['drupal_uid']['id'] = 'drupal_uid';
  $handler->display->display_options['relationships']['drupal_uid']['table'] = 'biblio_contributor_data';
  $handler->display->display_options['relationships']['drupal_uid']['field'] = 'drupal_uid';
  $handler->display->display_options['relationships']['drupal_uid']['required'] = 0;
  /* Beziehung: OGUR Groups: OGUR group node (member) */
  $handler->display->display_options['relationships']['gid']['id'] = 'gid';
  $handler->display->display_options['relationships']['gid']['table'] = 'og_users_roles';
  $handler->display->display_options['relationships']['gid']['field'] = 'gid';
  $handler->display->display_options['relationships']['gid']['relationship'] = 'drupal_uid';
  $handler->display->display_options['relationships']['gid']['label'] = 'Projekt';
  $handler->display->display_options['relationships']['gid']['required'] = 0;
  /* Feld: Biblio: Biblio Zitat */
  $handler->display->display_options['fields']['citation']['id'] = 'citation';
  $handler->display->display_options['fields']['citation']['table'] = 'biblio';
  $handler->display->display_options['fields']['citation']['field'] = 'citation';
  $handler->display->display_options['fields']['citation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['citation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['citation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['citation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['citation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['citation']['style_name'] = 'apa';
  /* Feld: Biblio: Art der Veröffentlichung */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'biblio_types';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  /* Feld: Biblio: Year of Publication */
  $handler->display->display_options['fields']['biblio_year']['id'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_year']['field'] = 'biblio_year';
  $handler->display->display_options['fields']['biblio_year']['label'] = 'Jahr der Veröffentlichung';
  $handler->display->display_options['fields']['biblio_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['biblio_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['biblio_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['biblio_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['biblio_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['biblio_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['biblio_year']['biblio_label'] = 1;
  /* Feld: Taxonomie: Alle Begriffe */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'term_node';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
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
  /* Feld: Biblio: Authors */
  $handler->display->display_options['fields']['biblio_authors']['id'] = 'biblio_authors';
  $handler->display->display_options['fields']['biblio_authors']['table'] = 'biblio';
  $handler->display->display_options['fields']['biblio_authors']['field'] = 'biblio_authors';
  $handler->display->display_options['fields']['biblio_authors']['label'] = 'Autoren';
  $handler->display->display_options['fields']['biblio_authors']['hide_empty'] = 0;
  $handler->display->display_options['fields']['biblio_authors']['empty_zero'] = 0;
  $handler->display->display_options['fields']['biblio_authors']['author_userlink'] = 1;
  /* Feld: Inhalt: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['relationship'] = 'gid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['label'] = 'Projektlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'projectlogo_1-3c_url';
  
/* Display: Newsfeed */
  $handler = $view->new_display('feed', 'Newsfeed', 'feed_1');
  $handler->display->display_options['style_plugin'] = 'exhibit_json';
  $handler->display->display_options['style_options']['type_label'] = 'Publikation';
  $handler->display->display_options['style_options']['type_plural_label'] = 'Publikationen';
  $handler->display->display_options['row_plugin'] = 'node_exhibit';
  $handler->display->display_options['path'] = 'json/publikationen';

  $views[$view->name] = $view;

  return $views;
}
