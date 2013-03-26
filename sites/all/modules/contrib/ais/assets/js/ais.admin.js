/**
 * @file
 * Updates the vertical tabs summaries 
 *
 */

(function ($) {
  Drupal.behaviors.aisFieldsetSummeries = {
    attach: function (context) {
      if (typeof ($('fieldset.ais-settings-form', context).drupalSetSummary) == 'function') {
        $('fieldset.ais-settings-form', context).drupalSetSummary(function (context) {
          if($('.form-type-checkbox input', context).is(':checked')) {
            return Drupal.t('Selected');
          }
          else {
            return Drupal.t('Not used');
          }
        });
       }
    }
  }
}(jQuery));

