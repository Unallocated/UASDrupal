<?php
/**
 * @file
 * uas_video_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uas_video_context_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}