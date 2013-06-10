<?php
/**
 * @file
 * event_attending.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function event_attending_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'tapahtuman_osallistuja_printti';
  $delta->name = 'Tapahtuman osallistuja printti';
  $delta->description = 'Tapahtuman osallistuja printti';
  $delta->theme = 'burarum';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_burarum_settings' => array(
      'toggle_logo' => 0,
      'toggle_comment_user_verification' => 0,
      'toggle_favicon' => 0,
      'toggle_main_menu' => 0,
      'logo_upload' => '',
      'alpha_toggle_messages' => 0,
      'alpha_toggle_tabs' => 0,
      'alpha_toggle_page_title' => 0,
      'alpha_toggle_feed_icons' => 0,
      'alpha_zone_header_wrapper' => 0,
      'alpha_zone_header_force' => 0,
      'alpha_zone_header_primary' => NULL,
      'alpha_region_header_second_force' => 0,
      'alpha_zone_branding_wrapper' => 0,
      'alpha_zone_branding_force' => 0,
      'alpha_region_branding_force' => 0,
      'alpha_zone_menu_wrapper' => 0,
      'alpha_zone_menu_force' => 0,
      'alpha_region_menu_force' => 0,
      'alpha_zone_footer_wrapper' => 0,
      'alpha_zone_footer_force' => 0,
      'alpha_region_footer_first_force' => 0,
      'alpha_region_footer_second_force' => 0,
    ),
  );
  $export['tapahtuman_osallistuja_printti'] = $delta;

  return $export;
}
