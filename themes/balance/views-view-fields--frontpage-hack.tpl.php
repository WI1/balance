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
$nid = $fields['nid']->content;
$link = drupal_get_path_alias('node/'.$nid);
$title = $fields['title']->content;
$img =  $fields['field_smallteaser_fid']->content;
$content = $fields['teaser']->content;
$node = node_load($nid);
$user = user_load($node->uid);
$userlink = '<a href="'.drupal_get_path_alias('user/'.$user->uid).'">'.$user->profile_firstname.' '.$user->profile_lastname.'</a>';
$fileCount = 0;
if(isset($node->files)){
  $fileCount = count($node->files);
}
$anhang = '';
if($fileCount > 0){
  if($fileCount == 1){
    $anhang = '1 Anhang';
  }else{
    $anhang = $fileCount.' Anhänge';
  }
}
?>
<div class="views-row views-row-2 views-row-even">
    <div id="node-<?php print $nid ?>" class="node sticky  node-blog clear-block">
			<h2 class="node-title"><a href="<?php print $link ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>

  <div class="content">
    <div class="field field-type-filefield field-field-smallteaser">
    <div class="field-items">
            <div class="field-item odd">
                    <a href="<?php print $link ?>" class="imagecache imagecache-pic-1c-square imagecache-linked imagecache-pic-1c-square_linked"><img src="/<?php print $img ?>" alt="" title="" class="imagecache imagecache-pic-1c-square" width="70" height="70"></a>        </div>
        </div>
</div>
<p><?php print $content ?></p>
    <div class="addthis_button_div">
      <a class="addthis-button" href="http://www.addthis.com/bookmark.php" onmouseover="return addthis_open(this, '', 'http://<?php print $_SERVER['HTTP_HOST'].'/'.$link ?>', '<?php print $title ?>')" onmouseout="addthis_close()" onclick="return addthis_sendto()"><img src="http://s9.addthis.com/button1-share.gif" width="125" height="16" alt="&quot;&quot;"></a></div>
  </div>

  <div class="links"><ul class="links inline"><li class="comment_add first"><a href="/comment/reply/<?php print $nid?>#comment-form" title="Dieser Seite einen neuen Kommentar hinzufügen.">Neuen Kommentar schreiben</a></li>
<li class="node_read_more"><a href="<?php print $link?>" title="<?php print $title ?>">Weiterlesen</a></li>
<li class="upload_attachments"><a href="<?php print $link ?>" title="Vollständigen Artikel lesen um die Anhänge zu sehen."><?php print $anhang ?></a></li>
</ul></div>

  <div class="submitted">Verfasst von <?php print $userlink ?> am <?php print $fields['changed']->content ?></div>

</div>  </div>