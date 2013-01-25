(function($) {

  Drupal.behaviors.FixedNavigation = {
    attach : function(context, settings) {
			
    var headerHeight = $('#section-header').outerHeight();
    var aboveHeight = headerHeight - 42;

    $(window).scroll(
      function() {
        if ($(window).scrollTop() > aboveHeight) {
          $('.navigation').addClass('fixedPosition').css('top', '0');
        } 
        else {
          $('.navigation').removeClass('fixedPosition');
        }
      });
    }
  };
  
  Drupal.behaviors.ShowFullDescription = {
    attach: function(context, settings) {
      
      var descControlWrapper = $('.desc-control-wrapper');
      var showMoreLink = $('.show-more-link');
      var showLessLink = $('.show-less-link');
      var descElementWrapper = $('.pane-node-body');
      var descELementHeight = $('.field-name-body').outerHeight();
      
      if (descELementHeight >= '400') {
	    showMoreLink.click(function() {
	    	descElementWrapper.animate({
	    	  height: descELementHeight + 'px'
	    	  }, 500, 'linear', function() {
	            showMoreLink.addClass('hiddenControl');
	            showLessLink.removeClass('hiddenControl');
	        });
	      });
      } 
      else {
    	descControlWrapper.css({
    	  display:'none'
        });
      }
    }
  };
  
  Drupal.behaviors.ShowLessDescription = {
    attach: function(context, settings) {
      
      var showMoreLink = $('.show-more-link');
      var showLessLink = $('.show-less-link');
      var descElementWrapper = $('.pane-node-body');
      
      showLessLink.click(function() {
    	descElementWrapper.animate({
    	  height: '400px'
    	  }, 500, 'linear', function() {
            showMoreLink.removeClass('hiddenControl');
            showLessLink.addClass('hiddenControl');
        });
      });
      
    }
  };
  
  Drupal.behaviors.ViewRowClickable = {
	attach: function(context, settings)	{
	  
	  $('.view-course-members .views-row').click(function() {
	    var href = $(this).find("a").attr("href");
	    if(href) {
	      window.location = href;
		}
	  });
	
	}  	  
  };
  


	  


}(jQuery));
;
