<?php
/**
 * @file
 * courses_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function courses_views_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function courses_views_views_api() {
  return array("api" => "3.0");
}
