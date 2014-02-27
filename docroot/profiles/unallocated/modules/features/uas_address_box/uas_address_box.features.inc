<?php
/**
 * @file
 * uas_address_box.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uas_address_box_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
