<?php
/**
 * @file
 * header_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function header_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_login';
  $context->description = 'Login and register block for second header';
  $context->tag = 'Header Second';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'header_second',
          'weight' => '-1',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'header_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Second');
  t('Login and register block for second header');
  $export['header_login'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'header_userinfo';
  $context->description = 'User info block for second header';
  $context->tag = 'Header Second';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'header_second',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Second');
  t('User info block for second header');
  $export['header_userinfo'] = $context;

  return $export;
}
