<?php
/**
 * @file
 * footer_follow_us_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_follow_us_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-follow-unallocated.
  $menus['menu-follow-unallocated'] = array(
    'menu_name' => 'menu-follow-unallocated',
    'title' => 'Follow Unallocated',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Follow Unallocated');


  return $menus;
}
