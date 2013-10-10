<article<?php print $attributes; ?>>
  <header>
    <?php print render($title_prefix); ?>
    <!-- 
    <?php if ($title): ?>
      <h3<?php print $title_attributes; ?>><?php print $title ?></h3>
    <?php endif; ?>
    -->
    <?php print render($title_suffix); ?>
    <!-- 
    <?php if ($new): ?>
      <em class="new"><?php print $new ?></em>
    <?php endif; ?>
    -->
    <?php if (isset($unpublished)): ?>
      <em class="unpublished"><?php print $unpublished; ?></em>
    <?php endif; ?>
  </header>

  <?php print $picture; ?>

  <footer class="comment-submitted">
    <?php 
      $author = user_load($comment->uid); 
      $first_name = array_pop(field_get_items('user', $author, 'field_account_etunimi')); 
      $last_name = array_pop(field_get_items('user', $author, 'field_account_sukunimi')); 
      $full_name = $first_name["safe_value"] . " " . $last_name['safe_value'];
      $author_link = "user/$author->uid";
      if($alias = path_load($author_link)){
        $author_link = $alias["alias"];
      }
      $author = '<a href="'. $author_link. '">' . $full_name . '</a>';
    ?>
  
   <?php 
      $created = date('l, F j, Y - H:i', strtotime($datetime));
      print t('Submitted by !username on !datetime',
      array('!username' => $author, '!datetime' => '<time datetime="' . $datetime . '">' . $created . '</time>'));
    ?>
  </footer>

  <div<?php print $content_attributes; ?>>
    <?php
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php if ($signature): ?>
    <div class="user-signature"><?php print $signature ?></div>
  <?php endif; ?>

  <?php if (!empty($content['links'])): ?>
    <nav class="links comment-links clearfix"><?php print render($content['links']); ?></nav>
  <?php endif; ?>

</article>
