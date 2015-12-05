<?php
/**
 * @file
 * box_front_page_know_more.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function box_front_page_know_more_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
