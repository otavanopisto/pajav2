<?php
/**
 * @file
 * login_and_signup.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function login_and_signup_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Custom login form';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'custom_login_form';
  $fe_block_boxes->body = '<?php  print drupal_render(drupal_get_form(\'user_login\'));  ?>';

  $export['custom_login_form'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Custom register form';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'custom_register_form';
  $fe_block_boxes->body = '<?php  print drupal_render(drupal_get_form(\'user_register_form\'));  ?> ';

  $export['custom_register_form'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Login and register links';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'login_and_register_links';
  $fe_block_boxes->body = '<div id="block-login-signup" class="block block-login-signup block-without-title">
  <span class="login-link"><?php echo l(t(\'Login\'), "login"); ?></span>
  <span class="signup-link"><?php echo l(t(\'Create new account\'), "signup"); ?></span>
</div>';

  $export['login_and_register_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Username and logout links';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'username_and_logout_links';
  $fe_block_boxes->body = '<?php
global $user;
$userpath = \'user/\' . $user->uid;
?>

<div id="block-userinfo-logout" class="block block-userinfo-logout block-without-title">
  <span class="userinfo-link"><?php print  l($user->name, $userpath); ?></span>
  <span class="logout-link"><?php echo l(t(\'Logout\'), "user/logout"); ?></span>
</div>';

  $export['username_and_logout_links'] = $fe_block_boxes;

  return $export;
}
