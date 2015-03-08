<?php
/**
 * @file
 * frontpage_blocks_anonymous.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function frontpage_blocks_anonymous_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
