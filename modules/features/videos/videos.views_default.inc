<?php

/**
 * Implementation of hook_views_default_views().
 */
function videos_views_default_views() {
  $views = array();

  // Exported view: bo_videos
  $view = new view;
  $view->name = 'bo_videos';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Standards */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->display->display_options['title'] = 'Video Interviews';
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['distinct'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_projectlogo_fid' => 'field_projectlogo_fid',
    'value_1' => 'value_1',
    'value' => 'value',
    'value_2' => 'value_2',
    'value_3' => 'value_3',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Beziehung: Inhalt: Personen im Video (field_persontags) */
  $handler->display->display_options['relationships']['field_persontags_uid']['id'] = 'field_persontags_uid';
  $handler->display->display_options['relationships']['field_persontags_uid']['table'] = 'node_data_field_persontags';
  $handler->display->display_options['relationships']['field_persontags_uid']['field'] = 'field_persontags_uid';
  $handler->display->display_options['relationships']['field_persontags_uid']['required'] = 0;
  $handler->display->display_options['relationships']['field_persontags_uid']['delta'] = '0';
  /* Beziehung: Inhalt: Personen im Video (field_persontags) */
  $handler->display->display_options['relationships']['field_persontags_uid_1']['id'] = 'field_persontags_uid_1';
  $handler->display->display_options['relationships']['field_persontags_uid_1']['table'] = 'node_data_field_persontags';
  $handler->display->display_options['relationships']['field_persontags_uid_1']['field'] = 'field_persontags_uid';
  $handler->display->display_options['relationships']['field_persontags_uid_1']['label'] = 'Personen im Video 2';
  $handler->display->display_options['relationships']['field_persontags_uid_1']['required'] = 0;
  $handler->display->display_options['relationships']['field_persontags_uid_1']['delta'] = '1';
  /* Beziehung: Organische Gruppen: Gruppenbeitrag (Mitglied) */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'og_uid';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'field_persontags_uid';
  $handler->display->display_options['relationships']['nid']['required'] = 0;
  /* Feld: Inhalt: Video Code (field_video_code) */
  $handler->display->display_options['fields']['field_video_code_embed']['id'] = 'field_video_code_embed';
  $handler->display->display_options['fields']['field_video_code_embed']['table'] = 'node_data_field_video_code';
  $handler->display->display_options['fields']['field_video_code_embed']['field'] = 'field_video_code_embed';
  $handler->display->display_options['fields']['field_video_code_embed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_video_code_embed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_video_code_embed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_video_code_embed']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_video_code_embed']['format'] = 'thumb_linked';
  /* Feld: Inhalt: Projektlogo (field_projectlogo) */
  $handler->display->display_options['fields']['field_projectlogo_fid']['id'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['table'] = 'node_data_field_projectlogo';
  $handler->display->display_options['fields']['field_projectlogo_fid']['field'] = 'field_projectlogo_fid';
  $handler->display->display_options['fields']['field_projectlogo_fid']['relationship'] = 'nid';
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
  $handler->display->display_options['fields']['field_projectlogo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_projectlogo_fid']['format'] = 'projectlogo_1-2c_default';
  /* Feld: Profil: Benutzerinformation: Vorname */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'profile_values_profile_firstname';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'field_persontags_uid';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_1']['link_to_user'] = 0;
  /* Feld: Profil: Benutzerinformation: Nachname */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'profile_values_profile_lastname';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'field_persontags_uid';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value']['link_to_user'] = 0;
  /* Feld: Profil: Benutzerinformation: Vorname */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'profile_values_profile_firstname';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['relationship'] = 'field_persontags_uid_1';
  $handler->display->display_options['fields']['value_2']['label'] = '';
  $handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_2']['link_to_user'] = 0;
  /* Feld: Profil: Benutzerinformation: Nachname */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'profile_values_profile_lastname';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['relationship'] = 'field_persontags_uid_1';
  $handler->display->display_options['fields']['value_3']['label'] = '';
  $handler->display->display_options['fields']['value_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['value_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['value_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['value_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['value_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['value_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['value_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['value_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['value_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['value_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['value_3']['link_to_user'] = 0;
  /* Feld: Node: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<table>
<tr>
<td style="vertical-align: top !important;">
[value_1]&nbsp;[value]<br /> [value_2]&nbsp;[value_3]<br />
[title]
</td>
<td style="padding-right: 0 !important">
[field_projectlogo_fid]
</td>
</tr>
</table>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Filter: Node: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  
/* Display: Seite */
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->display->display_options['path'] = 'videos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Videos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  return $views;
}
