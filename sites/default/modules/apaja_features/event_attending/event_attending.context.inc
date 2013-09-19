<?php
/**
 * @file
 * event_attending.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function event_attending_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tapahtuman_osallistuja_printti';
  $context->description = '';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/osallistujaprint' => 'node/*/osallistujaprint',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'tapahtuman_osallistuja_printti',
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'burarum' => array(
        'disable' => array(
          'header_first' => 'header_first',
          'header_second' => 'header_second',
          'branding' => 'branding',
          'menu' => 'menu',
          'footer_first' => 'footer_first',
          'footer_second' => 'footer_second',
          'dashboard_main' => 'dashboard_main',
          'dashboard_sidebar' => 'dashboard_sidebar',
          'dashboard_inactive' => 'dashboard_inactive',
          'content_intro_video' => 0,
          'content_editors_choise' => 0,
          'content' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  $export['tapahtuman_osallistuja_printti'] = $context;

  return $export;
}
