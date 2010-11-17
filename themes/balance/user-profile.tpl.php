<?php if(user_edit_access($account)): ?>
<div id="balance-user-edit"><span class="famfam active balance-node-edit"></span><?php print l(t('Edit'), 'user/' . $account->uid . '/edit') ?></div>
<?php endif; ?>

<div class="vcard card">
    <div class="info">
		<span class="fn"><?php print implode(' ', array($account->profile_title, $account->profile_firstname, $account->profile_middlename, $account->profile_lastname)); ?></span>
        <!--(<span class="username"><?php print $account->name; ?></span>)-->
    </div>
    <div class="contact">
<?php if(isset($account->location)): ?>
        <span class="street-address"><?php print $account->location['street']; ?></span><br />
        <span class="postal-code"><?php print $account->location['postal_code']; ?></span> <span class="locality"><?php print $account->location['city']; ?></span><br />
        <span class="country"><?php print $account->location['country_name']; ?></span><br />
<?php endif ?>
        <span class="email"><?php print l($account->mail, 'mailto:' . $account->mail); ?></span><br /><br />
	</div>
</div>
<ul>
	<?php if($account->profile_facebook): ?><li><?php print l('Facebook Account', sprintf('http://www.facebook.com/profile.php?id=%s', $account->profile_facebook)); ?></li><?php endif; ?>
	<?php if($account->profile_researchgate): ?><li><?php print l('ResearchGATE Account', sprintf('http://www.researchgate.net/profile/%s', $account->profile_researchgate)); ?></li><?php endif; ?>
	<?php if($account->profile_twitter): ?><li><?php print l('Twitter Account', sprintf('http://twitter.com/%s', $account->profile_twitter)); ?></li><?php endif; ?>
	<?php if($account->profile_xing): ?><li><?php print l('XING Account', sprintf('http://www.xing.com/profile/%s', $account->profile_xing)); ?></li><?php endif; ?>
</ul>
