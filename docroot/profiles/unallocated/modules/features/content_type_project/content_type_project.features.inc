<?php
/**
 * @file
 * content_type_project.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
