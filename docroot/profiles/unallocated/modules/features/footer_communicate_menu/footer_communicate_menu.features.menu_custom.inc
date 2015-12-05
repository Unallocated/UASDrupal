<?php
/**
 * @file
 * footer_communicate_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_communicate_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-communicate.
  $menus['menu-communicate'] = array(
    'menu_name' => 'menu-communicate',
    'title' => 'Communicate',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Communicate');


  return $menus;
}
