var pageLoad = false;
(function($) {
	Drupal.behaviors.MessagesFadeout = {
		attach : function(context, settings) {
      var messageBox = $('div#messages');
  		  if (messageBox.length > 0) {
  		    messageBox.click(function(event){
             event.stopPropagation();
             event.preventDefault();
          });
        $('body').click(function(event){
          messageBox.fadeOut('slow', function() {
            messageBox.remove();
          });
        });
  		  }
      }
	};	

	Drupal.behaviors.FixedNavigation = {
		attach : function(context, settings) {

			var headerHeight = $('#section-header').outerHeight();
			var aboveHeight = headerHeight - 52;

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
	

	Drupal.behaviors.loginBoxBehavior = {
	// LoginBox effect and stuff
		
	  attach : function(context, settings) {
		
		$("#headerLoginLink").click(function () {
		  $("#headerLoginLink").addClass('headerLoginLinkClicked');
		  
		  // Get position
		  var containerWidth = 880;
		  var extraOffset = 5;
		  
		  var linkLeftPos = $("#headerLoginLink").position().left + $("#headerLoginLink").outerWidth() + extraOffset;
		  var linktopPos = $("#headerLoginLink").position().top + $("#headerLoginLink").outerHeight();
		  var rightPosVar = containerWidth - linkLeftPos;
		  $(".block-user-login").css({ right: rightPosVar + 'px', top: linktopPos });
		  $(".block-user-login").show("fast", function() {
			  $(document).bind('click', function(){
			   	$(".block-user-login").hide("fast", function(){
			   	  $("#headerLoginLink").removeClass('headerLoginLinkClicked');
	              $(document).unbind('click');  
			   	});
			  });
			  $(".block-user-login").bind('click', function(e){
	            //return false;
				  e.stopPropagation();
			  });
			  $("a.init-modal-forms-password-processed").bind('click', function(e){
		        $(".block-user-login").hide("fast", function(){
				  $("#headerLoginLink").removeClass('headerLoginLinkClicked');
		          $(document).unbind('click');  
				});    
			  });
		  });
		});
		
	  }

	};
  
}(jQuery));
