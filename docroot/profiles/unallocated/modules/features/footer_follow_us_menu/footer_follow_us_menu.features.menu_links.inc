<?php
/**
 * @file
 * footer_follow_us_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_follow_us_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-follow-unallocated:https://twitter.com/Unallocated
  $menu_links['menu-follow-unallocated:https://twitter.com/Unallocated'] = array(
    'menu_name' => 'menu-follow-unallocated',
    'link_path' => 'https://twitter.com/Unallocated',
    'router_path' => '',
    'link_title' => 'On Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-follow-unallocated:https://www.facebook.com/Unallocated
  $menu_links['menu-follow-unallocated:https://www.facebook.com/Unallocated'] = array(
    'menu_name' => 'menu-follow-unallocated',
    'link_path' => 'https://www.facebook.com/Unallocated',
    'router_path' => '',
    'link_title' => 'On Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-follow-unallocated:https://www.youtube.com/theunallocated
  $menu_links['menu-follow-unallocated:https://www.youtube.com/theunallocated'] = array(
    'menu_name' => 'menu-follow-unallocated',
    'link_path' => 'https://www.youtube.com/theunallocated',
    'router_path' => '',
    'link_title' => 'On Youtube',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('On Facebook');
  t('On Twitter');
  t('On Youtube');


  return $menu_links;
}
