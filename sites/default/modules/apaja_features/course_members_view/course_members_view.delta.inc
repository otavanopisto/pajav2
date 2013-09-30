<?php
/**
 * @file
 * course_members_view.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function course_members_view_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'kurssin_osallistuja_printti';
  $delta->name = 'Kurssin osallistuja printti';
  $delta->description = 'Kurssin osallistuja printti';
  $delta->theme = 'burarum';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_burarum_settings' => array(
      'toggle_logo' => 0,
      'toggle_name' => 0,
      'toggle_slogan' => 0,
      'toggle_comment_user_verification' => 0,
      'toggle_favicon' => 0,
      'toggle_main_menu' => 0,
      'alpha_css' => array(
        'alpha-reset.css' => 'alpha-reset.css',
        'alpha-mobile.css' => 'alpha-mobile.css',
        'alpha-alpha.css' => 'alpha-alpha.css',
        'omega-text.css' => 'omega-text.css',
        'omega-branding.css' => 'omega-branding.css',
        'omega-menu.css' => 'omega-menu.css',
        'omega-forms.css' => 'omega-forms.css',
        'omega-visuals.css' => 'omega-visuals.css',
        'global.css' => 'global.css',
        'print.css' => 0,
      ),
      'alpha_toggle_messages' => 0,
      'alpha_toggle_tabs' => 0,
      'alpha_toggle_page_title' => 0,
      'alpha_zone_header_wrapper' => 0,
      'alpha_zone_header_force' => 0,
      'alpha_region_header_second_force' => 0,
      'alpha_zone_branding_wrapper' => 0,
      'alpha_region_branding_force' => 0,
      'alpha_zone_menu_wrapper' => 0,
      'alpha_region_menu_force' => 0,
      'alpha_zone_footer_wrapper' => 0,
      'alpha_zone_footer_force' => 0,
      'alpha_region_footer_first_force' => 0,
    ),
    'color_burarum_files' => NULL,
    'color_burarum_logo' => NULL,
    'color_burarum_palette' => NULL,
    'color_burarum_stylesheets' => NULL,
    'color_burarum_screenshot' => NULL,
  );
  $export['kurssin_osallistuja_printti'] = $delta;

  return $export;
}
