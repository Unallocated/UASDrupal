<?php
/**
 * @file
 * uas_user.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uas_user_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uas-user-profile';
  $context->description = '';
  $context->tag = 'Users';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fieldblock-27d94fa7ee2ff2040c0e33f2cc229cdb' => array(
          'module' => 'fieldblock',
          'delta' => '27d94fa7ee2ff2040c0e33f2cc229cdb',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'uas_checkin-uas_checkin_status' => array(
          'module' => 'uas_checkin',
          'delta' => 'uas_checkin_status',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-related_users-block_1' => array(
          'module' => 'views',
          'delta' => 'related_users-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-user_content-block_1' => array(
          'module' => 'views',
          'delta' => 'user_content-block_1',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-profile_user_groups-block_1' => array(
          'module' => 'views',
          'delta' => 'profile_user_groups-block_1',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'user_profile',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Users');
  $export['uas-user-profile'] = $context;

  return $export;
}
