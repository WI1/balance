<?php

/**
 * Implementation of hook_content_default_fields().
 */
function groups_content_default_fields() {
  $fields = array();

  // Exported field: field_color_hex
  $fields['focusgroup-field_color_hex'] = array(
    'field_name' => 'field_color_hex',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Farbcode',
      'weight' => '27',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contactbalance
  $fields['focusgroup-field_contactbalance'] = array(
    'field_name' => 'field_contactbalance',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '1',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 2,
      '8' => 8,
      '7' => 7,
      '9' => 9,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_contactbalance][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Betreuung BALANCE',
      'weight' => '20',
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_contactdlr
  $fields['focusgroup-field_contactdlr'] = array(
    'field_name' => 'field_contactdlr',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => 0,
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_contactdlr][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Betreuung DLR',
      'weight' => '19',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_contactdlrpicture
  $fields['focusgroup-field_contactdlrpicture'] = array(
    'field_name' => 'field_contactdlrpicture',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
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
      'label' => 'Bild Betreuer DLR',
      'weight' => '18',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_fgident
  $fields['focusgroup-field_fgident'] = array(
    'field_name' => 'field_fgident',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '4',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fgident][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Kürzel',
      'weight' => '15',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_focusgroup_speaker
  $fields['focusgroup-field_focusgroup_speaker'] = array(
    'field_name' => 'field_focusgroup_speaker',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '8' => 0,
      '7' => 0,
      '10' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Fokusgruppensprecher',
      'weight' => '17',
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_frontpageimage
  $fields['focusgroup-field_frontpageimage'] = array(
    'field_name' => 'field_frontpageimage',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
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
    'list_field' => '',
    'list_default' => '',
    'description_field' => '',
    'widget' => array(
      'file_extensions' => NULL,
      'file_path' => NULL,
      'progress_indicator' => NULL,
      'max_filesize_per_file' => NULL,
      'max_filesize_per_node' => NULL,
      'max_resolution' => NULL,
      'min_resolution' => NULL,
      'alt' => NULL,
      'custom_alt' => NULL,
      'title' => NULL,
      'custom_title' => NULL,
      'title_type' => NULL,
      'default_image' => NULL,
      'use_default_image' => NULL,
      'label' => 'Hintergrundbild für die Startseite',
      'weight' => '22',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_projectlogo
  $fields['focusgroup-field_projectlogo'] = array(
    'field_name' => 'field_projectlogo',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'projectlogo_9c_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'projectlogo_9c_default',
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
      'file_path' => 'logos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '124x124',
      'min_resolution' => '0',
      'alt' => 'Fokusgruppenlogo',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'Balance-Logo_30.png',
        'filepath' => 'sites/balanceonline.org/files/imagefield_default_images/Balance-Logo_30.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/balanceonline.org/files/imagefield_default_images/Balance-Logo_30.png',
        'filesize' => '8411',
        'uid' => '8',
        'status' => 1,
        'timestamp' => 1264440203,
        'fid' => '150',
      ),
      'use_default_image' => 1,
      'label' => 'Projektlogo',
      'weight' => '14',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_projects
  $fields['focusgroup-field_projects'] = array(
    'field_name' => 'field_projects',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'fg_projects' => 'fg_projects',
      'front_visual' => 0,
      'projects' => 0,
      'og_members_faces' => 0,
      'og_members' => 0,
      'og_members_block' => 0,
      'recent_posts_in_active_group' => 0,
      'og' => 0,
      'download_center' => 0,
      'og_unread' => 0,
      'og_ghp_ron' => 0,
      'taxonomy_term' => 0,
      'slideshow' => 0,
      'personal_blog' => 0,
      'og_my' => 0,
      'newest_faqs' => 0,
      'ProjekteSchlagworte' => 0,
      'og_mytracker' => 0,
      'public_downloads' => 0,
      'og_tracker' => 0,
      'signup_available_signups' => 0,
      'signup_current_signups' => 0,
      'bo_pressreleases' => 0,
      'og_open_requests' => 0,
      'og_open_member_requests' => 0,
      'focus_groups_overview' => 0,
      'bo_ur_contacts_pictures' => 0,
      'Veranstaltungen' => 0,
      'projecttabs_wiki_index' => 0,
      'Veranstaltungen_vergangen' => 0,
      'frontpage' => 0,
      'bo_all_project_documentlisting' => 0,
      'bo_projectmembersbox' => 0,
      'bo_projekt_uebersicht_tabelle' => 0,
      'user_byregistration' => 0,
      'bo_wiki_users' => 0,
      'bo_gmap_forschungsladnkarte' => 0,
      'bo_wiki_definitions' => 0,
      'bo_wiki_links' => 0,
      'control_content' => 0,
      'control_content_panes' => 0,
      'gallery' => 0,
      'galley_list' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'popular' => 0,
      'location_table' => 0,
      'location_directory' => 0,
      'user_location_table' => 0,
      'nodehierarchy_children_teasers' => 0,
      'nodehierarchy_children_list' => 0,
      'nodehierarchy_downloads' => 0,
      'og_files' => 0,
      'og_recent_type_term' => 0,
      'posts_by_term' => 0,
      'og_search' => 0,
      'signup_user_list' => 0,
      'signup_user_vbo_admin_list' => 0,
      'signup_user_admin_list' => 0,
      'control_activity' => 0,
      'control_comments' => 0,
      'control_files' => 0,
      'control_terms' => 0,
      'control_users' => 0,
      'control_users_pane' => 0,
      'user_relationships_content' => 0,
      'user_relationships_browser' => 0,
      'admin_content' => 0,
      'admin_users' => 0,
      'frontpage_news' => 0,
      'bo_wiki_allposts' => 0,
      'bo_wiki_bulk_operations' => 0,
      'bo_wiki_relatedgroups' => 0,
      'rsvp_calendar' => 0,
      'rsvp_invitations' => 0,
    ),
    'super_default' => 1,
    'token_enabled' => 1,
    'super_default_widget' => array(
      'vname' => 'fg_projects|default',
      'vargs' => '[term]',
    ),
    'widget' => array(
      'force_default' => 0,
      'label' => 'Projekte',
      'weight' => '21',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_project_fg_membership
  $fields['project-field_project_fg_membership'] = array(
    'field_name' => 'field_project_fg_membership',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'focusgroup' => 'focusgroup',
      'balancewiki' => 0,
      'blog' => 0,
      'gallery_image' => 0,
      'conftoolgroup' => 0,
      'definition' => 0,
      'download' => 0,
      'faq' => 0,
      'forum' => 0,
      'gallery' => 0,
      'headerimage' => 0,
      'image' => 0,
      'link' => 0,
      'simplenews' => 0,
      'organisation' => 0,
      'page' => 0,
      'panel' => 0,
      'pressemeldung' => 0,
      'project' => 0,
      'story' => 0,
      'poll' => 0,
      'event' => 0,
      'wiki' => 0,
      'teststefan' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Mitglied in Fokusgruppe',
      'weight' => '10',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_project_rssfeed
  $fields['project-field_project_rssfeed'] = array(
    'field_name' => 'field_project_rssfeed',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 0,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'RSSFeed',
      'weight' => '22',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_projectaccount
  $fields['project-field_projectaccount'] = array(
    'field_name' => 'field_projectaccount',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '34',
      'parent' => 'group_projectcontact',
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
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 2,
      '8' => 8,
      '7' => 7,
      '10' => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 1,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_projectaccount][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Ansprechpartner/-in',
      'weight' => '23',
      'description' => '',
      'type' => 'realname_userreference_auto',
      'module' => 'realname_userreference',
    ),
  );

  // Exported field: field_projectapproach
  $fields['project-field_projectapproach'] = array(
    'field_name' => 'field_projectapproach',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_projectfocus',
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
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_projectapproach][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Vorgehen',
      'weight' => '18',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_projectfkz
  $fields['project-field_projectfkz'] = array(
    'field_name' => 'field_projectfkz',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '43',
      'parent' => 'group_projectinfo',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_projectfkz][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Förderkennzeichen (FKZ)',
      'weight' => '11',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_projecthomepage
  $fields['project-field_projecthomepage'] = array(
    'field_name' => 'field_projecthomepage',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_projectcontact',
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
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Homepage',
      'weight' => '21',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_projectident
  $fields['project-field_projectident'] = array(
    'field_name' => 'field_projectident',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_projectinfo',
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
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_projectident][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Projektkürzel',
      'weight' => '9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_projectinstitutions
  $fields['project-field_projectinstitutions'] = array(
    'field_name' => 'field_projectinstitutions',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_projectcontact',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Beteiligte Institutionen',
      'weight' => '24',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_projectlogo
  $fields['project-field_projectlogo'] = array(
    'field_name' => 'field_projectlogo',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'projectlogo_9c_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'projectlogo_9c_default',
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
      'file_path' => 'logos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '550x150',
      'min_resolution' => '0',
      'alt' => 'Projektlogo',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'Balance-Logo_30.png',
        'filepath' => 'sites/balanceonline.org/files/imagefield_default_images/Balance-Logo_30.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/balanceonline.org/files/imagefield_default_images/Balance-Logo_30.png',
        'filesize' => '8411',
        'uid' => '8',
        'status' => 1,
        'timestamp' => 1264440203,
        'fid' => '150',
      ),
      'use_default_image' => 1,
      'label' => 'Projektlogo',
      'weight' => '10',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_projectmembers
  $fields['project-field_projectmembers'] = array(
    'field_name' => 'field_projectmembers',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '46',
      'parent' => 'group_projectinfo',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 2,
      '8' => 8,
      '7' => 7,
      '9' => 9,
    ),
    'referenceable_status' => 1,
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Projektmitglieder',
      'weight' => '15',
      'description' => '',
      'type' => 'realname_userreference_auto',
      'module' => 'realname_userreference',
    ),
  );

  // Exported field: field_projecttechniques
  $fields['project-field_projecttechniques'] = array(
    'field_name' => 'field_projecttechniques',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_projectfocus',
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
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_projecttechniques][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Methoden',
      'weight' => '19',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_projecttheories
  $fields['project-field_projecttheories'] = array(
    'field_name' => 'field_projecttheories',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '34',
      'parent' => 'group_projectfocus',
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
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_projecttheories][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Theorien / theoretische Grundlagen',
      'weight' => '17',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_projektgoals
  $fields['project-field_projektgoals'] = array(
    'field_name' => 'field_projektgoals',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '44',
      'parent' => 'group_projectinfo',
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
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_projektgoals][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Projektziele / Angestrebtes Ergebnis',
      'weight' => '12',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_ref_projectinstitutions
  $fields['project-field_ref_projectinstitutions'] = array(
    'field_name' => 'field_ref_projectinstitutions',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '10',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'organisation' => 'organisation',
      'balancewiki' => 0,
      'blog' => 0,
      'conftoolgroup' => 0,
      'definition' => 0,
      'download' => 0,
      'exhibit' => 0,
      'faq' => 0,
      'focusgroup' => 0,
      'forum' => 0,
      'gallery_image' => 0,
      'gallery' => 0,
      'headerimage' => 0,
      'image' => 0,
      'link' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'pressemeldung' => 0,
      'project' => 0,
      'biblio' => 0,
      'sparql' => 0,
      'story' => 0,
      'poll' => 0,
      'event' => 0,
      'video' => 0,
      'wiki' => 0,
    ),
    'advanced_view' => 'bo_organisation_select',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_ref_projectinstitutions][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Beteiligte Institutionen',
      'weight' => '25',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_ref_valuepartner
  $fields['project-field_ref_valuepartner'] = array(
    'field_name' => 'field_ref_valuepartner',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'multiple' => '10',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'organisation' => 'organisation',
      'balancewiki' => 0,
      'blog' => 0,
      'conftoolgroup' => 0,
      'definition' => 0,
      'download' => 0,
      'exhibit' => 0,
      'faq' => 0,
      'focusgroup' => 0,
      'forum' => 0,
      'gallery_image' => 0,
      'gallery' => 0,
      'headerimage' => 0,
      'image' => 0,
      'link' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'pressemeldung' => 0,
      'project' => 0,
      'biblio' => 0,
      'sparql' => 0,
      'story' => 0,
      'poll' => 0,
      'event' => 0,
      'video' => 0,
      'wiki' => 0,
    ),
    'advanced_view' => 'bo_organisation_select',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_ref_valuepartner][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Umsetzungspartner',
      'weight' => '27',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_researchquestions
  $fields['project-field_researchquestions'] = array(
    'field_name' => 'field_researchquestions',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_projectfocus',
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_researchquestions][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Forschungsfragen',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_steckbrief
  $fields['project-field_steckbrief'] = array(
    'field_name' => 'field_steckbrief',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
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
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'txt doc doc docx pdf',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '20M',
      'max_filesize_per_node' => '',
      'label' => 'Steckbrief aus Konferenzband',
      'weight' => '14',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_synopsis
  $fields['project-field_synopsis'] = array(
    'field_name' => 'field_synopsis',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '45',
      'parent' => 'group_projectinfo',
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
      'token' => array(
        'format' => 'default',
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
      'file_extensions' => 'pdf',
      'file_path' => 'synopses',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Projektexposé',
      'weight' => '13',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_valuepartner
  $fields['project-field_valuepartner'] = array(
    'field_name' => 'field_valuepartner',
    'type_name' => 'project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_valuepartner][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Umsetzungspartner',
      'weight' => '26',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ansprechpartner/-in');
  t('Beteiligte Institutionen');
  t('Betreuung BALANCE');
  t('Betreuung DLR');
  t('Bild Betreuer DLR');
  t('Farbcode');
  t('Fokusgruppensprecher');
  t('Forschungsfragen');
  t('Förderkennzeichen (FKZ)');
  t('Hintergrundbild für die Startseite');
  t('Homepage');
  t('Kürzel');
  t('Methoden');
  t('Mitglied in Fokusgruppe');
  t('Projekte');
  t('Projektexposé');
  t('Projektkürzel');
  t('Projektlogo');
  t('Projektmitglieder');
  t('Projektziele / Angestrebtes Ergebnis');
  t('RSSFeed');
  t('Steckbrief aus Konferenzband');
  t('Theorien / theoretische Grundlagen');
  t('Umsetzungspartner');
  t('Vorgehen');

  return $fields;
}
