// $Id: modalframe_locale.js,v 1.1.2.1 2010/01/03 13:14:55 markuspetrux Exp $

(function ($) {

Drupal.behaviors.modalFrameLocale = function(context) {
  $('table td a:not(.modalframe-locale-processed)', context).addClass('modalframe-locale-processed').each(function() {
    var $link = $(this), url = $link.attr('href');
    var regExp = new RegExp('^'+ Drupal.settings.basePath +'(?:[-a-z]+/)?admin/build/translate/(edit|delete)/[0-9]+$');
    var urlParts = regExp.exec(url);
    if (!urlParts) {
      return;
    }
    var action = urlParts[1];

    // Update a DOM element while showing a visual indication.
    var updateElement = function($element, html) {
      if ($element.size()) {
        $element.html(Drupal.theme('modalFrameThrobber'));
        setTimeout(function() {
          $element.hide().html(html).fadeIn('fast', function() {
            Drupal.attachBehaviors($element.get(0));
          });
        }, 1000);
      }
    };

    // onSubmit callback for the modal frame.
    var onSubmitCallback = function(args, statusMessages) {
      if (args && args.submitted) {
        if (action == 'delete') {
          // Remove edit and delete links.
          var $row = $link.parents('tr:first'), $editCell = $row.find('td:eq(3)'), $deleteCell = $row.find('td:eq(4)');
          updateElement($editCell, Drupal.theme('modalFrameLocaleDisabled', $('a', $editCell).text()));
          updateElement($deleteCell, Drupal.theme('modalFrameLocaleDisabled', $('a', $deleteCell).text()));
          $row.attr('title', Drupal.t('This string has been removed.'));
        }
        else if (args.languages) {
          updateElement($link.parents('tr:first').find('td:eq(2)'), args.languages);
        }
      }
    };

    // Modal frame options.
    var modalFrameOptions = {
      url: url + (url.indexOf('?') == -1 ? '?' : '&') +'modalframe=1',
      width: 960,
      height: (action == 'delete' ? 200 : 400),
      onSubmit: onSubmitCallback
    };
    if (Drupal.settings.modalFrameLocale && Drupal.settings.modalFrameLocale.language) {
      modalFrameOptions.url += '&modalframe-language='+ Drupal.settings.modalFrameLocale.language;
    }

    // The 'Cancel' link of a delete confirmation form closes the dialog.
    if (action == 'delete') {
      modalFrameOptions.onLoad = function(modalFrame, $iFrameWindow, $iFrameDocument) {
        $iFrameWindow('a:not(.modalframe-locale-processed)').addClass('modalframe-locale-processed').click(function() {
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
  });
};

Drupal.theme.prototype.modalFrameLocaleDisabled = function(text) {
  return '<em class="locale-untranslated">'+ text +'</em>';
};

})(jQuery);
