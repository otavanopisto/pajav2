(function ($) {
  var profitMargin                = 500.0;  // Tulo / opinnollistamisvaraus
  var premisesCostsPerDay         = 250.0;
  var managementCostsPerAttendee  = 25.0;  // Toimisto ja opinnollistaminen

  var voPerLocalAttendee          = 152.0;
//  var voPerDistanceAttendee       = voPerLocalAttendee * 0.6;
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
      $("#paja-course-result").html("Kurssi on kannattava");

      instructorFeeGross = round100(instructorFees / 1.3);
      instructorFeeFirm = round100(instructorFees / 1.24);
      instructorFeeALV = round100(instructorFees - vetajaPalkkioFirma);
      
      document.getElementById("criticalPoint").innerHTML = 
          "Opintoviikkojen määrä on yhteensä " + totalCredits + ". " +
          "Vetäjien palkkiot yhteensä: " + instructorFees + " euroa, " + 
          "josta bruttopalkka: " + instructorFeeGross + " euroa tai " +
          "vastaavasti yrityksen kautta " + instructorFeeFirm + " ja ALV(24%) " + instructorFeeALV + " euroa.";
    } 
    else {
      $("#paja-course-result").html("Tulot eivät riitä.</br>");

      if (incomePerAttendee > (managementCostsPerAttendee + instructorFees / attendees)) {
        $("#paja-course-result").append("Kurssi muuttuu " +
          "kannattavaksi kun kurssilaisten määrää kasvatetaan vähintään " + criticalPoint + ":een. " +
          "Kannattavuuteen voit vaikuttaa mm. kasvattamalla kurssin laajuutta.");
      }
      else {
        $("#paja-course-result").append("Opiskelijakohtaiset tulot eivät kata kuluja. Kasvata joko kurssimaksua, lähi- tai etäpäivien määrää tai vastaavasti pienennä palkkioita.");
      }
    }
  }
  
  Drupal.behaviors.changePajaCoursePriceFieldValueChangeBehaviour = {
  attach : function(context, settings) {
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







