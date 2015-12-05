<?php
/**
 * @file
 * disciplines_default_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function disciplines_default_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function disciplines_default_content_node_info() {
  $items = array(
    'discipline' => array(
      'name' => t('Discipline'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
