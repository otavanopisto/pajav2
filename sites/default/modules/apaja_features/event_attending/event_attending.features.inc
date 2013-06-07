<?php
/**
 * @file
 * event_attending.features.inc
 */

/**
 * Implements hook_views_api().
 */
function event_attending_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function event_attending_flag_default_flags() {
  $flags = array();
  // Exported flag: "Event attend flag".
  $flags['event_attend'] = array(
    'content_type' => 'node',
    'title' => 'Event attend flag',
    'global' => '0',
    'types' => array(
      0 => 'tapahtuma',
    ),
    'flag_short' => 'Osallistun',
    'flag_long' => 'Osallistun tähän tapahtumaan',
    'flag_message' => 'Olet ilmoittautunut tapahtumaan',
    'unflag_short' => 'En osallistu',
    'unflag_long' => 'Peru osallistumisesi',
    'unflag_message' => 'Olet perunut ilmoittautumisesi',
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
    'module' => 'event_attending',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}