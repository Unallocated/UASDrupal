(function ($) {
  Drupal.behaviors.cufonReplace = {
    attach: function(context) {
      for (o in Drupal.settings.cufonSelectors) { 
        var s = Drupal.settings.cufonSelectors[o];
        $(s.selector + ':not(.cufon-replace-processed)', context)
          .each(function() {
            Cufon.replace($(this), s.options);
          })
          .addClass('cufon-replace-processed');
      }
    }
  }
})(jQuery);
