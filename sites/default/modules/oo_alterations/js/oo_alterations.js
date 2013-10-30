(function($) {
  Drupal.behaviors.commentAjaxLogin = {
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

  Drupal.behaviors.handleCreateCoursePopupClose = {  
      attach : function(context, settings) {
        if ($('#create-course-form-block').length > 0) {
          $('#create-course-form-block').click(function(event){
             event.stopPropagation();
          });
          $('.html').click(function(event){
            $('#create-course-form-block').empty();
            $('#create-course-form-block').remove();
          });
        }
      }
    };
  
  Drupal.behaviors.createNewCourseButtonClick = {  
      attach : function(context, settings) {
        if ($('#create-course-bt').length > 0) {
          $('#create-course-bt').click(function(event){
            if ($('#create-course-form-block')) {
              $('#create-course-form-block').remove();
            }
            event.preventDefault();
            event.stopPropagation();
          });
        }
      }
    };
})(jQuery);
