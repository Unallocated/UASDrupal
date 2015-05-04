<?php
/**
 * @file
 * space_status_indicator.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function space_status_indicator_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['uas_checkin-uas_checkin_status'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'uas_checkin_status',
    'module' => 'uas_checkin',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'uas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'uas',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
