<?php
/**
 * @file
 * uas_tutorial_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uas_tutorial_context_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function uas_tutorial_context_node_info() {
  $items = array(
    'tutorial' => array(
      'name' => t('Tutorial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
