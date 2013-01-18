(function($) {

	Drupal.behaviors.FixedNavigation = {
		attach : function(context, settings) {
			
			var headerHeight = $('#section-header').outerHeight();
			var aboveHeight = headerHeight - 42;

			$(window).scroll(
					function() {
						if ($(window).scrollTop() > aboveHeight) {
							$('.navigation').addClass('fixedPosition').css('top', '0');
						} else {
							$('.navigation').removeClass('fixedPosition');
					}
			});
		}
	};

}(jQuery));
;
