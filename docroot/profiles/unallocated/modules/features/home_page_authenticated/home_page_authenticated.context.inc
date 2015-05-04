<?php
/**
 * @file
 * home_page_authenticated.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function home_page_authenticated_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home-page-authenticated';
  $context->description = 'Front page for authenticated members.';
  $context->tag = 'home page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
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
        'uas-uas_groups_block' => array(
          'module' => 'uas',
          'delta' => 'uas_groups_block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'uas_checkin-uas_checkin_status' => array(
          'module' => 'uas_checkin',
          'delta' => 'uas_checkin_status',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-resources-block_1' => array(
          'module' => 'views',
          'delta' => 'resources-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'post_postscript',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'front_page_authenticated',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page for authenticated members.');
  t('home page');
  $export['home-page-authenticated'] = $context;

  return $export;
}
