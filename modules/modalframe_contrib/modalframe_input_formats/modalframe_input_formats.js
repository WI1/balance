// $Id: modalframe_input_formats.js,v 1.1.2.1 2010/01/06 20:32:14 markuspetrux Exp $

(function ($) {

Drupal.behaviors.modalFrameInputFormats = function(context) {
  // Create an element to dynamically render status messages.
  $('#filter-admin-overview:not(.modalframe-formats-processed)', context).addClass('modalframe-formats-processed').each(function() {
    if ($('.modalframe-formats-messages').size()) {
      return false;
    }
    $(this).before('<div class="modalframe-formats-messages" style="display:none;"></div>');
  });

  var $links = $([])
    .add($('.tabs a[href*="admin/settings/filters/"]:not(.modalframe-formats-processed)', context))
    .add($('#filter-admin-overview table a[href*="admin/settings/filters/"]:not(.modalframe-formats-processed)', context));

  $links.addClass('modalframe-formats-processed').each(function() {
    var $link = $(this), url = $link.attr('href');
    var regExp = new RegExp('^'+ Drupal.settings.basePath +'(?:[-a-z]+/)?admin/settings/filters/(?:(add|defaults|settings)|[0-9]+|[0-9]+/(edit|configure|order)|(delete)/[0-9]+)$');
    var urlParts = regExp.exec(url);
    if (!urlParts) {
      return;
    }
    var action = (urlParts[1] ? urlParts[1] : (urlParts[2] ? urlParts[2] : (urlParts[3] ? urlParts[3] : 'edit')));

    // Update a DOM element while showing a visual indication.
    var updateElement = function($element, html) {
      if ($element.size()) {
        $element.html(Drupal.theme('modalFrameThrobber'));
        setTimeout(function() {
          $element.hide().html(html).fadeIn('fast', function() {
            Drupal.attachBehaviors($('#filter-admin-overview').parent().get(0));
          });
        }, 1000);
      }
    };

    // onSubmit callback for the modal frame.
    var onSubmitCallback = function(args, statusMessages) {
      if (args && args.submitted) {
        // Render new status messages, if any.
        if (statusMessages && statusMessages.length) {
          $('.modalframe-formats-messages').html(statusMessages).show('fast');
        }

        if (action == 'add') {
          updateElement($('#filter-admin-overview'), args.form);
        }
        else if (action == 'delete') {
          var $row = $link.parents('tr:first'), name = $row.find('td:eq(1)').text();
          $row.html('<td colspan="'+ $row.find('td').size() +'" align="center"></td>');
          updateElement($row.find('td'), Drupal.t('Deleted input format %name.', {'%name': name}));
        }
        else {
          var $row = $link.parents('tr:first');
          if (typeof args.name == 'string') {
            updateElement($row.find('td:eq(1)'), args.name);
          }
          if (typeof args.roles == 'string') {
            updateElement($row.find('td:eq(2)'), args.roles);
          }
          if (typeof args.filters == 'string') {
            updateElement($row.find('td:eq(3)'), args.filters);
          }
          if (typeof args.configure == 'string') {
            updateElement($row.find('td:eq(5)'), args.configure);
          }
          if (typeof args.order == 'string') {
            updateElement($row.find('td:eq(6)'), args.order);
          }
        }
      }
    };

    // Modal frame options.
    var modalFrameOptions = {
      url: url + (url.indexOf('?') == -1 ? '?' : '&') +'modalframe=1',
      onSubmit: onSubmitCallback
    };
    if (action == 'order') {
      modalFrameOptions.width = 960;
      modalFrameOptions.height = 600;
    }
    else if (action == 'delete') {
      modalFrameOptions.width = 960;
      modalFrameOptions.height = 200;
    }

    // The 'Cancel' link of a delete confirmation form closes the dialog.
    if (action == 'delete') {
      modalFrameOptions.onLoad = function(modalFrame, $iFrameWindow, $iFrameDocument) {
        $iFrameWindow('a:not(.modalframe-formats-processed)').addClass('modalframe-formats-processed').click(function() {
          modalFrame.close();
          return false;
        });
      };
    }
    else {
      modalFrameOptions.onLoad = function(modalFrame, $iFrameWindow, $iFrameDocument) {
        $iFrameWindow('a[href*="admin/settings/filters/"]:not(.modalframe-formats-processed)').addClass('modalframe-formats-processed').each(function() {
          var $link = $(this), url = $link.attr('href');
          $link.attr('target', '_self').attr('href', url + (url.indexOf('?') == -1 ? '?' : '&') +'modalframe=1');
        });
      };
    }

    // Attach click event handler to the link.
    $link.click(function() {
      $('.messages').remove();
      $('.modalframe-formats-messages').hide();
      Drupal.modalFrame.open(modalFrameOptions);
      return false;
    });
  });
};

Drupal.theme.prototype.modalFrameInputFormatsMessage = function(message) {
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
