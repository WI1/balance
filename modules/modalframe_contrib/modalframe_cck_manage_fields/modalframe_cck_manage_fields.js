// $Id: modalframe_cck_manage_fields.js,v 1.1.2.2 2010/01/07 12:48:00 markuspetrux Exp $

(function ($) {

Drupal.behaviors.modalFrameCCKManageFields = function(context) {
  // Create an element to dynamically render status messages.
  $('#content-field-overview:not(.modalframe-cck-processed)', context).addClass('modalframe-cck-processed').each(function() {
    $(this).before('<div class="modalframe-cck-messages" style="display:none;"></div>');
  });

  var manageFieldsPath = Drupal.settings.modalFrameCCKManageFields.path;
  var $links = $([])
    .add($('.tabs a[href*="'+ manageFieldsPath +'/"]:not(.modalframe-cck-processed)', context))
    .add($('#content-field-overview td a[href*="admin/content/"]:not(.modalframe-cck-processed)', context));

  $links.addClass('modalframe-cck-processed').each(function() {
    var $link = $(this), url = $link.attr('href');
    var regExp = new RegExp('^'+ Drupal.settings.basePath +'(?:[-a-z]+/)?admin/content/(?:types|node-type)/[-_a-z0-9]+/(fields|groups)/([_a-z0-9]+)(?:/(remove))?.*$');
    var urlParts = regExp.exec(url);
    if (urlParts) {
      var elementType = (urlParts[1] == 'fields' ? 'field' : 'group');
      var elementName = urlParts[2];
      var action = (urlParts[3] ? urlParts[3] : 'edit');

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
        if (args) {
          // Render new status messages, if any.
          if (statusMessages && statusMessages.length) {
            $('.modalframe-cck-messages').html(statusMessages).show('fast');
          }
          if (args.reload) {
            window.scrollTo(0, 0);
            $('.modalframe-cck-messages').append(Drupal.theme('modalFrameCCKManageFieldsMessage', Drupal.t('Reloading page.')));
            setTimeout(function() { window.location.reload(); }, 100);
          }
          else if (args.label) {
            if (elementType == 'field') {
              updateElement($('.secondary a[href$="'+ manageFieldsPath +'/fields/'+ elementName +'"]'), args.label);
            }
            updateElement($link.parents('tr:first').find('td:first span.label-'+ elementType), args.label);
          }
        }
      };

      // Modal frame options.
      var modalFrameOptions = {
        url: url + (url.indexOf('?') == -1 ? '?' : '&') +'modalframe=1',
        width: 960,
        height: (action == 'remove' ? 200 : 400),
        onSubmit: onSubmitCallback
      };

      // The 'Cancel' link of a delete confirmation form closes the dialog.
      if (action == 'remove') {
        modalFrameOptions.onLoad = function(modalFrame, $iFrameWindow, $iFrameDocument) {
          $iFrameWindow('a:not(.modalframe-cck-processed)').addClass('modalframe-cck-processed').click(function() {
            modalFrame.close();
            return false;
          });
        };
      }

      // Attach click event handler to the link.
      $link.click(function() {
        $('.messages').remove();
        $('.modalframe-cck-messages').hide();
        Drupal.modalFrame.open(modalFrameOptions);
        return false;
      });
    }
  });
};

Drupal.theme.prototype.modalFrameCCKManageFieldsMessage = function(message) {
  var output = '<div class="messages status">';
  if (message) {
    output += ' '+ message +' ';
  }
  output += Drupal.t('Please, wait...');
  output += '&nbsp;'+ Drupal.theme('modalFrameThrobber');
  output += '</div>';
  return output;
};

})(jQuery);
