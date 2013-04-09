<?php

/**
 * @file jcarousel-view.tpl.php
 * View template to display a list as a carousel.
 */
?>
<ul class="<?php print $jcarousel_classes; ?>">
  <?php foreach ($rows as $id => $row): ?>
    <li class="<?php print $row_classes[$id]; ?>"><div class="jcarousel-item-padding"><?php print $row; ?></div></li>
  <?php endforeach; ?>
  <li class="jcarousel-item jcarousel-item-horizontal jcarousel-item-<?php print $id+1; ?> jcarousel-item-<?php print $id+1; ?>-horizontal" style="float: left; list-style: none outside none;" jcarouselindex="<?php print $id+1; ?>">
    <div class="jcarousel-item-padding">  
      <div class="views-field views-field-field-kurssin-kuva">
        <div class="field-content">
          <a href="/node/add/kurssi"><img width="400" height="258" title="Lisää kurssi" alt="Lisää kurssi" src="http://paja2.dev/sites/default/themes/burarum/gfx/plus.png" typeof="foaf:Image"></a>
        </div>
      </div>
      <div class="views-field views-field-title">
        <span class="field-content"><a href="/node/add/kurssi">Lisää kurssi</a></span>
      </div>
      <div class="views-field views-field-field-summary">
        <span class="field-content">Perusta sinua kiinnostavasta aiheesta oma kurssisi yhdessä muiden kiinnostuneiden kanssa. Samasta aiheesta kiinnostuneet ideoivat ja suunnittelevat kurssin yhdessä.</span>
      </div>
      <div class="views-field views-field-nothing-2"><span class="field-content"></span></div>
    </div>
  </li>
</ul>