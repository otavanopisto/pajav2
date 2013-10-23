<?php
/**
 * @file
 * blogs_complex.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blogs_complex_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blogs_complex_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blogs_complex_node_info() {
  $items = array(
    'blog_entry' => array(
      'name' => t('Blogi kirjoitus'),
      'base' => 'node_content',
      'description' => t('Yksittäinen blogikirjoitus'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  return $items;
}
