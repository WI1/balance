<?php
// $Id: template.php,v 1.20 2009/08/26 17:08:19 jmburnz Exp $

/**
 * Overrides theme_event_ical_link: Format the ical link
 *
 * @param path
 *   The url for the ical feed
 */
function balance_event_ical_link($path) {
	return '';
}

/**
 * Overrides theme_event_more_link: the 'read more' link for events
 *
 * @param string path
 *   The url to use for the read more link
 */
function balance_event_more_link($path) {
	return '<div class="more-link">'. l('Alle Termine', $path) .'</div>';
}

/**
 * Overrides theme_event_upcoming_item: an individual upcoming event block item
 *
 * @param node
 *   The node to render as an upcoming event
 */
function balance_event_upcoming_item($node, $types = array()) {
	$formatted_date = date('d.m.', strtotime($node->event_start));
	
	$output = l($formatted_date . ' | ' . $node->title, 'node/' . $node->nid, array('attributes' => array('title' => $node->title)));
	return $output;
}


/**
 * Outputs visibility information for a given set of Organic Groups
 * 
 * @param array $groups
 *   e.g. 45 => 'ACHTINO' (og_groups_both)
 */
function balance_visibility($groups) {
	$output = sprintf('<div class="visibility" title="Sichtbar für %s"></div>', implode(' | ', $groups));
	return $output;
}

function balance_edit_link($node) {
	$output = '';

	if(arg(2) != 'edit') {
		if(node_access('update', $node)) {
			$output = '<span id="balance-node-edit"><span class="famfam active famfam-cog_edit">' . l(t('Edit'), 'node/' . $node->nid . '/edit') . '</span>';
		}
	} else {
		$output = '<span id="balance-node-edit-back">' . l('Zurück', 'node/' . $node->nid) . '</span>';
	}

	return $output;
}


/**
 * Outputs a formatted link to the parent focusgroup
 *
 * @param object node
 *   current node
 * @param object parent
 *   parent node
 */
function balance_parent_focusgroup($node, $parent) {
	echo '<div>';
	echo "<b>Ansprechpartner</b><br>";
	if($node->picture){
		echo '<img src="/'.$node->picture.'"><br>';
	}
	echo $node->name."<br>";
	$userobj = unserialize($node->data);
	echo "Telefon: ".$userobj['addresses']['phone']."<br>";
	$userurl = drupal_get_path_alias('user/'.$node->uid);
	echo '<a href="/'.$userurl.'/contact">Kontaktieren</a>';
	echo "</div><br>";

	if($parent && user_access('view focusgroups')) {

		echo sprintf('<p id="parent-fg">Das Projekt %s ist Teil der Fokusgruppe %s</p>', $node->title, phptemplate_group_list_item($parent, TRUE, FALSE));

		if($node->field_projecthomepage[0]['url']){
			echo 'Projekthomepage<br><a href="'.$node->field_projecthomepage[0]['url'].'">'.$node->field_projecthomepage[0]['display_title'].'</a><br><br>';
		}
		if($node->field_synopsis[0]['view']){
			echo "Projektexposé<br>" . $node->field_synopsis[0]['view'];
		}
	}
}

/**
 * workaround if setlocale(LC_TIME, "de_DE"); doesn't work
 *
 * @param string start
 * @param string end
 * @todo working setLocale
 */
function balance_timeframe($start, $end = '0000-00-00 00:00:00') {
	$dateString = _balance_timeframe_original($start, $end);

	$daysEn = array('Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday');
	$daysDe = array('Montag','Dienstag','Mittwoch','Donnerstag','Freitag','Samstag','Sonntag');

	return str_replace($daysEn, $daysDe, $dateString);
}

/**
 * Formats one or two dates in the form "Montag, den 30. bis Dienstag den 31.12.2010"
 * @param string start
 * @param string end
 */
