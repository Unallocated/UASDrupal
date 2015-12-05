<?php
/**
 * @file
 * uas_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uas_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uas-search';
  $context->description = 'Layout and contexts for the search page.';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk' => array(
          'module' => 'facetapi',
          'delta' => 'zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-IPaCM7H1dF7Clj1WBtiZQw516MCvTYka' => array(
          'module' => 'facetapi',
          'delta' => 'IPaCM7H1dF7Clj1WBtiZQw516MCvTYka',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-nX7OckzG8ZuopQWtdC7zOIap6bK7v15R' => array(
          'module' => 'facetapi',
          'delta' => 'nX7OckzG8ZuopQWtdC7zOIap6bK7v15R',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-006i2ydH3VyJuB1m9c18xr81tXcAwDVN' => array(
          'module' => 'facetapi',
          'delta' => '006i2ydH3VyJuB1m9c18xr81tXcAwDVN',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout and contexts for the search page.');
  t('Pages');
  $export['uas-search'] = $context;

  return $export;
}
