// $Id: modalframe_dblog.js,v 1.1.2.1 2010/01/01 20:19:39 markuspetrux Exp $

(function ($) {

Drupal.behaviors.modalFrameDBLog = function(context) {
  $('#admin-dblog td a:not(.modalframe-dblog-processed)', context).addClass('modalframe-dblog-processed').each(function() {
    var $link = $(this), url = $link.attr('href');
    var regExp = new RegExp('^'+ Drupal.settings.basePath +'(?:[-a-z]+/)?admin/reports/event/[0-9]+$');
    if (regExp.test(url)) {
      $link.click(function() {
        Drupal.modalFrame.open({url: url, width: 800, height: 600});
        return false;
      });
    }
  });
};

})(jQuery);
