<?php
/**
 * Implementation of hook_views_default_views().
 */
function projecttabs_views_default_views() {
  /*
   * View 'projecttabs_wiki_index'
   */
  $view = new view;
  $view->name = 'projecttabs_wiki_index';
  $view->description = 'Wiki Index Page';
  $view->tag = 'Balance Meta';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Titel',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'last_updated' => array(
      'label' => 'Letzte Änderung',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'last_updated',
      'table' => 'node_comment_statistics',
      'field' => 'last_updated',
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'label' => 'Neu',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'comments' => 0,
      'exclude' => 0,
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'group_nid' => array(
      'default_action' => 'empty',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'Alle',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'og_group_types',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'group_nid',
      'table' => 'og_ancestry',
      'field' => 'group_nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '8' => 0,
        '7' => 0,
        '9' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_image_size' => '_original',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'faq' => 0,
        'image' => 0,
        'support_ticket' => 0,
        'download' => 0,
        'event' => 0,
        'focusgroup' => 0,
        'headerimage' => 0,
        'page' => 0,
        'project' => 0,
        'simplenews' => 0,
        'story' => 0,
        'teststefan' => 0,
        'wiki' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '5' => 0,
        '7' => 0,
        '6' => 0,
        '1' => 0,
        '2' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'image_size' => array(
        '_original' => '_original',
        'thumbnail' => 'thumbnail',
        'preview' => 'preview',
      ),
      'validate_argument_is_member' => 1,
      'validate_argument_signup_status' => 'any',
      'validate_argument_signup_node_access' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'wiki' => 'wiki',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('empty', 'Es sind noch keine Wiki-Seiten für diese Gruppe angelegt. Bitte legen Sie eine über das rechts stehende Menü an.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'desc',
    'columns' => array(
      'title' => 'title',
      'last_updated' => 'last_updated',
      'timestamp' => 'timestamp',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'last_updated' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'timestamp' => array(
        'separator' => '',
      ),
    ),
    'default' => 'last_updated',
  ));
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->override_option('path', 'node/%/wiki');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Wiki',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $views[$view->name] = $view;
  $view = new view;
$view->name = 'Veranstaltungen_vergangen';
$view->description = '';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Standards', 'default');
$handler->override_option('sorts', array(
  'unix_event_start' => array(
    'order' => 'DESC',
    'granularity' => 'second',
    'id' => 'unix_event_start',
    'table' => 'event',
    'field' => 'unix_event_start',
    'relationship' => 'none',
  ),
));
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'event' => 'event',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'unix_event_start' => array(
    'operator' => '<',
    'value' => array(
      'type' => 'offset',
      'value' => '+1 minute',
      'min' => '',
      'max' => '',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'unix_event_start',
    'table' => 'event',
    'field' => 'unix_event_start',
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'Vergangene Veranstaltungen');
$handler->override_option('header_format', '1');
$handler->override_option('header_empty', 0);
$handler->override_option('row_plugin', 'node');
$handler->override_option('row_options', array(
  'relationship' => 'none',
  'build_mode' => 'teaser',
  'links' => 1,
  'comments' => 0,
));
$handler = $view->new_display('page', 'Seite', 'page_1');
$handler->override_option('path', 'veranstaltungen_vergangen');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->override_option('block_description', '');
$handler->override_option('block_caching', -1);

$views[$view->name] = $view;

$view = new view;
$view->name = 'Veranstaltungen';
$view->description = '';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Standards', 'default');
$handler->override_option('sorts', array(
  'unix_event_start' => array(
    'order' => 'ASC',
    'granularity' => 'second',
    'id' => 'unix_event_start',
    'table' => 'event',
    'field' => 'unix_event_start',
    'relationship' => 'none',
  ),
));
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'event' => 'event',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'unix_event_start' => array(
    'operator' => '>',
    'value' => array(
      'type' => 'offset',
      'value' => '+1 minute',
      'min' => '',
      'max' => '',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'unix_event_start',
    'table' => 'event',
    'field' => 'unix_event_start',
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'Kommende Veranstaltungen');
$handler->override_option('header', 'Der Förderschwerpunkt führt unter anderem folgende Veranstaltungen durch:
Forschungsworkshops (inhaltlicher Austausch, Community-Building) Praxistransferworkshops Jahrestagung BALANCEDinnovation (2010, 2012) Veranstaltungen zur Förderung des wissenschaftlichen Nachwuchses');
$handler->override_option('header_format', '1');
$handler->override_option('header_empty', 0);
$handler->override_option('row_plugin', 'node');
$handler->override_option('row_options', array(
  'relationship' => 'none',
  'build_mode' => 'teaser',
  'links' => 1,
  'comments' => 0,
));
$handler = $view->new_display('page', 'Seite', 'page_1');
$handler->override_option('path', 'veranstaltungen_kommend');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->override_option('block_description', '');
$handler->override_option('block_caching', -1);

$views[$view->name] = $view;

	/**
	 * View frontpage
	 */
	$view = new view;
	$view->name = 'frontpage';
	$view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
	$view->tag = 'default';
	$view->view_php = '';
	$view->base_table = 'node';
	$view->is_cacheable = FALSE;
	$view->api_version = '3.0-alpha1';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Defaults */
	$handler = $view->new_display('default', 'Defaults', 'default');
	$handler->display->display_options['use_ajax'] = TRUE;
	$handler->display->display_options['use_more_text'] = 'mehr';
	$handler->display->display_options['access']['type'] = 'none';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
	$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Beträge pro Seite';
	$handler->display->display_options['style_plugin'] = 'default';
	$handler->display->display_options['row_plugin'] = 'node';
	$handler->display->display_options['row_options']['links'] = 1;
	$handler->display->display_options['exposed_block'] = TRUE;
	/* Sortierkriterien: Node: am Anfang von Listen */
	$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
	$handler->display->display_options['sorts']['sticky']['table'] = 'node';
	$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
	$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
	/* Sortierkriterien: Node: Beitragsdatum */
	$handler->display->display_options['sorts']['created']['id'] = 'created';
	$handler->display->display_options['sorts']['created']['table'] = 'node';
	$handler->display->display_options['sorts']['created']['field'] = 'created';
	$handler->display->display_options['sorts']['created']['order'] = 'DESC';
	/* Filter: Node: Auf der Startseite */
	$handler->display->display_options['filters']['promote']['id'] = 'promote';
	$handler->display->display_options['filters']['promote']['table'] = 'node';
	$handler->display->display_options['filters']['promote']['field'] = 'promote';
	$handler->display->display_options['filters']['promote']['value'] = '1';
	$handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;
	/* Filter: Node: Veröffentlicht */
	$handler->display->display_options['filters']['status']['id'] = 'status';
	$handler->display->display_options['filters']['status']['table'] = 'node';
	$handler->display->display_options['filters']['status']['field'] = 'status';
	$handler->display->display_options['filters']['status']['value'] = '1';
	$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
	/* Filter: Organische Gruppen: Zielgruppen */
	$handler->display->display_options['filters']['group_nid']['id'] = 'group_nid';
	$handler->display->display_options['filters']['group_nid']['table'] = 'og_ancestry';
	$handler->display->display_options['filters']['group_nid']['field'] = 'group_nid';
	$handler->display->display_options['filters']['group_nid']['value'] = array(
	  '45' => '45',
	  '41' => '41',
	  '75' => '75',
	  '82' => '82',
	  '62' => '62',
	  '87' => '87',
	  '466' => '466',
	  '51' => '51',
	  '54' => '54',
	  '59' => '59',
	  '72' => '72',
	  '56' => '56',
	  '74' => '74',
	  '64' => '64',
	  '68' => '68',
	  '78' => '78',
	  '66' => '66',
	  '42' => '42',
	  '63' => '63',
	  '39' => '39',
	  '69' => '69',
	  '70' => '70',
	  '44' => '44',
	  '40' => '40',
	  '71' => '71',
	  '80' => '80',
	  '38' => '38',
	  '76' => '76',
	  '73' => '73',
	  '55' => '55',
	  '31' => '31',
	  '834' => '834',
	  '91' => '91',
	  '43' => '43',
	  '67' => '67',
	  '65' => '65',
	  '58' => '58',
	  '52' => '52',
	  '57' => '57',
	  '53' => '53',
	  '47' => '47',
	  '49' => '49',
	  '79' => '79',
	  '46' => '46',
	  '50' => '50',
	  '77' => '77',
	  '60' => '60',
	  '48' => '48',
	  '61' => '61',
	  '83' => '83',
	  '347' => '347',
	  '81' => '81',
	);
	$handler->display->display_options['filters']['group_nid']['exposed'] = TRUE;
	$handler->display->display_options['filters']['group_nid']['expose']['operator'] = 'group_nid_op';
	$handler->display->display_options['filters']['group_nid']['expose']['label'] = 'Gruppen / Projekte';
	$handler->display->display_options['filters']['group_nid']['expose']['identifier'] = 'group_nid';
	$handler->display->display_options['filters']['group_nid']['expose']['reduce'] = 1;
	/* Filter: Node: Typ */
	$handler->display->display_options['filters']['type']['id'] = 'type';
	$handler->display->display_options['filters']['type']['table'] = 'node';
	$handler->display->display_options['filters']['type']['field'] = 'type';
	$handler->display->display_options['filters']['type']['value'] = array(
	  'blog' => 'blog',
	  'event' => 'event',
	  'gallery' => 'gallery',
	  'page' => 'page',
	  'pressemeldung' => 'pressemeldung',
	);
	$handler->display->display_options['filters']['type']['exposed'] = TRUE;
	$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
	$handler->display->display_options['filters']['type']['expose']['label'] = 'Beitragstyp';
	$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
	$handler->display->display_options['filters']['type']['expose']['reduce'] = 1;

	/* Display: Page */
	$handler = $view->new_display('page', 'Page', 'page');
	$handler->display->display_options['path'] = 'frontpage';

	/* Display: Feed */
	$handler = $view->new_display('feed', 'Feed', 'feed');
	$handler->display->display_options['defaults']['title'] = FALSE;
	$handler->display->display_options['title'] = 'Newsfeed der Startseite';
	$handler->display->display_options['style_plugin'] = 'rss';
	$handler->display->display_options['style_options']['mission_description'] = 1;
	$handler->display->display_options['row_plugin'] = 'node_rss';
	$handler->display->display_options['path'] = 'rss.xml';
	$handler->display->display_options['displays'] = array(
	  'default' => 'default',
	  'page' => 'page',
	);
	$handler->display->display_options['sitename_title'] = '1';

	$views[$view->name] = $view;

  return $views;
}
