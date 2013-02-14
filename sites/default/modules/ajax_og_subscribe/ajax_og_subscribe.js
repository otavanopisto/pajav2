(function($) {
  Drupal.behaviors.subscribe_ajax_login = {
    attach : function(context, settings) {
      if ($('.subscribe-ajax-login').length > 0) {
    	  var subscribeAjaxLink = $('.subscribe-ajax-login');
    	  var subscribe_ajax_settings = {};
          subscribe_ajax_settings.submit = {target : '#join-course-form-block'};
          subscribe_ajax_settings.url = subscribeAjaxLink.attr('href');
          subscribe_ajax_settings.event = 'click tap';
          new Drupal.ajax('.subscribe-ajax-login', subscribeAjaxLink, subscribe_ajax_settings);  
      }
    }
  };
  // Override default Cancel link behaviour ...
  Drupal.behaviors.cancelCourseRegisterLink = {
    attach: function(context, settings) {
    	if ($('#join-course-form-block').length > 0) {
    		$('#join-course-form-block a#edit-cancel').click(function(event) {
    			$('#join-course-form-block').fadeOut(300, function () {
    				$(this).remove();
    			});
    			event.preventDefault();
			});
    	}
    } 
  };
})(jQuery);
