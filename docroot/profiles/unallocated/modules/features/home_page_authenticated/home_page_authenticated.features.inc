<?php
/**
 * @file
 * home_page_authenticated.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_authenticated_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
