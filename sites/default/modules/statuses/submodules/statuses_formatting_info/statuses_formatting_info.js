(function($) {
  Drupal.behaviors.statusesFormattingAjaxBtClick = {  
      attach : function(context, settings) {
        if ($('#statuses-formatting-info-bt').length > 0) {
          $('#statuses-formatting-info-bt').click(function(event){
            if ($('#statuses-formatting-help-block')) {
              $('#statuses-formatting-help-block').remove();
            }
            event.preventDefault();
            event.stopPropagation();
          });
        }
      }
    };

    Drupal.behaviors.statusesFormattingPopupClose = {  
      attach : function(context, settings) {
        if ($('#statuses-formatting-help-block').length > 0) {
          $('#statuses-formatting-help-block').click(function(event){
             event.stopPropagation();
          });
          $('.html').click(function(event){
            $('#statuses-formatting-help-block').empty();
            $('#statuses-formatting-help-block').remove();
          });
        }
      }
    };
  


})(jQuery);