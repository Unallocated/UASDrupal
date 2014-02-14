<?php
/**
 * @file
 * content_type_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_group_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_group_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('User created groups'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
