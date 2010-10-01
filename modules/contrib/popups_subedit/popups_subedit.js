// $Id: popups_subedit.js,v 1.1.1.1.2.5 2009/03/16 06:28:52 starbow Exp $

/**
 * Popups: Subedit behavior
 */


/**
 * Attach the behavior.
 */
Drupal.behaviors.popups_subedit = function(context) {
  if(!$('body').hasClass('popups-subedit-processed')) {
    $('body').addClass('popups-subedit-processed');
    // Bind to the popups API custom form_success event.
    $(document).bind('popups_open_path_done', function(obj, element, href, popup) {
      popup.hide();
      var $popup = popup.$popup();
      var group_class = $(element).attr('rel');
      // Filter the popup.
      var $submit = $popup.find('#edit-submit');
      popups_subedit_reveal($submit);
      var $group = $popup.find('fieldset.' + group_class);
      popups_subedit_reveal($group);
      popup.show();  // Does a resizeAndCenter.
    });
  }
};

/**
 * Show a single form element, hiding the rest of the form.
 * Can be called multiple times for different elements on the same form,
 * without hiding previously revealed elements.
 */
function popups_subedit_reveal($element) {
  if ($element.is('form') || !$element.length) {
    return;
  }
  else {
    $element.show();
    $element.addClass('revealed');
    $element.siblings().not('.revealed').hide();
    popups_subedit_reveal($element.parent());
  }
} 