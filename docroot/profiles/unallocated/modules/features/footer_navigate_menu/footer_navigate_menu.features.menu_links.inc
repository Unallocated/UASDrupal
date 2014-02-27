<?php
/**
 * @file
 * footer_navigate_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_navigate_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-navigate:<front>
  $menu_links['menu-footer-navigate:<front>'] = array(
    'menu_name' => 'menu-footer-navigate',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
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
  // Exported menu link: menu-footer-navigate:events
  $menu_links['menu-footer-navigate:events'] = array(
    'menu_name' => 'menu-footer-navigate',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-footer-navigate:http://www.unallocatedspace.org/wiki/Main_Page
  $menu_links['menu-footer-navigate:http://www.unallocatedspace.org/wiki/Main_Page'] = array(
    'menu_name' => 'menu-footer-navigate',
    'link_path' => 'http://www.unallocatedspace.org/wiki/Main_Page',
    'router_path' => '',
    'link_title' => 'Wiki',
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
    'weight' => '-47',
  );
  // Exported menu link: menu-footer-navigate:members/membership
  $menu_links['menu-footer-navigate:members/membership'] = array(
    'menu_name' => 'menu-footer-navigate',
    'link_path' => 'members/membership',
    'router_path' => 'members',
    'link_title' => 'Join',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-footer-navigate:node/15
  $menu_links['menu-footer-navigate:node/15'] = array(
    'menu_name' => 'menu-footer-navigate',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Events');
  t('Home');
  t('Join');
  t('Wiki');


  return $menu_links;
}
