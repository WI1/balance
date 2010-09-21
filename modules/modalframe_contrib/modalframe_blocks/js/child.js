// $Id: child.js,v 1.1.2.1 2010/01/01 20:19:39 markuspetrux Exp $

(function ($) {

Drupal.modalFrameChild.behaviors.modalFrameBlocksChild = function(context) {
  // Replace the links to blocks overview with their text.
  $('a[href$="admin/build/block"]:not(.modalframe-blocks-processed)', context).addClass('modalframe-blocks-processed').each(function() {
    if (window.location.href.indexOf('admin/build/block/delete') !== -1) {
      $(this).click(function() {
        Drupal.modalFrameChild.triggerParentEvent('childClose');
        return false;
      });
    }
    else {
      $(this).replaceWith('<em>'+ $(this).html() +'</em>');
    }
  });
};

})(jQuery);
