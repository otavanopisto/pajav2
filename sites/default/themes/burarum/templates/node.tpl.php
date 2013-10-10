<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
  
  <?php 
    $author = user_load($node->uid); 
    $first_name = array_pop(field_get_items('user', $author, 'field_account_etunimi')); 
    $last_name = array_pop(field_get_items('user', $author, 'field_account_sukunimi')); 
    $full_name = $first_name["safe_value"] . " " . $last_name['safe_value'];
    $author_link = "user/$author->uid";
    if($alias = path_load($author_link)){
      $author_link = $alias["alias"];
    }
    $author = '<a href="'. $author_link. '">' . $full_name . '</a>';
  ?>
  
  <footer class="submitted"><?php print date( "l, F j, Y - H:i",$node->created); ?> <?php print $author; ?></footer>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>