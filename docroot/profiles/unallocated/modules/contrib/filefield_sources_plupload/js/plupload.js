(function($) {

Drupal.plupload = Drupal.plupload || {};

/**
 * Attaches the Plupload behavior to each FileField Sources Plupload form element.
 */
Drupal.behaviors.filefield_sources_plupload = {
  attach: function (context, settings) {
    $(".filefield-source-plupload .plupload-element", context).once('ffs-plupload-init', function () {

      // Merge the default settings and the element settings to get a full
      // settings object to pass to the Plupload library for this element.
      var id = $(this).attr('id');
      var defaultSettings = settings.plupload['_default'] ? settings.plupload['_default'] : {};
      var elementSettings = (id && settings.plupload[id]) ? settings.plupload[id] : {};
      var pluploadSettings = $.extend({}, defaultSettings, elementSettings);

      // Initialize Plupload for this element.
      $(this).pluploadQueue(pluploadSettings);
      // Hide upload button. We will do this using uploader.start()
      $(this).find('.plupload_start').hide();
      // While we are at it, hide the redundant file validation help
      $(this).closest('.filefield-source-plupload').find('div.description').hide();

      // Intercept the submit to start uploading and ensure all files are done
      // uploading before triggering the ajax form update.
      var $submit = $(this).closest('.filefield-source-plupload').find('input.form-submit');

      $submit.bind('click', function(e) {
        e.preventDefault();
        var uploader_element = $(this).closest('.filefield-source-plupload').find('.plupload-element');
        var uploader = uploader_element.pluploadQueue();

        uploader.bind('StateChanged', function() {
          if (uploader.total.uploaded == uploader.files.length) {
            // Custom ajax trigger
            $submit.trigger('pud_update');
          }
        });
        if (uploader.files.length > 0) {
          $submit.val(Drupal.t('Uploading...'));
          uploader.start();
        }
        return false;
      });
    });
  }
}

})(jQuery);
