<?php
/**
 * @file
 * uas_groups_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uas_groups_dashboard_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uas_groups_dashboard_views_api() {
  return array("version" => "3.0");
}
