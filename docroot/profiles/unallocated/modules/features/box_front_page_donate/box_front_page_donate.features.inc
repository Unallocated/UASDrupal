<?php
/**
 * @file
 * box_front_page_donate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function box_front_page_donate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
