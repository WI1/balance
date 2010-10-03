<?php if(arg(2) === null): ?>
<?php print $node->content['view']['#value']; ?>

<?php elseif(arg(2) == 'info'): ?>
<?php print $node->content['og_mission']['#value'] ?>
<dl>
  <dt>Betreuung DLR</br>
<?php print $node->field_contactdlrpicture[0]['view'] ?></dt>
 <dd><?php print $node->field_contactdlr[0]['view'] ?></dd>
</dl>
<dl>
<dt>Betreuung BALANCE</dt>
  <dd><?php print phptemplate_business_card($node->field_contactbalance[0]['uid']); ?></dd>
</dl>
<?php endif; ?>