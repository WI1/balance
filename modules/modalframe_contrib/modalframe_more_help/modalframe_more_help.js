// $Id: modalframe_more_help.js,v 1.1.2.1 2010/01/01 20:19:39 markuspetrux Exp $

(function ($) {

Drupal.behaviors.modalFrameMoreHelp = function(context) {
  $('.more-help-link a:not(.modalframe-more-help-processed)', context).addClass('modalframe-more-help-processed').click(function() {
    Drupal.modalFrame.open({url: $(this).attr('href'), width: 800, height: 600});
    return false;
  });
};

})(jQuery);
