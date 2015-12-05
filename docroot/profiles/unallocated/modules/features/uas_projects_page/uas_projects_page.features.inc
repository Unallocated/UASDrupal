<?php
/**
 * @file
 * uas_projects_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uas_projects_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
