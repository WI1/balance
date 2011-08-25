<?php if(arg(2) === null): ?>
<?php print $node->content['view']['#value']; $node=node_load(arg(1)); drupal_set_title($node->title); ?>

<?php elseif(arg(2) == 'info'): ?>
<?php //drupal_set_message('<pre>' . print_r($node, TRUE) . '</pre>'); ?>
<?php print $content; ?>
<?php endif; ?>