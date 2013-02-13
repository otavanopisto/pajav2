(function($) {

	Drupal.behaviors.FixedNavigation = {
		attach : function(context, settings) {

			var headerHeight = $('#section-header').outerHeight();
			var aboveHeight = headerHeight - 42;

			$(window).scroll(function() {
				if ($(window).scrollTop() > aboveHeight) {
					$('.navigation').addClass('fixedPosition');
				} else {
					$('.navigation').removeClass('fixedPosition');
				}
			});
		}
	};
  
	// Thy magister prevents those mighty tooltips from overlapping browsers viewport's top and bottom edges 
	Drupal.behaviors.PreventTooltipOverlapping = {
		attach : function(context, settings) {
			
			$('.view-user-courses .views-row').hover(
				function() {
					var ttPos = $('.generic-tooltip-wrapper', this).offset();
					var ttPosTop = ttPos.top - 38;

					var ttPosViewport = ttPos.top - $(window).scrollTop();

					var ttBottomPos = ttPosViewport + $('.generic-tooltip-wrapper', this).outerHeight();

					if ($(window).scrollTop() > ttPosTop) {
						$('.generic-tooltip-wrapper', this).addClass('preventOverLappingTop');
					} else {
						$('.generic-tooltip-wrapper', this).removeClass('preventOverLappingTop');
					}

					if ($(window).height() < ttBottomPos) {
						$('.generic-tooltip-wrapper', this).addClass('preventOverLappingBottom');
					} else {
						$('.generic-tooltip-wrapper', this).removeClass('preventOverLappingbottom');
					}

				}, function(){
					$('.generic-tooltip-wrapper', this).removeClass('preventOverLappingBottom');
					$('.generic-tooltip-wrapper', this).removeClass('preventOverLappingTop');
				});
		}
	};

	Drupal.behaviors.ShowFullDescription = {
		attach : function(context, settings) {

			var descControlWrapper = $('.desc-control-wrapper');
			var showMoreLink = $('.show-more-link');
			var showLessLink = $('.show-less-link');
			var descElementWrapper = $('#mini-panel-kurssi_minipanel .pane-node-body');
			var descELementHeight = $('#mini-panel-kurssi_minipanel .field-name-body').outerHeight();
			
			if (descELementHeight > '500') {
				
	            var fader = document.createElement("div"); 

	            descElementWrapper.append(fader);
	            $(fader).addClass("description-fader");

				descElementWrapper.css('height','400');
				showMoreLink.click(function() {
					descElementWrapper.animate({
						height : descELementHeight + 'px'
					}, 500, 'linear', function() {
						showMoreLink.addClass('hiddenControl');
						showLessLink.removeClass('hiddenControl');
						$(fader).addClass("hidden-fader");
					});
				});
			} else {
				descControlWrapper.css({
					display : 'none'
				});
			}
		}
	};
  

	Drupal.behaviors.ShowLessDescription = {
		attach : function(context, settings) {

			var showMoreLink = $('.show-more-link');
			var showLessLink = $('.show-less-link');
			var descElementWrapper = $('.pane-node-body');

			showLessLink.click(function() {
				descElementWrapper.animate({
					height : '400px'
				}, 500, 'linear', function() {
					showMoreLink.removeClass('hiddenControl');
					showLessLink.addClass('hiddenControl');
					$('#mini-panel-kurssi_minipanel .description-fader').removeClass("hidden-fader");
				});
			});

		}
	};

	Drupal.behaviors.ViewRowClickable = {
		attach : function(context, settings) {

			$('.view-course-members .views-row').click(function() {
				var href = $(this).find("a").attr("href");
				if (href) {
					window.location = href;
				}
			});

			$('.pane-user-courses .views-row').click(function() {
				var href = $(this).find("a").attr("href");
				if (href) {
					window.location = href;
				}
			});

		}
	};
  
}(jQuery));
;
