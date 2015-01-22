<?php
/**
 * @file
 * content_type_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
