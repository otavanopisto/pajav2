<?php
/**
 * @file
 * course_members_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function course_members_view_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function course_members_view_views_api() {
  return array("api" => "3.0");
}
