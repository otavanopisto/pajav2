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
</ul>
