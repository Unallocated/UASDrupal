<?php
/**
 * @file
 * uas_tutorials.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uas_tutorials_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uas-tutorials-dashboard';
  $context->description = '';
  $context->tag = 'Dashboards';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources/tutorials' => 'resources/tutorials',
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
        'menu_block-primary_navigation-1' => array(
          'module' => 'menu_block',
          'delta' => 'primary_navigation-1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'uas_checkin-uas_checkin_status' => array(
          'module' => 'uas_checkin',
          'delta' => 'uas_checkin_status',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboards');
  $export['uas-tutorials-dashboard'] = $context;

  return $export;
}
