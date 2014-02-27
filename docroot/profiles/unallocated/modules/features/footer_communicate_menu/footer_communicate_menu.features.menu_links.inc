<?php
/**
 * @file
 * footer_communicate_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_communicate_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-communicate:eform/submit/contact-form
  $menu_links['menu-communicate:eform/submit/contact-form'] = array(
    'menu_name' => 'menu-communicate',
    'link_path' => 'eform/submit/contact-form',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Contact Us',
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
    'weight' => '0',
  );
  // Exported menu link: menu-communicate:node/3
  $menu_links['menu-communicate:node/3'] = array(
    'menu_name' => 'menu-communicate',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Meetup',
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
    'weight' => '0',
  );
  // Exported menu link: menu-communicate:node/7
  $menu_links['menu-communicate:node/7'] = array(
    'menu_name' => 'menu-communicate',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'IRC',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');
  t('IRC');
  t('Meetup');


  return $menu_links;
}
