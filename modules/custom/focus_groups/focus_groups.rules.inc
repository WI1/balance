<?php
/**
 * Implementation of hook_action_info().
 */
function focus_groups_action_info() {
	return array(
		'focus_groups_subscribe_user_action' => array(
			'description' => t('Subscribe user to the focus group of the context group'),
			'type' => 'user',
			'configurable' => FALSE,
			'hooks' => array('any' => TRUE),
		),
		'focus_groups_simplenews_subscribe_action' => array(
			'description' => t('Subscribe user to the newsletter of the context group'),
			'type' => 'user',
			'configurable' => FALSE,
			'hooks' => array('any' => TRUE),
		),
		'focus_groups_simplenews_unsubscribe_action' => array(
			'description' => t('Unsubscribe user from the newsletter of the context group'),
			'type' => 'user',
			'configurable' => FALSE,
			'hooks' => array('any' => TRUE),
		)
    );
}

/**
 * Subscribes a user to a focus group of the given group
 */
function focus_groups_subscribe_user_action($account, $context) {
	if($group_id = focus_groups_get_group_id()) {
		if($focus_group_id = focus_groups_get_parent($group_id)) {
			og_save_subscription($focus_group_id, $user->uid, array('is_active' => 1));
			watchdog('focus_groups', 'Subscribed user id %id to focus group %fg.', array('%id' => $account->uid, '%fg' => $focus_group_id));
		}
	}
}

/**
 * Subscribes a user to a newsletter of the given group. If the newsletter doesn't exist already it creates it.
 */
function focus_groups_simplenews_subscribe_action($account, $context) {
	if($group_id = focus_groups_get_group_id()) {
		$group = node_load($group_id);

		$term = taxonomy_get_term_by_name('Newsletter ' . $group->title);
		if(!$term){
			//creating a new term
			$term = array('name' => 'Newsletter ' . $group->title, 'vid' => 7);
			taxonomy_save_term($term);
			$term = taxonomy_get_term_by_name('Newsletter ' . $group->title);
		}
		$term = array_pop($term);
		simplenews_subscribe_user($account->mail, $term->tid, false);
		watchdog('focus_groups', 'Subscribed user id %id to newsletter %newsletter.', array('%id' => $account->uid, '%newsletter' => $group->title));
	}
}

/**
 * Unsubscribes a user from a newsletter of the given group.
 */
function focus_groups_simplenews_unsubscribe_action($account, $context) {
	if($group_id = focus_groups_get_group_id()) {
		$group = node_load($group_id);

		if($term = array_pop(taxonomy_get_term_by_name('Newsletter ' . $group->title))) {
			simplenews_unsubscribe_user($account->mail, $term->tid, false);
			watchdog('focus_groups', 'Unubscribed user id %id from newsletter %newsletter.', array('%id' => $account->uid, '%newsletter' => $group->title));
		}
	}
}

/**
 * Get group id from url since i couldn't get it into the context
 * 
 * This is an uncool function and works only because for all actions the URL is in the form of /og/approve/55/.
 * A workaround could be making an actions settings form and insert the group id as a token.
 */
function focus_groups_get_group_id() {
	$group_id = arg(2);

	if(!is_numeric($group_id) || (int)$group_id < 1) {
		watchdog('focus_groups', 'Group id invalid', array(), WATCHDOG_ERROR);
		return false;
	}
	
	return (int)$group_id;
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
