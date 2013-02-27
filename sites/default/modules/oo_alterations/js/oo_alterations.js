(function($) {
  Drupal.behaviors.commentAjaxLogin= {
    attach : function(context, settings) {
      if ($('.comment-ajax-login').length > 0) {
    	  var commentAjaxLink = $('.comment-ajax-login');
    	  var commentAjaxSettings = {};
    	  commentAjaxSettings.submit = {target : '.generic-empty-text-wrapper'};
    	  commentAjaxSettings.url = commentAjaxLink.attr('href');
    	  commentAjaxSettings.event = 'click tap';
        new Drupal.ajax('.comment-ajax-login', commentAjaxLink, commentAjaxSettings);
      }
    }
  };

})(jQuery);
