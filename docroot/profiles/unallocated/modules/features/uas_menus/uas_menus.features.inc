<?php
/**
 * @file
 * uas_menus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uas_menus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
