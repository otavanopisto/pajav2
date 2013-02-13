(function($) {
  Drupal.behaviors.comment_ajax_login = {
    attach : function(context, settings) {
      var commentAjaxLink = $('.comment-ajax-login');
      var comment_ajax_settings = {};
      comment_ajax_settings.submit = {target : '.generic-empty-text-wrapper'};
      comment_ajax_settings.url = commentAjaxLink.attr('href');
      comment_ajax_settings.event = 'click tap';
      new Drupal.ajax('.comment-ajax-login', commentAjaxLink, comment_ajax_settings);
    }
  };
})(jQuery);
