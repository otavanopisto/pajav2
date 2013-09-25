(function ($) {
Drupal.behaviors.pajaCoursePriceFieldValueChangeBehaviour = {
  attach : function(context, settings) {
    var profitMargin                = parseFloat(Drupal.settings.paja_course_price.profitMargin);  // 500 Tulo / opinnollistamisvaraus
    var premisesCostsPerDay         = parseFloat(Drupal.settings.paja_course_price.premisesCostsPerDay); //250.0;
    var managementCostsPerAttendee  = parseFloat(Drupal.settings.paja_course_price.managementCostsPerAttendee); // 25.0;  // Toimisto ja opinnollistaminen
  
    var voPerLocalAttendee          = parseFloat(Drupal.settings.paja_course_price.voPerLocalAttendee); //152.0;
    var voPerDistanceAttendee       = voPerLocalAttendee * 0.6;
    function round100(value) {
      return Math.round(value * 100) / 100;
    }
    
    function calculateCriticalPoint() {
      localDays = parseFloat($("#paja-course-local-days-number input[type='number']").val());
      distanceDays = parseFloat($("#paja-course-distance-days-number input[type='number']").val());
      attendees = parseFloat($("#paja-course-attendees-min-number input[type='number']").val());
      instructorFee = parseFloat($("#paja-course-instructor-fee-number input[type='number']").val());
      miscellanousCosts = parseFloat($("#paja-course-miscellanous-costs-number input[type='number']").val());
      credits = localDays / 5 + distanceDays / 5 * 0.6;
      totalCredits = round100(credits * attendees);
      coursePrice = parseFloat($("#paja-course-price-number input[type='number']").val());
        
      instructorFees = round100(instructorFee * totalCredits);
        
      premisesCosts = premisesCostsPerDay * localDays;
  
      costs = profitMargin + premisesCosts + instructorFees + miscellanousCosts;
        
      incomePerAttendee = coursePrice + credits * voPerLocalAttendee;
  
      totalIncome = round100(incomePerAttendee * attendees);
      
      costsWithoutManagementCosts = costs;
  
      criticalPoint = Math.ceil((miscellanousCosts + premisesCosts + profitMargin) / 
              (coursePrice + credits * voPerLocalAttendee - managementCostsPerAttendee - instructorFee * credits));
  
      costs += attendees * managementCostsPerAttendee;
      
      profit = totalIncome - costs;
      
      if (profit > 0) {
        $("#paja-course-result").html("<p class=\"course-ok\"></p><p class=\"course-result-ok-title\">Kurssi on kannattava</p>");
  
        instructorFeeGross = round100(instructorFees / 1.3);
        instructorFeeFirm = round100(instructorFees / 1.24);
        instructorFeeALV = round100(instructorFees - instructorFeeFirm);
        
        $("#paja-course-result").append("<p class=\"course-result-desc\">" + "Opintoviikkojen määrä on yhteensä " + totalCredits + ". " +
            "Vetäjien palkkiot yhteensä: " + instructorFees + " euroa, " + 
            "josta bruttopalkka: " + instructorFeeGross + " euroa tai " +
            "vastaavasti yrityksen kautta " + instructorFeeFirm + " ja ALV(24%) " + instructorFeeALV + " euroa." + "</p>");
      } 
      else {
        $("#paja-course-result").html("<p class=\"course-not-ok\"></p><p class=\"course-result-not-ok-title\">Tulot eivät riitä.</p>");
  
        if (incomePerAttendee > (managementCostsPerAttendee + instructorFees / attendees)) {
          $("#paja-course-result").append("<p class=\"course-result-desc\">" + "Kurssi muuttuu " +
            "kannattavaksi kun kurssilaisten määrää kasvatetaan vähintään " + criticalPoint + ":een. " +
            "Kannattavuuteen voit vaikuttaa mm. kasvattamalla kurssin laajuutta." + "</p>");
        }
        else {
          $("#paja-course-result").append("<p class=\"course-result-desc\">" + "Opiskelijakohtaiset tulot eivät kata kuluja. Kasvata joko kurssimaksua, lähi- tai etäpäivien määrää tai vastaavasti pienennä palkkioita." + "</p>");
        }
      }
      
      var incomeFromAttendees = coursePrice * attendees;
      var voIncome = voPerDistanceAttendee * attendees;
      var totalIncome = incomeFromAttendees + voIncome;
      var managementCosts = attendees * managementCostsPerAttendee;
      var managementAndProfitMargin = managementCosts + profitMargin;
      var totalCosts = instructorFees + managementCosts + profitMargin + premisesCosts;
      var budgetHTML = "<table class='paja-course-table'>" +
  		"<th>Kurssin budjetti</th>" +
  		"<tr>" +
  		"<td>Kurssimaksut</td>" +
  		"<td>" + incomeFromAttendees + " €</td>" +
			"</tr>" +
			"<tr>" +
			"<td>Valtion osuudet</td>" +
			"<td>" + voIncome + " €</td>" +
			"</tr>" +
			"<tr class='budget-total-income'>" +
			"<td class='budget-total-income-title'>Tulot yhteensä</td>" +
			"<td class='budget-total-income-value'>" + totalIncome + " €</td>" +
			"</tr>" +
      "<tr>" +
      "<td>Vetäjien palkkiot</td>" +
      "<td>" + instructorFees + " €</td>" +
  		"</tr>" +
      "<tr>" +
      "<td>Hallinto</td>" +
      "<td>" + managementAndProfitMargin + " €</td>" +
  		"</tr>" +
      "<tr>" +
      "<td>Kiinteistöt ja laitteet</td>" +
      "<td>" + premisesCosts + " €</td>" +
  		"</tr>" +
      "<tr>" +
      "<td>Muut kustannukset</td>" +
      "<td>" + miscellanousCosts + " €</td>" +
  		"</tr>" +
      "<tr class='budget-total-costs'>" +
      "<td class='budget-total-costs-title'>Kustannukset yhteensä</td>" +
      "<td class='budget-total-costs-value'>" + totalCosts + " €</td>" +
  		"</tr>" +
      "<tr class='budget-profit'>" +
      "<td class='budget-profit-title'>Tulos</td>" +
      "<td class='budget-profit-value'>" + profit + " €</td>" +
  		"</tr>" +
      "</table>";

      $("#paja-course-table").html(budgetHTML);
    }
    
    
    $('#paja-course-result').once(function () {
      calculateCriticalPoint();
    });

    $("#paja-course-profit-margin input[type='range']").change(function(event){
      $("#paja-course-profit-margin-number input[type='number']").val($("#paja-course-profit-margin input[type='range']").val());
      profitMargin = parseFloat($("#paja-course-profit-margin input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-profit-margin-number input[type='number']").change(function(event){
      $("#paja-course-profit-margin input[type='range']").val($("#paja-course-profit-margin-number input[type='number']").val());
      profitMargin = parseFloat($("#paja-course-profit-margin input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-premises-costs-per-day input[type='range']").change(function(event){
      $("#paja-course-premises-costs-per-day-number input[type='number']").val($("#paja-course-premises-costs-per-day input[type='range']").val());
      premisesCostsPerDay = parseFloat($("#paja-course-premises-costs-per-day input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-premises-costs-per-day-number input[type='number']").change(function(event){
      $("#paja-course-premises-costs-per-day input[type='range']").val($("#paja-course-premises-costs-per-day-number input[type='number']").val());
      premisesCostsPerDay = parseFloat($("#paja-course-premises-costs-per-day input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-management-costs-per-attendee input[type='range']").change(function(event){
      $("#paja-course-management-costs-per-attendee-number input[type='number']").val($("#paja-course-management-costs-per-attendee input[type='range']").val());
      managementCostsPerAttendee = parseFloat($("#paja-course-management-costs-per-attendee input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-management-costs-per-attendee-number input[type='number']").change(function(event){
      $("#paja-course-management-costs-per-attendee input[type='range']").val($("#paja-course-management-costs-per-attendee-number input[type='number']").val());
      managementCostsPerAttendee = parseFloat($("#paja-course-management-costs-per-attendee input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-instructor-fee input[type='range']").change(function(event){
      $("#paja-course-instructor-fee-number input[type='number']").val($("#paja-course-instructor-fee input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-instructor-fee-number input[type='number']").change(function(event){
      $("#paja-course-instructor-fee input[type='range']").val($("#paja-course-instructor-fee-number input[type='number']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-distance-days input[type='range']").change(function(event){
      $("#paja-course-distance-days-number input[type='number']").val($("#paja-course-distance-days input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-distance-days-number input[type='number']").change(function(event){
      $("#paja-course-distance-days input[type='range']").val($("#paja-course-distance-days-number input[type='number']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-local-days input[type='range']").change(function(event){
      $("#paja-course-local-days-number input[type='number']").val($("#paja-course-local-days input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-local-days-number input[type='number']").change(function(event){
      $("#paja-course-local-days input[type='range']").val($("#paja-course-local-days-number input[type='number']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-attendees-min input[type='range']").change(function(event){
      $("#paja-course-attendees-min-number input[type='number']").val($("#paja-course-attendees-min input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-attendees-min-number input[type='number']").change(function(event){
      $("#paja-course-attendees-min input[type='range']").val($("#paja-course-attendees-min-number input[type='number']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-attendees-max input[type='range']").change(function(event){
      $("#paja-course-attendees-max-number input[type='number']").val($("#paja-course-attendees-max input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-attendees-max-number input[type='number']").change(function(event){
      $("#paja-course-attendees-max input[type='range']").val($("#paja-course-attendees-max-number input[type='number']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-miscellanous-costs input[type='range']").change(function(event){
      $("#paja-course-miscellanous-costs-number input[type='number']").val($("#paja-course-miscellanous-costs input[type='range']").val());
      calculateCriticalPoint();    
    });
    $("#paja-course-miscellanous-costs-number input[type='number']").change(function(event){
      $("#paja-course-miscellanous-costs input[type='range']").val($("#paja-course-miscellanous-costs-number input[type='number']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-price input[type='range']").change(function(event){
      $("#paja-course-price-number input[type='number']").val($("#paja-course-price input[type='range']").val());
      calculateCriticalPoint();
    });
    $("#paja-course-price-number input[type='number']").change(function(event){
      $("#paja-course-price input[type='range']").val($("#paja-course-price-number input[type='number']").val());
      calculateCriticalPoint();
    });
  }
};
})(jQuery);







