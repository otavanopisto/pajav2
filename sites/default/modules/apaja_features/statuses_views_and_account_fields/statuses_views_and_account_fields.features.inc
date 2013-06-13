<?php
/**
 * @file
 * statuses_views_and_account_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function statuses_views_and_account_fields_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function statuses_views_and_account_fields_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function statuses_views_and_account_fields_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow conversation".
  $flags['follow_conversation'] = array(
    'content_type' => 'node',
    'title' => 'Follow conversation',
    'global' => '0',
    'types' => array(
      0 => 'kurssi',
      1 => 'tapahtuma',
    ),
    'flag_short' => 'Haluan keskutelusta sähköpostia',
    'flag_long' => 'Haluan keskutelusta sähköpostia',
    'flag_message' => 'Saat keskustelusta ilmoituksia sähköpostiisi',
    'unflag_short' => 'En halua keskutelusta sähköpostia',
    'unflag_long' => 'En halua keskutelusta sähköpostia',
    'unflag_message' => 'Olet perunut keskustelun sähköposti-ilmoitukset',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'statuses_views_and_account_fields',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function statuses_views_and_account_fields_image_default_styles() {
  $styles = array();

  // Exported image style: avatar_normal.
  $styles['avatar_normal'] = array(
    'name' => 'avatar_normal',
    'effects' => array(
      7 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '160',
          'height' => '160',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: avatar_thumbnail.
  $styles['avatar_thumbnail'] = array(
    'name' => 'avatar_thumbnail',
    'effects' => array(
      5 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '48',
          'height' => '48',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