function _balance_timeframe_original($start, $end) {
	$start_date = substr($start, 0, 10);
	$end_date = substr($end, 0, 10);

	$start = strtotime($start);
	$end = strtotime($end);

	if(!$start) {
		return;
	} elseif(!$end || $start_date == $end_date) {
		return date('l, \d\e\n j.n.Y', $start);
	} else {
		if(date('Y', $start) == date('Y', $end)) {
			//same year
			if(date('n', $start) == date('n', $end)) {
				//same month
				return date('l, \d\e\n j.', $start) . ' bis ' . date('l, \d\e\n j.n.Y', $end);
			} else {
				//different month
				return date('l, \d\e\n j.n.', $start) . ' bis ' . date('l, \d\e\n j.n.Y', $end);
			}
		} else {
			//different year
			return date('l, \d\e\n j.n.Y.', $start) . ' bis ' . date('l, \d\e\n j.n.Y', $end);
		}
	}
}


/**
 * Override or insert PHPTemplate variables into the search_theme_form template.
 *
 * @param $vars
 *   A sequential array of variables to pass to the theme template.
 * @param $hook
 *   The name of the theme function being called (not used in this case.)
 */
function balance_preprocess_search_block_form(&$vars, $hook) {
	// todo: replace this by a more drupal-way solution
	$vars['search_form'] = str_replace('Diese Website durchsuchen:', 'Suche …', $vars['search_form']);
}

/**
 * Replace username with display name
 * Copies large parts of theme_username
 *
 * @param array object
 * @return string
 */
function balance_username($object) {
	// copy of theme_username from here on
	if ($object->uid && $object->name) {
		if(isset($object->profile_firstname)) {
			$full_name = implode(' ', array($object->profile_firstname, $object->profile_lastname));
		} else {
			$user = user_load($object->uid);
			$full_name = implode(' ', array($user->profile_firstname, $user->profile_lastname));
		}
		// Shorten the name when it is too long or it will break many tables.
		if (drupal_strlen($full_name) > 20) {
			$name = drupal_substr($full_name, 0, 18) .'…';
		}
		else {
			$name = $full_name;
		}

		if (user_access('access user profiles')) {
			$output = l($name, 'user/'. $object->uid, array('title' => t('View user profile.')));
		}
		else {
			$output = check_plain($name);
		}
	} else if ($object->name) {
		// Sometimes modules display content composed by people who are
		// not registered members of the site (e.g. mailing list or news
		// aggregator modules). This clause enables modules to display
		// the true author of the content.
		if ($object->homepage) {
	  $output = l($object->name, $object->homepage);
		}
		else {
	  $output = check_plain($object->name);
		}

		$output .= ' ('. t('not verified') .')';
	}
	else {
		$output = variable_get('anonymous', t('Anonymous'));
	}

	return $output;
}

/**
 * Prints menu item children of a given node id
 *
 * @param array node
 * @param string title
 * @return string
 */
function phptemplate_print_children($node, $title = '') {
	$current_menu_item = db_fetch_array(db_query("SELECT mlid FROM {menu_links} WHERE link_path = 'node/%d' AND link_title LIKE 'Fokusgruppe %'", $node->nid));
	$children = db_query("SELECT * FROM {menu_links} WHERE plid = %d AND link_path != 'node/%d' ORDER BY weight", $current_menu_item['mlid'], $node->nid);

	$children_items = array();
	while ($c = db_fetch_array($children)) {
		$children_items[] = l($c['link_title'], $c['link_path']);
	}

	return theme_item_list($children_items, $title);
}

/**
 * Formats Names: Jakob -> Jakobs, Andreas -> Andreas’
 *
 * @param string owner
 * @return string
 */
function phptemplate_owner($owner) {
	return $owner . (in_array(substr($owner, -1), array('s', 'x')) ? '’' : 's');
}

/**
 * Outputs a HTML list for organic groups
 *
 * @param array groups
 */
function phptemplate_group_list($groups) {
	$out = '';

	foreach($groups as $g) {
		$out .= '<div class="group-list-item">' . phptemplate_group_list_item($g) . '</div>';
	}

	return $out;
}

/**
 * Outputs a formatted group badge to use in a list
 *
 * @param array g
 * @param boolean with_text
 * @return string
 */
