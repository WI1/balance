<?php
/**
 * Implementation of hook_views_default_views().
 */
function focus_groups_views_default_views() {
  /*
   * View 'focus_groups_overview'
   */
  $view = new view;
  $view->name = 'focus_groups_overview';
  $view->description = 'Übersicht der Fokusgruppen';
  $view->tag = 'focus_groups';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->override_option('sorts', array(
    'changed' => array(
      'order' => 'ASC',
      'granularity' => 'second',
      'id' => 'changed',
      'table' => 'node',
      'field' => 'changed',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'group_nid' => array(
      'operator' => 'or',
      'value' => array(
        '82' => '82',
        '78' => '78',
        '80' => '80',
        '76' => '76',
        '79' => '79',
        '77' => '77',
        '81' => '81',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'group_nid',
      'table' => 'og_ancestry',
      'field' => 'group_nid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header', '<h3><strong>Förderschwerpunkt „Flexibilität und Stabilität in einer sich wandelnden Arbeitswelt“</strong></h3> <p>Der vom BMBF geförderte Förderschwerpunkt „Flexibilität und Stabilität in einer sich wandelnden Arbeitswelt“ umfasst verschiedene Fragestellungen einer modernen Arbeitswelt, die sich unter anderem mit den Themen Vertrauen, Flexibilität und Stabilität beschäftigen und dabei insbesondere auf die Bereiche Innovationsfähigkeit, Veränderungsprozesse und die Auswirkungen der sich wandelnden Arbeitswelt auf Arbeitgeberinteressen und Arbeitnehmerbedürfnisse eingehen. Als beeinflussende Faktoren werden der demographische Wandel und die konstant zunehmende Bedeutung von Innovationsfähigkeit im globalisierten Wettbewerb betrachtet, die neue Formen der Zusammenarbeit innerhalb und außerhalb von Unternehmensgrenzen erfordern. So entstehen Fragestellungen, die sich wandelnden Beschäftigungsformen, aber auch Möglichkeiten für eine Flexibilisierung in Produktionssystemen widmen. Ziel ist es, einerseits den Status Quo zu untersuchen, dessen Einflüsse auf die Systemteilnehmer zu analysieren, andererseits aber auch weitere Ideen vorzuschlagen, die eine Entwicklung zukunftstauglicher Lösungen und Ansätze vorantreiben.<br /><br />Die Forschungsvorhaben des Förderschwerpunktes sind in acht Fokusgruppen gegliedert. Begleitet werden diese durch das Untersuchungsprojekt „M.I.N.O. – Matching von Innovationsfähigkeit und nachhaltigen Organisationsmodellen“ und durch das Metaprojekt „BALANCE - Flexibilität und Stabilität in der Forschungswelt“.<br /><br />Themen</p> <ul> <li><a href="/fokusgruppen/arbeits-und-beschäftigungsformen-im-wandel">Arbeits- und Beschäftigungsformen im Wandel</a></li> <li><a href="http://www.balanceonline.org/fokusgruppen/flexibilisierungsstrategien-f%C3%BCr-produktionssysteme">Flexibilisierungsstrategien für Produktionssysteme</a></li> <li><a href="http://www.balanceonline.org/fokusgruppen/inner-und-%C3%BCberbetriebliche-kooperationsstrategien">Inner- und überbetriebliche Kooperationsstrategien</a></li> <li><a href="http://www.balanceonline.org/fokusgruppen/interne-und-externe-vertrauensbeziehungen">Interne und externe Vertrauensbeziehungen</a></li> <li><a href="http://www.balanceonline.org/fokusgruppen/vertrauen-innovationsprozessen">Vertrauen in Innovationsprozessen</a></li> <li><a href="http://www.balanceonline.org/fokusgruppen/ver%C3%A4nderungsprozesse-gestalten-vertrauen-f%C3%B6rdern" target="_self">Veränderungsprozesse gestalten – Vertrauen fördern</a></li> <li><a href="http://www.balanceonline.org/fokusgruppen/work-life-balance">Work-Life-Balance</a></li> <li><a href="http://www.balanceonline.org/fokusgruppen/zukunftsorientierte-arbeitszeitformen">Zukunftsorientierte Arbeitszeitformen</a></li> </ul> <p>&nbsp;</p>');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 1);
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser',
    'links' => 1,
    'comments' => 0,
  ));
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->override_option('path', 'themen');
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
  $views[$view->name] = $view;

  /*
   * View 'frontpage_news'
   */
	$view = new view;
	$view->name = 'frontpage_news';
	$view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
	$view->tag = 'focus_groups';
	$view->view_php = '';
	$view->base_table = 'node';
	$view->is_cacheable = FALSE;
	$view->api_version = 2;
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	$handler = $view->new_display('default', 'Defaults', 'default');
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'link_to_node' => 0,
	    'link_to_node_revision' => 0,
	    'exclude' => 0,
	    'id' => 'title',
	    'table' => 'node_revisions',
	    'field' => 'title',
	    'relationship' => 'none',
	  ),
	  'field_smallteaser_fid' => array(
	    'label' => '',
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'link_to_node' => 0,
	    'label_type' => 'none',
	    'format' => 'pic-1c-square_path',
	    'multiple' => array(
	      'group' => TRUE,
	      'multiple_number' => '',
	      'multiple_from' => '',
	      'multiple_reversed' => FALSE,
	    ),
	    'exclude' => 0,
	    'id' => 'field_smallteaser_fid',
	    'table' => 'node_data_field_smallteaser',
	    'field' => 'field_smallteaser_fid',
	    'relationship' => 'none',
	  ),
	  'comments_link' => array(
	    'label' => 'Add comment link',
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'teaser' => 0,
	    'exclude' => 0,
	    'id' => 'comments_link',
	    'table' => 'node',
	    'field' => 'comments_link',
	    'relationship' => 'none',
	  ),
	  'addthis' => array(
	    'label' => 'AddThis',
	    'alter' => array(
	      'alter_text' => FALSE,
	      'text' => '',
	      'make_link' => FALSE,
	      'path' => '',
	      'alt' => '',
	      'link_class' => '',
	      'prefix' => '',
	      'suffix' => '',
	      'target' => '',
	      'trim' => FALSE,
	      'max_length' => '',
	      'word_boundary' => TRUE,
	      'ellipsis' => TRUE,
	      'strip_tags' => FALSE,
	      'html' => FALSE,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'exclude' => 0,
	    'id' => 'addthis',
	    'table' => 'node',
	    'field' => 'addthis',
	    'relationship' => 'none',
	  ),
	  'changed' => array(
	    'label' => 'Aktualisierungszeitpunkt',
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'date_format' => 'small',
	    'custom_date_format' => '',
	    'exclude' => 0,
	    'id' => 'changed',
	    'table' => 'node',
	    'field' => 'changed',
	    'relationship' => 'none',
	  ),
	  'teaser' => array(
	    'label' => 'Anrisstext',
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'exclude' => 0,
	    'id' => 'teaser',
	    'table' => 'node_revisions',
	    'field' => 'teaser',
	    'relationship' => 'none',
	  ),
	  'comment_count' => array(
	    'label' => 'Anzahl an Kommentaren',
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'set_precision' => FALSE,
	    'precision' => 0,
	    'decimal' => '.',
	    'separator' => ',',
	    'prefix' => '',
	    'suffix' => '',
	    'exclude' => 0,
	    'id' => 'comment_count',
	    'table' => 'node_comment_statistics',
	    'field' => 'comment_count',
	    'relationship' => 'none',
	  ),
	  'upload_fid' => array(
	    'label' => 'Angehängte Dateien',
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'type' => 'separator',
	    'separator' => ', ',
	    'link_to_file' => 0,
	    'only_listed' => 0,
	    'exclude' => 0,
	    'id' => 'upload_fid',
	    'table' => 'node',
	    'field' => 'upload_fid',
	    'relationship' => 'none',
	  ),
	  'nid' => array(
	    'label' => 'Beitrags-ID',
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'link_to_node' => 0,
	    'exclude' => 0,
	    'id' => 'nid',
	    'table' => 'node',
	    'field' => 'nid',
	    'relationship' => 'none',
	  ),
	  'upload_fid_1' => array(
	    'label' => 'Angehängte Dateien',
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
	      'html' => 0,
	      'strip_tags' => 0,
	    ),
	    'empty' => '',
	    'hide_empty' => 0,
	    'empty_zero' => 0,
	    'type' => 'separator',
	    'separator' => ', ',
	    'link_to_file' => 0,
	    'only_listed' => 0,
	    'exclude' => 0,
	    'id' => 'upload_fid_1',
	    'table' => 'node',
	    'field' => 'upload_fid',
	    'relationship' => 'none',
	  ),
	));
	$handler->override_option('sorts', array(
	  'sticky' => array(
	    'id' => 'sticky',
	    'table' => 'node',
	    'field' => 'sticky',
	    'order' => 'DESC',
	  ),
	  'created' => array(
	    'id' => 'created',
	    'table' => 'node',
	    'field' => 'created',
	    'order' => 'DESC',
	    'relationship' => 'none',
	    'granularity' => 'second',
	  ),
	));
	$handler->override_option('filters', array(
	  'promote' => array(
	    'id' => 'promote',
	    'table' => 'node',
	    'field' => 'promote',
	    'operator' => '=',
	    'value' => '1',
	    'group' => 0,
	    'exposed' => FALSE,
	    'expose' => array(
	      'operator' => FALSE,
	      'label' => '',
	    ),
	  ),
	  'status' => array(
	    'id' => 'status',
	    'table' => 'node',
	    'field' => 'status',
	    'operator' => '=',
	    'value' => '1',
	    'group' => 0,
	    'exposed' => FALSE,
	    'expose' => array(
	      'operator' => FALSE,
	      'label' => '',
	    ),
	  ),
	  'group_nid' => array(
	    'operator' => 'or',
	    'value' => array(),
	    'group' => '0',
	    'exposed' => TRUE,
	    'expose' => array(
	      'use_operator' => 0,
	      'operator' => 'group_nid_op',
	      'identifier' => 'group_nid',
	      'label' => 'Gruppen',
	      'optional' => 1,
	      'single' => 1,
	      'remember' => 0,
	      'reduce' => 0,
	      'vfs_selective' => 1,
	      'vfs_active' => 1,
	    ),
	    'id' => 'group_nid',
	    'table' => 'og_ancestry',
	    'field' => 'group_nid',
	    'relationship' => 'none',
	    'reduce_duplicates' => 0,
	  ),
	  'type' => array(
	    'operator' => 'in',
	    'value' => array(
	      'blog' => 'blog',
	      'event' => 'event',
	    ),
	    'group' => '0',
	    'exposed' => TRUE,
	    'expose' => array(
	      'use_operator' => 0,
	      'operator' => 'type_op',
	      'identifier' => 'type',
	      'label' => 'Beitragstyp',
	      'optional' => 1,
	      'single' => 1,
	      'remember' => 0,
	      'reduce' => 1,
	      'vfs_selective' => 1,
	      'vfs_active' => 1,
	    ),
	    'id' => 'type',
	    'table' => 'node',
	    'field' => 'type',
	    'relationship' => 'none',
	  ),
	  'name' => array(
	    'operator' => '=',
	    'value' => '',
	    'group' => '0',
	    'exposed' => TRUE,
	    'expose' => array(
	      'use_operator' => 0,
	      'operator' => 'name_op',
	      'identifier' => 'name',
	      'label' => 'Tags',
	      'optional' => 1,
	      'remember' => 0,
	    ),
	    'case' => 0,
	    'id' => 'name',
	    'table' => 'term_data',
	    'field' => 'name',
	    'relationship' => 'none',
	  ),
	));
	$handler->override_option('access', array(
	  'type' => 'none',
	  'role' => array(),
	  'perm' => '',
	));
	$handler->override_option('cache', array(
	  'type' => 'none',
	));
	$handler->override_option('header_format', '1');
	$handler->override_option('header_empty', 0);
	$handler->override_option('footer_format', '1');
	$handler->override_option('empty_format', '1');
	$handler->override_option('use_ajax', TRUE);
	$handler->override_option('use_pager', '1');
	$handler->override_option('row_options', array(
	  'inline' => array(),
	  'separator' => '',
	  'hide_empty' => 0,
	));
	$handler = $view->new_display('page', 'Page', 'page');
	$handler->override_option('path', 'frontpage_news');
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
	$handler = $view->new_display('feed', 'Feed', 'feed');
	$handler->override_option('title', 'Newsfeed der Startseite');
	$handler->override_option('style_plugin', 'rss');
	$handler->override_option('style_options', array(
	  'mission_description' => 1,
	  'description' => '',
	));
	$handler->override_option('row_plugin', 'node_rss');
	$handler->override_option('row_options', array(
	  'item_length' => 'default',
	));
	$handler->override_option('path', 'rss.xml');
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
	$handler->override_option('displays', array(
	  'default' => 'default',
	  'page' => 'page',
	));
	$handler->override_option('sitename_title', '1');

	$views[$view->name] = $view;

  return $views;
}