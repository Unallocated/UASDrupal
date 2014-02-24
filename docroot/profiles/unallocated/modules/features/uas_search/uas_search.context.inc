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
          'region' => 'sidebar_first',
          'weight' => '-26',
        ),
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'sidebar_first',
          'weight' => '-25',
        ),
        'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk' => array(
          'module' => 'facetapi',
          'delta' => 'zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk',
          'region' => 'sidebar_first',
          'weight' => '-24',
        ),
        'facetapi-IPaCM7H1dF7Clj1WBtiZQw516MCvTYka' => array(
          'module' => 'facetapi',
          'delta' => 'IPaCM7H1dF7Clj1WBtiZQw516MCvTYka',
          'region' => 'sidebar_first',
          'weight' => '-23',
        ),
        'facetapi-djs1o6VrivuNykMYeYyvXVKT480Y01tL' => array(
          'module' => 'facetapi',
          'delta' => 'djs1o6VrivuNykMYeYyvXVKT480Y01tL',
          'region' => 'sidebar_first',
          'weight' => '-22',
        ),
        'facetapi-nX7OckzG8ZuopQWtdC7zOIap6bK7v15R' => array(
          'module' => 'facetapi',
          'delta' => 'nX7OckzG8ZuopQWtdC7zOIap6bK7v15R',
          'region' => 'sidebar_first',
          'weight' => '-21',
        ),
        'facetapi-006i2ydH3VyJuB1m9c18xr81tXcAwDVN' => array(
          'module' => 'facetapi',
          'delta' => '006i2ydH3VyJuB1m9c18xr81tXcAwDVN',
          'region' => 'sidebar_first',
          'weight' => '-20',
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
