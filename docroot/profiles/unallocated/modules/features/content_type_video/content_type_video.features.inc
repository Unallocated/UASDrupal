<?php
/**
 * @file
 * content_type_video.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
