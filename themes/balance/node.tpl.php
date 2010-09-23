<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?><?php if (isset($og_public) && $og_public === FALSE) { print ' node-private'; } ?> <?php if (isset($node_classes)) { print $node_classes; } ?> node-<?php print $type; ?> clear-block">
	<?php if (!$page): ?>
		<h2 class="node-title"><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
	<?php endif; ?>
	<?php if(!$page && isset($focusgroups)): ?>
		<div class="fg">
	    <?php foreach($focusgroups as $g): ?>
			<?php print phptemplate_group_list_item($g, FALSE, FALSE); ?>
		<?php endforeach; ?>
		</div>
	<?php endif; ?>
	<?php if (isset($og_public) && $og_public === FALSE): ?>
	<?php print balance_visibility($node->og_groups_both); ?>
	<?php endif; ?>

  <div class="content">
    <?php print $content ?> … <?php print l('weiterlesen', 'node/' . $node->nid); ?>
		<div class="addthis_button_div">
			<a class="addthis_button" href="http://www.addthis.com/bookmark.php?v=250&amp;username=stoeckit"><img src="http://s7.addthis.com/static/btn/sm-share-en.gif" width="83" height="16" alt="Bookmark and Share" style="border:0"/></a>
		</div>
  </div>

<?php if ($submitted): ?>
  <div class="submitted"><?php print $submitted; ?> |
<?php endif; ?> <a href="/comment/reply/<?php print $node->nid; ?>#comment-form" title="Dieser Seite einen neuen Kommentar hinzufügen.">Neuen Kommentar schreiben</a></div>
</div>
