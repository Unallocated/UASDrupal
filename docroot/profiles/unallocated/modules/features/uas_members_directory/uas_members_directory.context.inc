<?php
/**
 * @file
 * uas_members_directory.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uas_members_directory_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uas-members';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'members' => 'members',
        'members/*' => 'members/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-primary_navigation-1' => array(
          'module' => 'menu_block',
          'delta' => 'primary_navigation-1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['uas-members'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uas-members-search-facets';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'members' => 'members',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'current_search-current_user_search' => array(
          'module' => 'current_search',
          'delta' => 'current_user_search',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views--exp-members-page' => array(
          'module' => 'views',
          'delta' => '-exp-members-page',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-8P6OrNMibm1mczgJh07lvw2xPeRPiL8K' => array(
          'module' => 'facetapi',
          'delta' => '8P6OrNMibm1mczgJh07lvw2xPeRPiL8K',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-CrPNWeHHwnbkqZSDlbAS9LOTANHWsqYM' => array(
          'module' => 'facetapi',
          'delta' => 'CrPNWeHHwnbkqZSDlbAS9LOTANHWsqYM',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-ISXemZCmj94U327Megv3qHz0QxF2GlDq' => array(
          'module' => 'facetapi',
          'delta' => 'ISXemZCmj94U327Megv3qHz0QxF2GlDq',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-VrhL0NnGHRt3MkdArUoh1kxPDvi6wKhw' => array(
          'module' => 'facetapi',
          'delta' => 'VrhL0NnGHRt3MkdArUoh1kxPDvi6wKhw',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['uas-members-search-facets'] = $context;

  return $export;
}
