var timer = null;
var isIntervalSet = false;
(function($) {
  Drupal.behaviors.statusesRefresher = {
      attach : function(context, settings) {
        if ($('.pane-statuses-statuses').length > 0) {
          $('body').mousemove(function() {
            if (isIntervalSet) {
              return;
            }
            timer = window.setInterval(function() {
              if(!$("textarea:focus").length > 0 && !$("#delete-status-form-block").length > 0 && !$("#edit-status-form-block").length > 0){
                var loaded = {};
                if (fbss_refreshIDs && fbss_refreshIDs != undefined) {
                  var loaded2 = {};
                  $.each(fbss_refreshIDs, function(i, val) {
                    if (val && val != undefined) {
                      if ($.trim(val) && loaded2[val] !== true) {
                        loaded2[val] = true;
//                        var element = $(val);
//                        element.before('<div class="fbss-remove-me ahah-progress ahah-progress-throbber" style="display: none; clear: both; float: none;"><div class="throbber">&nbsp;</div></div>');
                      }
                    }
                  });
                  var location = window.location.pathname +'?';
                  // Build the relative URL with query parameters.
                  var query = window.location.search.substring(1);
                  if ($.trim(query) != "") {
                    location += query +'&';
                  }
                  // IE will cache the result unless we add an identifier (in this case, the time).
                  $.get(location +"ts="+ (new Date()).getTime(), function(data, textStatus) {
                    // From load() in jQuery source. We already have the scripts we need.
                    var new_data = data.replace(/<script(.|\s)*?\/script>/g, "");
                    // Apparently Safari crashes with just $().
                    var new_content = $('<div></div>').html(new_data);
                    if (textStatus != 'error' && new_content) {
                      // Replace relevant content in the viewport with the updated version.
                      $.each(fbss_refreshIDs, function(i, val) {
                        if (val && val != undefined) {
                          if ($.trim(val) != '' && loaded[val] !== true) {
                            var element = $(val);
                            var insert = new_content.find(val);
                            // If a refreshID is found multiple times on the same page, replace each one sequentially.
                            if (insert.length && insert.length > 0 && element.length && element.length >= insert.length) {
                              $.each(insert, function(j, v) {
                                v = $(v);
                                var el = $(element[j]);
                                // Don't bother replacing anything if the replacement region hasn't changed.
                                if (v.get() != el.get()) {
                                  Drupal.detachBehaviors(element[j]);
                                  el.replaceWith(v);
                                  Drupal.attachBehaviors(v);
                                }
                              });
                            }
                            loaded[val] = true;
                          }
                        }
                      });
                    }
                    $('.fbss-remove-me').remove();
                  });
                }
                else {
                  $('.fbss-remove-me').remove();
                }
              }
            }, 10000);
            isIntervalSet = true;
          }).mousestop(function() {
              isIntervalSet = false;
              window.clearTimeout(timer);
              timer = null;
          });
        }
      }
    };
  
  Drupal.behaviors.cancelDeleteLink = {
      attach: function(context, settings) {
        if ($('#delete-status-form-block').length > 0) {
          $('#delete-status-form-block a.cancel-status-delete').click(function(event) {
            $('#delete-status-form-block').fadeOut(300, function () {
              $(this).remove();
            });
            event.preventDefault();
            event.stopPropagation();
        });
        }
      } 
    };
  
  Drupal.behaviors.handleAjaxStatusesPopupClose = {  
      attach : function(context, settings) {
        if ($('#delete-status-form-block').length > 0) {
          $('#delete-status-form-block').click(function(event){
             event.stopPropagation();
          });
          $('.html').click(function(event){
            $('#delete-status-form-block').fadeOut(300, function(){
              $(this).remove();
            });
          });
        }
      }
    };
  
  Drupal.behaviors.cancelEditLink = {
      attach: function(context, settings) {
        if ($('#edit-status-form-block').length > 0) {
          $('#edit-status-form-block a.cancel-status-edit').click(function(event) {
            $('#edit-status-form-block').fadeOut(300, function () {
              if($('.statuses-content').length > 0){
                $('.statuses-content').fadeIn(300);
                $(this).remove(); 
              }
              if($('.fbss-comments-text').length > 0){
                $('.fbss-comments-text').fadeIn(300);
                $(this).remove();
              }
            });
            event.preventDefault();
            event.stopPropagation();
        });
        }
      } 
    };
  
  Drupal.behaviors.clickEditLink = {
      attach: function(context, settings) {
        if ($('#edit-status-form-block #edit-statusmessage').length > 0) {
          $('#edit-status-form-block #edit-statusmessage').focus();
        }
      } 
    };
  
  $.fn.deleteStatusComment = function(cid){
    $('#status-comment-'+ cid +'-wrapper').fadeOut(300, function(event){
      $(this).remove();
    });
  };
  
  $.fn.editStatus = function(sid) {
    $('#edit-status-form-block').fadeOut(300, function(event){
      $('div#statuses-item-'+sid+' span.statuses-content').fadeIn(300, function(event){
        $('#edit-status-form-block').remove();
      });
    });
  };
  
  $.fn.editStatusComment = function(cid) {
    $("div#edit-status-form-block").fadeOut(300, function(event){
      $('#status-comment-'+ cid +'-wrapper .fbss-comments-text').fadeIn(300, function(event){
        $("div#edit-status-form-block").remove();
      });
    });
  };
  
})(jQuery);
