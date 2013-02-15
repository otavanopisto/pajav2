(function($) {
  Drupal.behaviors.subscribeAjaxBtClick = {  
    attach : function(context, settings) {
      if ($('#join-course-bt').length > 0) {
        $('#join-course-bt').click(function(event){
          if ($('#join-course-form-block').length > 0) {
            $('#join-course-form-block').empty();
            $('#join-course-form-block').remove();
            event.preventDefault();
            event.stopPropagation();
          }
        });
      }
    }
  };

  Drupal.behaviors.handlePopupClose = {  
      attach : function(context, settings) {
        if ($('#join-course-form-block').length > 0) {
          $('#join-course-form-block').click(function(event){
             event.stopPropagation();
          });
          $('.html').click(function(event){
            $('#join-course-form-block').empty();
            $('#join-course-form-block').remove();
          });
        }
      }
    };
  
  Drupal.behaviors.subscribeAjaxLogin = {
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
  // Override default Cancel link behaviour ...
  Drupal.behaviors.cancelCourseRegisterLink = {
    attach: function(context, settings) {
    	if ($('#join-course-form-block').length > 0) {
    		$('#join-course-form-block a#edit-cancel').click(function(event) {
    		  $('#join-course-form-block').empty();
    			$('#join-course-form-block').remove();
    			$('#join-course-form-block').fadeOut(300, function () {
    				$(this).remove();
    			});
    			event.preventDefault();
    			event.stopPropagation();
			});
    	}
    } 
  };
})(jQuery);
