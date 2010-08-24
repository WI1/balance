<?php
/**
 * Implementation of hook_action_info().
 */
function focus_groups_action_info() {
	return array(
		'focus_groups_subscribe_user_action' => array(
			'description' => t('Subscribe user to the focus group of the context group'),
			'type' => 'node',
			'configurable' => FALSE,
			'hooks' => array('any' => TRUE),
		),
		'focus_groups_simplenews_subscribe_action' => array(
			'description' => t('Subscribe user to the newsletter of the context group'),
			'type' => 'node',
			'configurable' => FALSE,
			'hooks' => array('any' => TRUE),
		),
		'focus_groups_simplenews_unsubscribe_action' => array(
			'description' => t('Unsubscribe user from the newsletter of the context group'),
			'type' => 'node',
			'configurable' => FALSE,
			'hooks' => array('any' => TRUE),
		)
    );
}

/**
 * Subscribes a user to a focus group of the given group
 */
function focus_groups_subscribe_user_action($object, $context) {
	global $user;
	
	if($focus_group_id = focus_groups_get_parent($object->nid)) {
		og_save_subscription($focus_group_id, $user->uid, array('is_active' => 1));
		watchdog('action', 'Subscribed user id %id to focus group %fg.', array('%id' => $user->uid, '%fg' => $focus_group_id));
	}
}

/**
 * Subscribes a user to a newsletter of the given group. If the newsletter doesn't exist already it creates it.
 */
function focus_groups_simplenews_subscribe_action($object, $context) {
	global $user;

	$term = taxonomy_get_term_by_name('Newsletter ' . $object->title);
	if(!$term){
		//creating a new term
		$term = array('name' => 'Newsletter ' . $object->title, 'vid' => 7);
		taxonomy_save_term($term);
		$term = taxonomy_get_term_by_name('Newsletter ' . $object->title);
	}
	$term = array_pop($term);
	simplenews_subscribe_user($user->mail, $term->tid, false);
	watchdog('action', 'Subscribed user id %id to newsletter %newsletter.', array('%id' => $user->uid, '%newsletter' => $object->title));
}

/**
 * Unsubscribes a user from a newsletter of the given group.
 */
function focus_groups_simplenews_unsubscribe_action($object, $context) {
	global $user;
	
	$term = array_pop(taxonomy_get_term_by_name('Newsletter ' . $object->title));
	simplenews_unsubscribe_user($user->mail, $term->tid, false);
	watchdog('action', 'Unubscribed user id %id from newsletter %newsletter.', array('%id' => $user->uid, '%newsletter' => $object->title));
}

/**
 * Configuration form for Add User action.
 */
function focus_groups_subscribe_user_action_form($context) {
  $form = array();

  if (!isset($context['groups'])) {
    $context['groups'] = array();
  }

  $groups = og_all_groups_options();
  if (count($groups)) {
    $form['groups'] = array(
      '#type' => 'select',
      '#title' => t('Groups'),
      '#options' => $groups,
      '#description' => t('Select the groups to which this user should be subscribed.'),
      '#default_value' => $context['groups'],
      '#required' => TRUE,
      '#multiple' => TRUE,
    );
  }
  else {
    drupal_set_message(t('Please <a href="!url">create</a> a group first.', array('!url' => url('admin/content'))));
  }
  return $form;
}

/**
 * Submission handler for Subscribe User action configuration form.
 */
function focus_groups_subscribe_user_action_submit($form, &$form_state) {
  return array(
    'groups' => $form_state['values']['groups'],
  );
}
