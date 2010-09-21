// $Id: modalframe_path.js,v 1.1.2.2 2010/01/02 05:57:49 markuspetrux Exp $

(function ($) {

Drupal.behaviors.modalFramePath = function(context) {
  var $links = $([])
    .add($('.tabs a[href*="admin/build/path/"]:not(.modalframe-path-processed)', context))
    .add($('table td a[href*="admin/build/path/"]:not(.modalframe-path-processed)', context));

  $links.addClass('modalframe-path-processed').each(function() {
    var $link = $(this), url = $link.attr('href');
    var regExp = new RegExp('^'+ Drupal.settings.basePath +'(?:[-a-z]+/)?admin/build/path/(add|edit|delete)(?:/[0-9]+)?.*$');
    var urlParts = regExp.exec(url);
    if (urlParts) {
      var action = urlParts[1];

      // onSubmit callback for the modal frame.
      var onSubmitCallback = function(args, statusMessages) {
        if (args && args.url) {
          $('body').css('cursor', 'wait');
          if (action == 'add') {
            window.location = args.url;
          }
          else {
            window.location.reload();
          }
        }
      };

      // Modal frame options.
      var modalFrameOptions = {
        url: url + (url.indexOf('?') == -1 ? '?' : '&') +'modalframe=1',
        width: 800,
        height: (action == 'delete' ? 200 : 400),
        onSubmit: onSubmitCallback
      };

      // The 'Cancel' link of a delete confirmation form closes the dialog.
      if (action == 'delete') {
        modalFrameOptions.onLoad = function(modalFrame, $iFrameWindow, $iFrameDocument) {
          $iFrameWindow('a:not(.modalframe-path-processed)').addClass('modalframe-path-processed').click(function() {
            modalFrame.close();
            return false;
          });
        };
      }

      // Attach click event handler to the link.
      $link.click(function() {
        Drupal.modalFrame.open(modalFrameOptions);
        return false;
      });
    }
  });
};

})(jQuery);
