<?php
/**
 * @file
 * uas_groups_dashboard.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uas_groups_dashboard_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'og_extras_groups' => TRUE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}
