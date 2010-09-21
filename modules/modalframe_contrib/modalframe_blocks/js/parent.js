// $Id: parent.js,v 1.1.2.2 2010/01/02 05:57:49 markuspetrux Exp $

(function ($) {

Drupal.behaviors.modalFrameBlocksParent = function(context) {
  // Create an element to dynamically render status messages.
  $('#blocks:not(.modalframe-blocks-processed)', context).addClass('modalframe-blocks-processed').each(function() {
    $(this).parent().prepend('<div class="modalframe-blocks-messages" style="display:none;"></div>');
  });

  var blockConfigurationClick = function(action, url, refreshAfterSubmit) {
    // Hide status messages before opening the modal frame.
    $('.messages').remove();
    $('.modalframe-blocks-messages').hide();

    if (refreshAfterSubmit) {
      url += (url.indexOf('?') == -1 ? '?' : '&') +'refresh=1';
    }

    // Update a blocks region.
    var updateRegion = function(region, html) {
      var $region = $('.modalframe-blocks-region-'+ region).parent();
      $region.html(Drupal.theme('modalFrameBlocksMessage', Drupal.t('Updating region.')));
      setTimeout(function() {
        $region.hide().html(html).fadeIn('fast', function() {
          Drupal.attachBehaviors($region.get(0));
        });
      }, 1000);
    };

    var onSubmitCallback = function(args, statusMessages) {
      if (args && args.submitted) {
        // Render new status messages, if any.
        if (statusMessages && statusMessages.length) {
          $('.modalframe-blocks-messages').html(statusMessages).show('fast');
        }

        // Refresh a blocks region after editing a visible block.
        if (args.region) {
          updateRegion(args.region, args.blocks);
        }
        // Reload page after adding or deleting a block.
        else if (action == 'add' || action == 'delete') {
          $('.modalframe-blocks-messages').append(Drupal.theme('modalFrameBlocksMessage', Drupal.t('Reloading the page.')));
          window.scrollTo(0, 0);
          setTimeout(function() { window.location.reload(); }, 100);
        }
      }
    };
    var modalFrameOptions = {
      url: url,
      width: 800,
      height: (action == 'delete' ? 200 : 600),
      onSubmit: onSubmitCallback
    };

    Drupal.modalFrame.open(modalFrameOptions);
    return false;
  };

  // Display configure buttons on block hover.
  $('.block:not(.modalframe-blocks-processed)', context).addClass('modalframe-blocks-processed').each(function() {
    var $block = $(this), $button = $block.find('.modalframe-blocks-configure-button');
    if ($button.size()) {
      $block.hover(
        function() { $block.addClass('modalframe-blocks-block-hover'); },
        function() { $block.removeClass('modalframe-blocks-block-hover'); }
      );
    }
  });

  // Find out block configuration and delete block links.
  $('#blocks td a:not(.modalframe-blocks-processed), .modalframe-blocks-configure-button a:not(.modalframe-blocks-processed)', context).addClass('modalframe-blocks-processed').each(function() {
    var $link = $(this), url = $link.attr('href');
    var regExp = new RegExp('^'+ Drupal.settings.basePath +'(?:[-a-z]+/)?admin/build/block/(configure|delete)(?:/([_a-z0-9]+))?/(.+)$');
    var linkArgs = regExp.exec(url);
    if (linkArgs) {
      var refreshAfterSubmit = (linkArgs[1] == 'configure' && $('#block-'+ linkArgs[2] +'-'+ linkArgs[3] +':visible').size());
      $link.click(function() { return blockConfigurationClick(linkArgs[1], url, refreshAfterSubmit); });
    }
  });

  // Find out "Add block" links (on primary tabs and help message).
  $('a[href$="admin/build/block/add"]:not(.modalframe-blocks-processed)', context).addClass('modalframe-blocks-processed').each(function() {
    var $link = $(this), url = $link.attr('href');
    $link.click(function() { return blockConfigurationClick('add', url, true); });
  });
};

Drupal.theme.prototype.modalFrameBlocksMessage = function(message) {
  var output = '<div class="modalframe-blocks-message"><div class="messages status">';
  if (message) {
    output += ' '+ message +' ';
  }
  output += Drupal.t('Please, wait...');
  output += '&nbsp;'+ Drupal.theme('modalFrameThrobber');
  output += '</div></div>';
  return output;
};

})(jQuery);
