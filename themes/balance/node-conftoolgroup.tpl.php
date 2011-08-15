<?php if(arg(2) === null): ?>
<?php print $node->content['view']['#value']; ?>
<?php elseif(arg(2) == 'info'): ?>
<?php print 'test'; ?>