<?php
/**
 * @file
 * uas_front_page_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uas_front_page_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
