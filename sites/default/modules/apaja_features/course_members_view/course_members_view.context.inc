<?php
/**
 * @file
 * course_members_view.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function course_members_view_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kurssin_osallistuja_printti';
  $context->description = '';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/ogosallistujaprint' => 'node/*/ogosallistujaprint',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'kurssin_osallistuja_printti',
    ),
    'region' => array(
      'burarum' => array(
        'disable' => array(
          'header_first' => 'header_first',
          'header_second' => 'header_second',
          'branding' => 'branding',
          'menu' => 'menu',
          'content_intro_video' => 'content_intro_video',
          'content_editors_choise' => 'content_editors_choise',
          'footer_first' => 'footer_first',
          'footer_second' => 'footer_second',
          'dashboard_main' => 'dashboard_main',
          'dashboard_sidebar' => 'dashboard_sidebar',
          'dashboard_inactive' => 'dashboard_inactive',
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
  t('Sitewide');
  $export['kurssin_osallistuja_printti'] = $context;

  return $export;
}
