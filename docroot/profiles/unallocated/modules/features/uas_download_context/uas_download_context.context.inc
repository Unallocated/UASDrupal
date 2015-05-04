<?php
/**
 * @file
 * uas_download_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uas_download_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uas-download';
  $context->description = '';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'download' => 'download',
      ),
      'options' => array(
        'node_form' => '1',
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
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Types');
  $export['uas-download'] = $context;

  return $export;
}
