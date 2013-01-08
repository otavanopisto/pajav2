(function ($) {
  var ajaxLoading = false;
  Drupal.behaviors.ajaxLinksApi = {
    attach: function (context, settings) {
	  var trigger = Drupal.settings.ajax_links_api.trigger;
	  $(trigger).click(function(e) {
		e.preventDefault();
		if(!ajaxLoading) {
		  ajaxLoading = true;
		  var url = $(this).attr("href");
		  var id = $(this).attr("rel");
		  if(id) {
			selector = $(this).attr("rel");
		  } else {
			selector = Drupal.settings.ajax_links_api.selector;
		  }
		  $(selector).html("<div class='loading'></div>");
		  ajaxLink(selector, url);
		}
	  });
    }
  };
  function  ajaxLink(selector, url) {
    $.ajax({
      url: url,
      type: "GET",
      data: "ajax=1",
      success: function (data, textStatus, xhr) {
        $(selector).html(data);
		Drupal.attachBehaviors(selector);
		
		var html5 = Drupal.settings.ajax_links_api.html5;
		if(html5 == 1) {
		  var title = data.match("<title>(.*?)</title>")[1]; // get title of loaded content	
		  window.history.pushState( {} , document.title, window.location.href ); // change title and url	
		  window.history.replaceState( {} , title, url ); // Change url.
		  document.title = title; // Since title is not changing with window.history.replaceState(), manually change title. Possible bug.
		}		
      },
      error: function (xhr, textStatus, errorThrown) {
        $(selector).html("Access denied or page not found");
      }
    });
  }
})(jQuery);
