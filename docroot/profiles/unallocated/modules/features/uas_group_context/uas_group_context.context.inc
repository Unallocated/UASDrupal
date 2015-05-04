<?php
/**
 * @file
 * uas_group_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uas_group_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uas-group';
  $context->description = '';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
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
        'og_extras-group_info' => array(
          'module' => 'og_extras',
          'delta' => 'group_info',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'og_extras-node_links' => array(
          'module' => 'og_extras',
          'delta' => 'node_links',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-og_extras_members-block_1' => array(
          'module' => 'views',
          'delta' => 'og_extras_members-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Types');
  $export['uas-group'] = $context;

  return $export;
}
