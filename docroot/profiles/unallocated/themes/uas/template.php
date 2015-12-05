<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function uas_preprocess_views_exposed_form(&$vars, $hook) {

  switch($vars['form']['#id']) {

    case 'views-exposed-form-members-page':
    case 'views-exposed-form-search-page':

      $vars['form']['search_api_views_fulltext']['#default_value'] = t('Search'); // Set a default value for the textfield
      $vars['form']['search_api_views_fulltext']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search';}";
      $vars['form']['search_api_views_fulltext']['#attributes']['onfocus'] = "if (this.value == 'Search') {this.value = '';}";

      unset($vars['form']['search_api_views_fulltext']['#printed']);
      $vars['widgets']['filter-search_api_views_fulltext']->widget = drupal_render($vars['form']['search_api_views_fulltext']);


      $vars['form']['submit']['#value'] = t('Search');
      $vars['form']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/icons/search-icon.png');
      unset($vars['form']['submit']['#printed']);
      $vars['button'] = drupal_render($vars['form']['submit']);
      break;
  }
}