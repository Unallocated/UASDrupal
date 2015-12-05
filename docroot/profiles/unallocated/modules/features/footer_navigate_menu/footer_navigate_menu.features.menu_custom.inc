<?php
/**
 * @file
 * footer_navigate_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_navigate_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-navigate.
  $menus['menu-footer-navigate'] = array(
    'menu_name' => 'menu-footer-navigate',
    'title' => 'Navigate',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Navigate');


  return $menus;
}