function phptemplate_group_list_item($g, $withTitle = TRUE, $withCreateLink = TRUE) {
	if($g->field_projectlogo[0]['filepath']) {
		$image = theme('imagecache', 'projectlogo_1-2c', $g->field_projectlogo[0]['filepath']);
	} else {
		$image = '';
	}

	$out = l($image, 'node/' . $g->nid, array('html' => TRUE, 'attributes' => array('title' => $g->title)));

	if($withTitle || $withCreateLink) {
		$out .= '<ul>';

		if($withTitle) {
			$out .= '<li class="group_title">' . l($g->title, 'node/' . $g->nid, array('html' => TRUE)) . '</li>';
		}

		if($withCreateLink) {
			$out .= '<li class="node_add">' . l('Beitrag schreiben', 'node/add/blog', array('query' => 'gids[]='. $g->nid)) . '</li>';
		}

		$out .= '</ul>';
	}


	return $out;
}

/**
 * Outputs a link to write a new og blog post in the active organic group
 * 
 * @param object $node
 */
function balance_og_add_blog_link($node) {
	global $user;
	list($txt, $subscription) = og_subscriber_count_link($node);
	
	if(($subscription == 'active' && module_invoke('blog', 'access', 'create', 'blog', $user)) || user_access('administer nodes')) {
		$links = module_invoke_all('og_create_links', $node);
		return '<span id="balance-add-blog">' . $links['create_blog'] . '</span>';
	}
}

/**
 * Outputs a HTML vCard
 *
 * @param int uid
 * @return string
 */
function phptemplate_business_card($uid) {
	$hcardOutput = 'Noch keine Person eingetragen';

	if($uid) {
		$user = user_load($uid);

		$hcard = array(
			'url' => '/user/' . $user->uid,
			'given-name' => $user->profile_firstname,
			'family-name' => $user->profile_lastname,
			'street-address' => $user->addresses['street'],
			'postal-code' => $user->addresses['postal_code'],
			'locality' => $user->addresses['city'],
			'country-name' => $user->addresses['country'],
			'phone-work-value' => $user->addresses['phone'],
			'fax-work-value' => $user->addresses['fax'],
			'logo' => theme('user_picture', $user),
		);

		$hcardOutput =
'<div class="vcard" style="display: inline-block;">
	<span class="logo">' . $hcard['logo'] . '</span>
	<span class="fn n">
		<a class="url" href="' . $hcard['url'] . '">
			<span class="given-name">' . $hcard['given-name'] . '</span>
			<span class="family-name">' . $hcard['family-name'] . '</span>
		</a>
	</span>
	<div class="adr">
		<div class="street-address">' . $hcard['street-address'] . '</div>
		<span class="postal-code">' . $hcard['postal-code'] . '</span> <span class="locality">' . $hcard['locality'] . '</span>
		<div class="country-name hide">' . $hcard['country-name'] . '</div>
	</div>
	<div class="tel"><span class="type">Tel.</span>: <span class="value">' . $hcard['phone-work-value'] . '</span></div>
	<div class="tel"><span class="type">Fax</span>: <span class="value">' . $hcard['fax-work-value'] . '</span></div>
</div>';
	}

	return $hcardOutput;
}
function balance_upload_form_current(&$form) {
$header = array('', t('Description'),t('Delete'));
//$header = array();
  drupal_add_tabledrag('upload-attachments', 'order', 'sibling', 'upload-weight');

  foreach (element_children($form) as $key) {
    // Add class to group weight fields for drag and drop.
    $form[$key]['weight']['#attributes']['class'] = 'upload-weight';

    $row = array('');
    $row[] = drupal_render($form[$key]['description']);
    $row[] = drupal_render($form[$key]['remove']);
  //  $row[] = drupal_render($form[$key]['list']);

//    $row[] = drupal_render($form[$key]['size']);
    $rows[] = array('data' => $row, 'class' => 'draggable');
  }
  $output = '<br><br>'.theme('table', $header, $rows, array('id' => 'upload-attachments'));
  $output .= drupal_render($form);
  return $output;

}
function balance_upload_form_new(&$form) {
        $files = & $form['files'];
        $files['#weight']=10;
        foreach ($files as $fileId =>$file) {
                if (is_int($fileId)) {
                        unset($files[$fileId]['size']);
                        $files[$fileId]['description']['#size']=50;
                }
        }
        $output = drupal_render($form);
        return $output;

}
