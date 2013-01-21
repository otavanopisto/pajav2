<?php
/**
 * @file
 * courses_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function courses_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Site frontpage';
  $context->tag = 'Frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-95837abb603d6006ea40e1cdf9b79d32' => array(
          'module' => 'views',
          'delta' => '95837abb603d6006ea40e1cdf9b79d32',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage');
  $export['frontpage'] = $context;

  return $export;
}
