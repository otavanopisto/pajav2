var kate                       = 500.0;  // Tulo / opinnollistamisvaraus
var tilaPaivalta               = 250.0;
var hallinnointiPerOsallistuja = 25.0;  // Toimisto ja opinnollistaminen

var voPerOsallistujaLahi    = 152.0;
var voPerOsallistujaEta     = voPerOsallistujaLahi * 0.6;

function setParticipantCount(count) {
  document.getElementById("osallistujaMaara").value = count;
  document.getElementById("osallistujaMaaraValue").value = count;

  calculateCriticalPoint();
}

function round100(value) {
  return Math.round(value * 100) / 100;
}

function roundUp(value) {
  
  rounded = Math.round(value);

  if (value - rounded < 0.5)
    return rounded + 1;
  return rounded;
}

function calculateCriticalPoint() {
  lahiPaivat = parseFloat(document.getElementById("lahiPaivat").value);
  etaPaivat = parseFloat(document.getElementById("etaPaivat").value);
  osallistujat = parseFloat(document.getElementById("osallistujaMaara").value);
  vetajaPalkkio = parseFloat(document.getElementById("vetajaPalkkio").value);
  muutKustannukset = parseFloat(document.getElementById("muutKustannukset").value);
  opintoViikot = lahiPaivat / 5 + etaPaivat / 5 * 0.6;
  opintoViikotYht = round100(opintoViikot * osallistujat);
  kurssiMaksu = parseFloat(document.getElementById("kurssiMaksu").value);
    
  vetajaPalkkiot = round100(vetajaPalkkio * opintoViikotYht);
    
  tilaKustannukset = tilaPaivalta * lahiPaivat;
    
  kustannukset = kate + tilaKustannukset + vetajaPalkkiot + muutKustannukset;
    
  tulotPerOsallistuja = kurssiMaksu + opintoViikot * voPerOsallistujaLahi;

  tulotYht = round100(tulotPerOsallistuja * osallistujat);
  
  kustIlmHal = kustannukset;

  kriittinenPiste = roundUp((muutKustannukset + tilaKustannukset + kate) / 
          (kurssiMaksu + opintoViikot * voPerOsallistujaLahi - hallinnointiPerOsallistuja - vetajaPalkkio * opintoViikot));

  kustannukset += osallistujat * hallinnointiPerOsallistuja;
  
  kannattavuus = tulotYht - kustannukset;
  
  if (kannattavuus > 0) {
    document.getElementById("guideImage").src = "images/right.jpg";
    
    document.getElementById("infoheader").innerHTML = "Kurssi on kannattava";

    vetajaPalkkioBrutto = round100(vetajaPalkkiot / 1.3);
    vetajaPalkkioFirma = round100(vetajaPalkkiot / 1.24);
    vetajaPalkkioALV = round100(vetajaPalkkiot - vetajaPalkkioFirma);
    
    document.getElementById("kriittinenPiste").innerHTML = 
        "Opintoviikkojen määrä on yhteensä " + opintoViikotYht + ". " +
        "Vetäjien palkkiot yhteensä: " + vetajaPalkkiot + " euroa, " + 
        "josta bruttopalkka: " + vetajaPalkkioBrutto + " euroa tai " +
        "vastaavasti yrityksen kautta " + vetajaPalkkioFirma + " ja ALV(24%) " + vetajaPalkkioALV + " euroa.";
  } 
  else {
    document.getElementById("guideImage").src = "images/wrong.jpg";

    document.getElementById("infoheader").innerHTML = "Tulot eivät riitä";

    if (tulotPerOsallistuja > (hallinnointiPerOsallistuja + vetajaPalkkiot / osallistujat)) {
      document.getElementById("kriittinenPiste").innerHTML =
        
        "Kurssi muuttuu " +
        "kannattavaksi kun <a href=\"javascript:setParticipantCount(" + kriittinenPiste + ");\">kurssilaisten määrää kasvatetaan vähintään " + kriittinenPiste + ":een</a>. " +
        "Kannattavuuteen voit vaikuttaa mm. kasvattamalla kurssin laajuutta.";
    }
    else {
      document.getElementById("kriittinenPiste").innerHTML = "Opiskelijakohtaiset tulot eivät kata kuluja. Kasvata joko kurssimaksua, lähi- tai etäpäivien määrää tai vastaavasti pienennä palkkioita.";
    }
  }
  
  //  kurssiMaksuTulot = kurssimaksu * osallistujat;
  //  valtionOsuusTulot = voPerOsallistujaEta * osallistujat;
  //  tulotYhteensa = kurssiMaksuTulot + valtionOsuusTulot;
  
  //  hallinnointiKustannukset = osallistujat * hallinnointiPerOsallistuja;
  
//  budgetHTML = 
//    "<table>" +
//      "<tr><th span=\"2\">Budjetti</th></tr>" +
  //    "<tr><td>Kurssimaksut</td><td class=\"number"">" + kurssiMaksuTulot + " €</td></tr>" +
//      "<tr><td>Valtionosuus</td><td class=\"number"">" + valtionOsuusTulot + " €</td></tr>" +
//      "<tr><td>Tulot yhteensä</td><td class=\"numberTotal"">" + tulotYhteensa + " €</td></tr>" +
//      "<tr><td>Vetäjäpalkkiot</td><td class=\"number"">" + vetajaPalkkiot + " €</td></tr>" +
//      "<tr><td>Hallintokustannukset</td><td class=\"number"">" + hallinnointiKustannukset + kate + " €</td></tr>" +
//      "<tr><td>Kiinteistö- ja laitekustannukset</td><td class=\"number"">" + tilaKustannukset + " €</td></tr>" +
//      "<tr><td>Muut kustannukset</td><td class=\"number"">" + muutKustannukset + " €</td></tr>" +
//      "<tr><td>Kustannukset yhteensä</td><td class=\"numberTotal"">" + vetajaPalkkiot + hallinnointiKustannukset + kate + tilaKustannukset + " €</td></tr>" +
//      "<tr><td>Tulos</td><td class=\"numberTotal"">" + kannattavuus + " €</td></tr>" +
//    "</table>"
//    
//  document.getElementById("budjetti").innerHTML = budgetHTML;
  }

function kurssiChange(newValue) {
  document.getElementById("kurssiMaksu").value = newValue;
  document.getElementById("kurssiMaksuValue").value = newValue;

  calculateCriticalPoint();
}


function osallistujaChange(newValue) {
  document.getElementById("osallistujaMaara").value = newValue;
  document.getElementById("osallistujaMaaraValue").value = newValue;

  calculateCriticalPoint();
}

function vetajaChange(newValue) {
  document.getElementById("vetajaPalkkio").value = newValue;
  document.getElementById("vetajaPalkkioValue").value = newValue;

  calculateCriticalPoint();
}


function asiantuntijaChange(newValue) {
  document.getElementById("muutKustannukset").value = newValue;
  document.getElementById("muutKustannuksetValue").value = newValue;

  calculateCriticalPoint();
}

function lahiChange(newValue) {
  document.getElementById("lahiPaivat").value = newValue;
  document.getElementById("lahiPaivatValue").value = newValue;

  calculateCriticalPoint();
}

function etaChange(newValue) {
  document.getElementById("etaPaivat").value = newValue;
  document.getElementById("etaPaivatValue").value = newValue;

  calculateCriticalPoint();
}
  
  