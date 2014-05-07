<?php
/**
 * @file
 * statuses_views_and_account_fields.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function statuses_views_and_account_fields_filter_default_formats() {
  $formats = array();

  // Exported format: BBCode.
  $formats['xbbcode'] = array(
    'format' => 'xbbcode',
    'name' => 'BBCode',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'xbbcode' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'autoclose' => 1,
          'override' => 0,
          'tags' => array(
            '_enabled' => array(
              'abbr' => 'abbr',
              'acronym' => 'acronym',
              'b' => 'b',
              'center' => 'center',
              'code' => 'code',
              'color' => 'color',
              'define' => 'define',
              'font' => 'font',
              'h1' => 'h1',
              'h2' => 'h2',
              'h3' => 'h3',
              'h4' => 'h4',
              'h5' => 'h5',
              'h6' => 'h6',
              'hr' => 'hr',
              'i' => 'i',
              'img' => 'img',
              'justify' => 'justify',
              'left' => 'left',
              'list' => 'list',
              'node' => 'node',
              'php' => 'php',
              'quote' => 'quote',
              'right' => 'right',
              's' => 's',
              'size' => 'size',
              'sub' => 'sub',
              'sup' => 'sup',
              'u' => 'u',
              'url' => 'url',
              'wikipedia' => 'wikipedia',
              'youtube' => 'youtube',
            ),
            'abbr' => array(
              'module' => 'xbbcode_basic',
            ),
            'acronym' => array(
              'module' => 'xbbcode_basic',
            ),
            'b' => array(
              'module' => 'xbbcode_basic',
            ),
            'center' => array(
              'module' => 'xbbcode_basic',
            ),
            'code' => array(
              'module' => 'xbbcode_basic',
            ),
            'color' => array(
              'module' => 'xbbcode_basic',
            ),
            'define' => array(
              'module' => 'xbbcode_basic',
            ),
            'font' => array(
              'module' => 'xbbcode_basic',
            ),
            'h1' => array(
              'module' => 'xbbcode_basic',
            ),
            'h2' => array(
              'module' => 'xbbcode_basic',
            ),
            'h3' => array(
              'module' => 'xbbcode_basic',
            ),
            'h4' => array(
              'module' => 'xbbcode_basic',
            ),
            'h5' => array(
              'module' => 'xbbcode_basic',
            ),
            'h6' => array(
              'module' => 'xbbcode_basic',
            ),
            'hr' => array(
              'module' => 'xbbcode_basic',
            ),
            'i' => array(
              'module' => 'xbbcode_basic',
            ),
            'img' => array(
              'module' => 'xbbcode_basic',
            ),
            'justify' => array(
              'module' => 'xbbcode_basic',
            ),
            'left' => array(
              'module' => 'xbbcode_basic',
            ),
            'list' => array(
              'module' => 'xbbcode_basic',
            ),
            'node' => array(
              'module' => 'xbbcode_basic',
            ),
            'php' => array(
              'module' => 'xbbcode_basic',
            ),
            'quote' => array(
              'module' => 'xbbcode_basic',
            ),
            'right' => array(
              'module' => 'xbbcode_basic',
            ),
            's' => array(
              'module' => 'xbbcode_basic',
            ),
            'size' => array(
              'module' => 'xbbcode_basic',
            ),
            'sub' => array(
              'module' => 'xbbcode_basic',
            ),
            'sup' => array(
              'module' => 'xbbcode_basic',
            ),
            'u' => array(
              'module' => 'xbbcode_basic',
            ),
            'url' => array(
              'module' => 'xbbcode_basic',
            ),
            'wikipedia' => array(
              'module' => 'xbbcode_basic',
            ),
            'youtube' => array(
              'module' => 'xbbcode_basic',
            ),
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
