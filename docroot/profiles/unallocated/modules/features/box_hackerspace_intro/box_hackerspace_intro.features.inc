<?php
/**
 * @file
 * box_hackerspace_intro.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function box_hackerspace_intro_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
