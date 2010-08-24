<?php
/**
 * Implementation of hook_views_default_views().
 */
function balanceonline_og_like_views_default_views() {

  $view = new view;
$view->name = 'bo_projectmembersbox';
$view->description = 'Shows the profile pictures of the members of a certain node';
$view->tag = 'users, projects, avatar, list';
$view->view_php = '';
$view->base_table = 'users';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'picture' => array(
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
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'imagecache_preset' => '1',
    'exclude' => 0,
    'id' => 'picture',
    'table' => 'users',
    'field' => 'picture',
    'relationship' => 'none',
  ),
  'value' => array(
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
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_user' => 1,
    'exclude' => 0,
    'id' => 'value',
    'table' => 'profile_values_profile_firstname',
    'field' => 'value',
    'relationship' => 'none',
  ),
  'value_1' => array(
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
      'strip_tags' => 0,
      'html' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_user' => 1,
    'exclude' => 0,
    'id' => 'value_1',
    'table' => 'profile_values_profile_lastname',
    'field' => 'value',
    'relationship' => 'none',
  ),
));
$handler->override_option('sorts', array(
  'value' => array(
    'order' => 'ASC',
    'id' => 'value',
    'table' => 'profile_values_profile_lastname',
    'field' => 'value',
    'relationship' => 'none',
  ),
  'created' => array(
    'order' => 'DESC',
    'granularity' => 'second',
    'id' => 'created',
    'table' => 'users',
    'field' => 'created',
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'not found',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'Alle',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'node',
    'default_argument' => '',
    'validate_type' => 'node',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'nid',
    'table' => 'og_uid',
    'field' => 'nid',
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
    'default_argument_php' => 'if ($node = og_get_group_context()) {
                return $node->nid;
              }
              else {
                return NULL;
              }',
    'validate_argument_node_type' => array(
      'focusgroup' => 'focusgroup',
      'project' => 'project',
      'blog' => 0,
      'faq' => 0,
      'image' => 0,
      'download' => 0,
      'headerimage' => 0,
      'page' => 0,
      'story' => 0,
      'teststefan' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
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
    'validate_argument_php' => '',
    'override' => array(
      'button' => 'Übersteuern',
    ),
  ),
));
$handler->override_option('filters', array(
  'is_active' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'is_active',
    'table' => 'og_uid',
    'field' => 'is_active',
    'relationship' => 'none',
  ),
  'rid' => array(
    'operator' => 'not',
    'value' => array(
      '10' => '10',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'rid',
    'table' => 'og_users_roles',
    'field' => 'rid',
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'time',
  'results_lifespan' => '60',
  'output_lifespan' => '60',
));
$handler->override_option('title', 'Teilnehmer dieses Projektes');
$handler->override_option('header_format', '1');
$handler->override_option('header_empty', 0);
$handler->override_option('empty', 'Noch keine Teilnehmer registriert.');
$handler->override_option('empty_format', '1');
$handler->override_option('use_ajax', TRUE);
$handler->override_option('items_per_page', 6);
$handler->override_option('use_more', 1);
$handler->override_option('use_more_text', 'mehr');
$handler->override_option('distinct', 1);
$handler->override_option('style_plugin', 'grid');
$handler->override_option('style_options', array(
  'grouping' => '',
  'columns' => '6',
  'alignment' => 'horizontal',
));
$handler = $view->new_display('block', 'All', 'block_1');
$handler->override_option('fields', array(
  'value' => array(
    'label' => 'First Name',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'exclude' => 1,
    'id' => 'value',
    'table' => 'profile_values_profile_firstname',
    'field' => 'value',
    'relationship' => 'none',
  ),
  'value_1' => array(
    'label' => 'Name',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'exclude' => 1,
    'id' => 'value_1',
    'table' => 'profile_values_profile_lastname',
    'field' => 'value',
    'relationship' => 'none',
  ),
  'picture' => array(
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
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'strip_tags' => 0,
      'html' => 0,
    ),
    'imagecache_preset' => '1',
    'exclude' => 0,
    'id' => 'picture',
    'table' => 'users',
    'field' => 'picture',
    'relationship' => 'none',
  ),
));
$handler->override_option('block_description', '');
$handler->override_option('block_caching', '8');
$handler = $view->new_display('block', 'Recent', 'block_2');
$handler->override_option('title', 'Neueste Mitglieder');
$handler->override_option('block_description', '');
$handler->override_option('block_caching', -1);
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('title', '');
$handler->override_option('items_per_page', 0);
$handler->override_option('path', 'node/%/team');
$handler->override_option('menu', array(
  'type' => 'tab',
  'title' => 'Team',
  'description' => '',
  'weight' => '0',
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
  return $views;
}