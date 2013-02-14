(function($) {
  Drupal.behaviors.subscribe_ajax_bt = {  
    attach : function(context, settings) {
      if ($('#join-course-bt').length > 0) {
        $('#join-course-bt').click(function(event){
          if ($('#join-course-form-block').length > 0) {
            $('#join-course-form-block').empty();
            $('#join-course-form-block').remove();
          }
        });
      }
    }
  };
  
  Drupal.behaviors.subscribe_ajax_login = {
    attach : function(context, settings) {
      if ($('.subscribe-ajax-login').length > 0) {
    	  var subscribeAjaxLoginLink = $('.subscribe-ajax-login');
    	  var subscribe_ajax_login_settings = {};
    	  subscribe_ajax_login_settings.submit = {target : '#join-course-form-block'};
    	  subscribe_ajax_login_settings.url = subscribeAjaxLoginLink.attr('href');
    	  subscribe_ajax_login_settings.event = 'click tap';
        new Drupal.ajax('.subscribe-ajax-login', subscribeAjaxLoginLink, subscribe_ajax_login_settings);
      }
    }
  };
  
  Drupal.behaviors.calcelCourseRegisterLink = {
    attach: function(context, settings) {
    	if ($('#join-course-form-block').length > 0) {
    		$('#join-course-form-block a#edit-cancel').click(function(event) {
    		  $('#join-course-form-block').empty();
    			$('#join-course-form-block').remove();
    			event.preventDefault();
    			event.stopPropagation();
			});
    	}
    } 
  };
  
})(jQuery);
