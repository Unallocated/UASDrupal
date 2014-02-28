<?php
/**
 * @file
 * uas_footer_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uas_footer_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uas-footer-section';
  $context->description = '';
  $context->tag = 'Sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-uas_address_box' => array(
          'module' => 'boxes',
          'delta' => 'uas_address_box',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'menu-menu-footer-navigate' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-navigate',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'menu-menu-communicate' => array(
          'module' => 'menu',
          'delta' => 'menu-communicate',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
        'menu-menu-follow-unallocated' => array(
          'module' => 'menu',
          'delta' => 'menu-follow-unallocated',
          'region' => 'footer_fourth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sections');
  $export['uas-footer-section'] = $context;

  return $export;
}
