<?php
/**
 * @file
 * login_and_signup.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function login_and_signup_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-custom_login_form' => array(
      'machine_name' => 'custom_login_form',
      'module' => 'block',
    ),
    'block-custom_register_form' => array(
      'machine_name' => 'custom_register_form',
      'module' => 'block',
    ),
    'block-login_and_register_links' => array(
      'machine_name' => 'login_and_register_links',
      'module' => 'block',
    ),
    'block-username_and_logout_links' => array(
      'machine_name' => 'username_and_logout_links',
      'module' => 'block',
    ),
  );

  // burarum
  $theme = array();

  $theme['block-login_and_register_links'] = array(
    'module' => 'block',
    'theme' => 'burarum',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'login_and_register_links',
  );

  $theme['block-username_and_logout_links'] = array(
    'module' => 'block',
    'theme' => 'burarum',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'username_and_logout_links',
  );

  $theme['block-custom_login_form'] = array(
    'module' => 'block',
    'theme' => 'burarum',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Kirjaudu sisään',
    'cache' => -1,
    'machine_name' => 'custom_login_form',
  );

  $theme['block-custom_register_form'] = array(
    'module' => 'block',
    'theme' => 'burarum',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Luo tunnukset',
    'cache' => -1,
    'machine_name' => 'custom_register_form',
  );

  $export['theme']['burarum'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
