<?php
/**
 * @file
 * statuses_views_and_account_fields.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function statuses_views_and_account_fields_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statuses_filter';
  $strongarm->value = 'xbbcode';
  $export['statuses_filter'] = $strongarm;

  return $export;
}
