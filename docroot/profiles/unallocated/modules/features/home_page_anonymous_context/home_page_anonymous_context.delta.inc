<?php
/**
 * @file
 * home_page_anonymous_context.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function home_page_anonymous_context_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'front_page_anonymous';
  $delta->name = 'Front Page Anonymous';
  $delta->description = 'The home page view for a user that is not logged in';
  $delta->theme = 'uas';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_uas_settings' => array(
      'alpha_region_preface_first_columns' => '9',
      'alpha_region_preface_second_columns' => '3',
      'alpha_zone_content_primary' => NULL,
      'alpha_region_sidebar_first_columns' => '6',
      'alpha_region_content_zone' => NULL,
      'alpha_region_sidebar_second_columns' => '6',
      'alpha_region_postscript_first_columns' => '12',
    ),
  );
  $export['front_page_anonymous'] = $delta;

  return $export;
}
