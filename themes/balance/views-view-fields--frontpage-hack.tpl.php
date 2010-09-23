<?php
// $Id: views-view-fields.tpl.php,v 1.6 2008/09/24 22:48:21 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

/**
 * We copy the node.tpl here because we can only use field views, not node views with views_hack
 */
$img =  $fields['field_smallteaser_fid']->content;
$content = $fields['teaser']->content;
$node = node_load($fields['nid']->content);
$link = drupal_get_path_alias('node/' . $node->nid);
$user = user_load($node->uid);
?>
<div class="views-row views-row-2 views-row-even">
	<div id="node-<?php print $node->nid ?>" class="node sticky  node-blog clear-block">
		<h2 class="node-title"><?php print l($fields['title']->content, 'node/' . $node->nid) ?></h2>
		<div class="content">
			<div class="field field-type-filefield field-field-smallteaser">
				<div class="field-items">
					<div class="field-item odd">
						<a href="<?php print $link ?>" class="imagecache imagecache-pic-1c-square imagecache-linked imagecache-pic-1c-square_linked"><img src="/<?php print $img ?>" alt="" title="" class="imagecache imagecache-pic-1c-square" width="70" height="70"></a>
					</div>
				</div>
			</div>
			<p><?php print $content ?> … <?php print l('weiterlesen', 'node/' . $node->nid); ?></p>
			<div class="addthis_button_div">
				<a class="addthis_button" href="http://www.addthis.com/bookmark.php?v=250&amp;username=stoeckit"><img src="/sites/balanceonline.org/themes/balance/img/sm-share-en.gif" width="83" height="16" alt="Bookmark and Share" style="border:0"/></a>
			</div>

			<div class="submitted"><?php print balance_node_submitted($node); ?> | <a href="/comment/reply/<?php print $node->nid; ?>#comment-form" title="Dieser Seite einen neuen Kommentar hinzufügen.">Neuen Kommentar schreiben</a></div>
		</div>
	</div>
</div>
