<?php
/**
 * @file
 * uas_authenticated_frontpage_delta.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function uas_authenticated_frontpage_delta_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'front_page_authenticated';
  $delta->name = 'Front Page Authenticated';
  $delta->description = '';
  $delta->theme = 'uas';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_uas_settings' => array(
      'alpha_region_content_weight' => '1',
      'alpha_region_sidebar_first_weight' => '2',
    ),
  );
  $export['front_page_authenticated'] = $delta;

  return $export;
}
