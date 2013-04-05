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
        'views-intro_video-block' => array(
          'module' => 'views',
          'delta' => 'intro_video-block',
          'region' => 'content_intro_video',
          'weight' => '-10',
        ),
        'views-editors_choise-block_slider' => array(
          'module' => 'views',
          'delta' => 'editors_choise-block_slider',
          'region' => 'content_editors_choise',
          'weight' => '-10',
        ),
        'views-courses_not-block_slider' => array(
          'module' => 'views',
          'delta' => 'courses_not-block_slider',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-courses_started-block_slider' => array(
          'module' => 'views',
          'delta' => 'courses_started-block_slider',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-courses_ended-block_slider' => array(
          'module' => 'views',
          'delta' => 'courses_ended-block_slider',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage');
  t('Site frontpage');
  $export['frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide content';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header_second',
          'weight' => '0',
        ),
        'views-header_slogan-block' => array(
          'module' => 'views',
          'delta' => 'header_slogan-block',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Sitewide content');
  $export['sitewide'] = $context;

  return $export;
}
