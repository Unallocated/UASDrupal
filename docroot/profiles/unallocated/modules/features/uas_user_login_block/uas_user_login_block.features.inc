<?php
/**
 * @file
 * uas_user_login_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uas_user_login_block_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
