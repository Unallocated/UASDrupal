<?php
/**
 * @file
 * uas_main_nav.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uas_main_nav_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:eform/submit/contact-form
  $menu_links['main-menu:eform/submit/contact-form'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/contact-form',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Contact',
    'options' => array(),
    'module' => 'entityform',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events and Classes',
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
    'weight' => '-50',
    'parent_path' => 'node/1',
  );
  // Exported menu link: main-menu:groups
  $menu_links['main-menu:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Groups',
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
    'parent_path' => 'node/1',
  );
  // Exported menu link: main-menu:http://www.unallocatedspace.org/wiki/Main_Page
  $menu_links['main-menu:http://www.unallocatedspace.org/wiki/Main_Page'] = array(
    'menu_name' => 'main-menu',
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
    'weight' => '-46',
    'parent_path' => 'resources',
  );
  // Exported menu link: main-menu:members
  $menu_links['main-menu:members'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'members',
    'router_path' => 'members',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/157
  $menu_links['main-menu:node/157'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/157',
    'router_path' => 'node/%',
    'link_title' => 'Membership',
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
    'weight' => '-50',
    'parent_path' => 'members',
  );
  // Exported menu link: main-menu:node/158
  $menu_links['main-menu:node/158'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/158',
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
    'weight' => '-49',
    'parent_path' => 'eform/submit/contact-form',
  );
  // Exported menu link: main-menu:node/159
  $menu_links['main-menu:node/159'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/159',
    'router_path' => 'node/%',
    'link_title' => 'Social',
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
    'weight' => '-50',
    'parent_path' => 'eform/submit/contact-form',
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Donations',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:projects
  $menu_links['main-menu:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
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
    'parent_path' => 'node/1',
  );
  // Exported menu link: main-menu:resources
  $menu_links['main-menu:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:resources/articles
  $menu_links['main-menu:resources/articles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/articles',
    'router_path' => 'resources/articles',
    'link_title' => 'Articles',
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
    'parent_path' => 'resources',
  );
  // Exported menu link: main-menu:resources/downloads
  $menu_links['main-menu:resources/downloads'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/downloads',
    'router_path' => 'resources/downloads',
    'link_title' => 'Downloads',
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
    'weight' => '-45',
    'parent_path' => 'resources',
  );
  // Exported menu link: main-menu:resources/tutorials
  $menu_links['main-menu:resources/tutorials'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/tutorials',
    'router_path' => 'resources/tutorials',
    'link_title' => 'Tutorials',
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
    'weight' => '-50',
    'parent_path' => 'resources',
  );
  // Exported menu link: main-menu:resources/videos
  $menu_links['main-menu:resources/videos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/videos',
    'router_path' => 'resources/videos',
    'link_title' => 'Videos',
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
    'weight' => '-47',
    'parent_path' => 'resources',
  );
  // Exported menu link: main-menu:taxonomy/term/1
  $menu_links['main-menu:taxonomy/term/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Taxonomy term',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'resources',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  t('Contact');
  t('Donations');
  t('Downloads');
  t('Events and Classes');
  t('Get Involved');
  t('Groups');
  t('Home');
  t('IRC');
  t('Members');
  t('Membership');
  t('Projects');
  t('Resources');
  t('Social');
  t('Taxonomy term');
  t('Tutorials');
  t('Videos');
  t('Wiki');


  return $menu_links;
}
