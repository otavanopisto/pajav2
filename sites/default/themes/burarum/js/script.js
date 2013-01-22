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
      
      var descElementWrapper = $('.pane-node-body');
      var descELementHeight = $('.field-name-body').outerHeight();
      
      descElementWrapper.click(function() {
    	descElementWrapper.animate({
    	  height: descELementHeight + 15 + 'px'
    	  }, 500, 'linear',  function() {

        });
      });
      
    }
  };

}(jQuery));
;
