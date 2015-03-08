<?php
/**
 * @file
 * frontpage_blocks_anonymous.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function frontpage_blocks_anonymous_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage-main';
  $context->description = '';
  $context->tag = '';
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
        'views-frontpage_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'frontpage_slideshow-block_1',
          'region' => 'front_slideshow',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'front_slideshow_sidebar',
          'weight' => '-10',
        ),
        'boxes-front_page_know_more' => array(
          'module' => 'boxes',
          'delta' => 'front_page_know_more',
          'region' => 'first_break',
          'weight' => '-10',
        ),
        'system-powered-by' => array(
          'module' => 'system',
          'delta' => 'powered-by',
          'region' => 'second_break',
          'weight' => '-10',
        ),
        'views-weekly_calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'weekly_calendar-block_1',
          'region' => 'third_break',
          'weight' => '-10',
        ),
        'views-announcements-block_1' => array(
          'module' => 'views',
          'delta' => 'announcements-block_1',
          'region' => 'front_second_left',
          'weight' => '-10',
        ),
        'boxes-hackerspace_intro' => array(
          'module' => 'boxes',
          'delta' => 'hackerspace_intro',
          'region' => 'front_second_right',
          'weight' => '-10',
        ),
        'boxes-front_page_donate' => array(
          'module' => 'boxes',
          'delta' => 'front_page_donate',
          'region' => 'front_second_right',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['frontpage-main'] = $context;

  return $export;
}
