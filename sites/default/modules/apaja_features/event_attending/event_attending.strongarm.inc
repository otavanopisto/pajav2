<?php
/**
 * @file
 * event_attending.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function event_attending_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_super_short';
  $strongarm->value = 'd.m.';
  $export['date_format_super_short'] = $strongarm;

  return $export;
}
