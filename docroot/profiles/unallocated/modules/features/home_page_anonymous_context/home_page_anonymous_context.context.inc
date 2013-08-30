<?php
/**
 * @file
 * home_page_anonymous_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_page_anonymous_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home-page-anonymous';
  $context->description = 'Home page view for anonymous user';
  $context->tag = 'home page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-home_page_slideshow' => array(
          'module' => 'boxes',
          'delta' => 'home_page_slideshow',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'boxes-quick_links' => array(
          'module' => 'boxes',
          'delta' => 'quick_links',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'front_page_anonymous',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home page view for anonymous user');
  t('home page');
  $export['home-page-anonymous'] = $context;

  return $export;
}
