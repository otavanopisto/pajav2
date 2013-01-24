<?php
/**
 * @file
 * statuses_views_and_account_fields.features.inc
 */

/**
 * Implements hook_views_api().
 */
function statuses_views_and_account_fields_views_api() {
  return array("api" => "3.0");
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
