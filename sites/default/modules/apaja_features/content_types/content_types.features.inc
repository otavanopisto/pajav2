<?php
/**
 * @file
 * content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_types_node_info() {
  $items = array(
    'intro_video' => array(
      'name' => t('Intro video'),
      'base' => 'node_content',
      'description' => t('Content type for intro video block.'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
    'kurssi' => array(
      'name' => t('aPaja'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
    'slogan' => array(
      'name' => t('Iskulause'),
      'base' => 'node_content',
      'description' => t('Yläpalkin slogan'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
    'tapahtuma' => array(
      'name' => t('Tapahtuma'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  return $items;
}
