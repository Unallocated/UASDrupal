<?php
/**
 * @file
 * content_type_announcement.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_announcement_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'base' => 'node_content',
      'description' => t('Administrative announcements or news from the Board to members.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
