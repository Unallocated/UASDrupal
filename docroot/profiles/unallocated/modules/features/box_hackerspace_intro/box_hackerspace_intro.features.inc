<?php
/**
 * @file
 * box_hackerspace_intro.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function box_hackerspace_intro_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
