// $Id: modalframe_filter_tips.js,v 1.1.2.1 2010/01/01 20:19:39 markuspetrux Exp $

(function ($) {

Drupal.behaviors.modalFrameFilterTips = function(context) {
  $('a[href$="filter/tips"]:not(.modalframe-filter-tips-processed)', context).addClass('modalframe-filter-tips-processed').click(function() {
    Drupal.modalFrame.open({url: $(this).attr('href'), width: 800, height: 600});
    return false;
  });
};

})(jQuery);
