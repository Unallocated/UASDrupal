<?php
/**
 * @file
 * content_type_tutorial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_tutorial_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
