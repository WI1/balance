<?php if(arg(2) === null): ?>
<?php print views_embed_view('og_ghp_ron'); ?>
<?php elseif(arg(2) == 'info'): ?>
<?php print $node->content['view']['#value']; ?>
<?php endif; ?>