<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function groups_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_details
  $groups['focusgroup-group_details'] = array(
    'group_type' => 'standard',
    'type_name' => 'focusgroup',
    'group_name' => 'group_details',
    'label' => 'Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_projectlogo',
      '1' => 'field_fgident',
      '2' => 'field_focusgroup_speaker',
      '3' => 'field_contactdlrpicture',
      '4' => 'field_contactdlr',
      '5' => 'field_contactbalance',
      '6' => 'field_projects',
      '7' => 'field_frontpageimage',
    ),
  );

  // Exported group: group_projectcontact
  $groups['project-group_projectcontact'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projectcontact',
    'label' => 'Kontakt',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '12',
    'fields' => array(
      '0' => 'field_projecthomepage',
      '1' => 'field_project_rssfeed',
      '2' => 'field_projectaccount',
      '3' => 'field_projectinstitutions',
      '4' => 'field_ref_projectinstitutions',
      '5' => 'field_valuepartner',
      '6' => 'field_ref_valuepartner',
    ),
  );

  // Exported group: group_projectfocus
  $groups['project-group_projectfocus'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projectfocus',
    'label' => 'Forschungsausrichtung',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '11',
    'fields' => array(
      '0' => 'field_researchquestions',
      '1' => 'field_projecttheories',
      '2' => 'field_projectapproach',
      '3' => 'field_projecttechniques',
    ),
  );

  // Exported group: group_projectinfo
  $groups['project-group_projectinfo'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projectinfo',
    'label' => 'Projektinformationen',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '8',
    'fields' => array(
      '0' => 'field_projectident',
      '1' => 'field_projectlogo',
      '2' => 'field_projectfkz',
      '3' => 'field_projektgoals',
      '4' => 'field_synopsis',
      '5' => 'field_steckbrief',
      '6' => 'field_projectmembers',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');
  t('Forschungsausrichtung');
  t('Kontakt');
  t('Projektinformationen');

  return $groups;
}
