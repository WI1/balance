// $Id: parent.js,v 1.1.2.2 2010/01/16 19:37:43 markuspetrux Exp $

(function ($) {

Drupal.modalFrameCCKEditor = Drupal.modalFrameCCKEditor || {};

/**
 * Drupal behavior to process CCK editor buttons.
 */
Drupal.behaviors.modalFrameCCKEditor = function(context) {
  var self = Drupal.modalFrameCCKEditor;

  // Attach edit buttons to the selected elements.
  $.each(Drupal.settings.modalFrameCCKEditor, function(elementSelector, elementInfo) {
    $(elementSelector +':not(.modalframe-cck-editor-processed)', context).addClass('modalframe-cck-editor-processed').each(function() {
      var $element = $(this);

      // Dynamically create the edit button.
      var $button = $(Drupal.theme('modalFrameCCKEditorButton', elementInfo.editUrl, Drupal.t('Edit @label...', {'@label': elementInfo.label})));

      // Prepend the editor button on top of the target element.
      $element.prepend($button);

      // Attach an onClick callback to the editor button.
      $button.bind('click', function() {
        self.editButtonClick($button.attr('href'), $element);
        return false;
      });
    });
  });
};

/**
 * onClick callback for the edit button.
 *
 * @param url
 *   The URL to open on the modal frame.
 * @param $element
 *   The jQuery object of the target element.
 */
Drupal.modalFrameCCKEditor.editButtonClick = function(url, $element) {
  var self = this;

  // Modal frame options.
  var modalFrameOptions = {
    url: url,
    width: 960,
    onSubmit: function(args, statusMessages) {
      self.onSubmit(url, $element, args, statusMessages);
    }
  };

  // Open the modal frame.
  Drupal.modalFrame.open(modalFrameOptions);
};

/**
 * onSubmit callback for the modal frame.
 *
 * @param url
 *   The URL opened on the modal frame.
 * @param $element
 *   The jQuery object of the target element.
 * @param args
 *   The arguments forwarded by the call to modalframe_close_dialog() from the
 *   submit handler of the node edit form. Note this arguments could have been
 *   altered by your custom implementation of modalframe_cck_editor_close_dialog().
 * @param statusMessages
 *   The HTML of the Drupal status messages generated during edit form processing.
 */
Drupal.modalFrameCCKEditor.onSubmit = function(url, $element, args, statusMessages) {
  var self = this;

  if (args.reload) {
    // Replace the target element with incoming status messages,
    // and then reload the current page.
    self.updateElement($element, statusMessages, function() {
      window.location.reload();
    });
  }
  else if (args.content) {
    // Replace the target element with updated content.
    self.updateElement($element, args.content);
  }
};

/**
 * Update a DOM element while showing a visual indication.
 *
 * @param $element
 *   The jQuery object of the target element.
 * @param html
 *   The HTML string that will be used to replace the target element.
 * @param callback
 *   An optional reference to a function that will be executed after the target
 *   element has been replaced.
 */
Drupal.modalFrameCCKEditor.updateElement = function($element, html, callback) {
  if ($element.size()) {
    $element.html(Drupal.theme('modalFrameThrobber'));
    setTimeout(function() {
      $element.hide().replaceWith(html).fadeIn('fast', function() {
        Drupal.attachBehaviors($element.parent().get(0));
        if ($.isFunction(callback)) {
          callback();
        }
      });
    }, 1000);
  }
};

/**
 * Allow themers to style the edit button.
 *
 * @param url
 *   The URL to attach to the edit button, also used to open the modal frame.
 * @param title
 *   The text for the title attribute of the link.
 */
Drupal.theme.prototype.modalFrameCCKEditorButton = function(url, title) {
  return '<a class="modalframe-cck-editor-button-edit" href="'+ url +'" title="'+ title +'"></a>';
};

})(jQuery);
