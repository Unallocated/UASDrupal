<?php
/**
 * @file
 * Profiler Builder API examples and documentation.
 */

/**
 * Implements hook_profiler_builder_defined_libraries().
 *
 * return an array of library definitions in the following drush make format
 * [download][url] is defined as [download_url]
 * [download][type] is defined as [download_type]
 * [_name] allows for a human readable name of the library when written to the drush file
 * [_local] boolean to determine if this should be included in the local or d.o. make file
 *          the assumed state is that it is cleared by d.o. packaging white-list
 */
function hook_profiler_builder_defined_libraries() {
  $defined_libs = array();
   // oauth hasn't cleared packaging script but will soon
  $defined_libs['oauth']['_name'] = t('OAuth Drupal fork');
  $defined_libs['oauth']['_local'] = TRUE;
  $defined_libs['oauth']['download_url'] = "https://github.com/juampy72/OAuth-PHP/archive/master.zip";
  return $defined_libs;
}

/**
 * Implements hook_profiler_builder_defined_libraries_alter().
 *
 * $defined_libs is an array of defined libraries in format above
 */
function hook_profiler_builder_defined_libraries_alter(&$defined_libs) {
  $defined_libs['bootstrap']['destination'] = "themes/contrib/bootstrap";
}

/**
 * Implements hook_profiler_builder_libraries_list_alter().
 *
 * $libraries is an array of selected libraries for this publishing routine
 * $local is a boolean to indicate if this is for local or d.o. based publishing
 * $name is the machine name of the profile to be created
 */
function hook_profiler_builder_libraries_list_alter(&$libraries, $local, $machine_name) {
  // always use profiler dev if enabled
  if (isset($libraries['profiler'])) {
    $libraries['profiler']['_name'] = t('Profiler');
    $libraries['profiler']['download'] = 'http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz';
  }
  // if this is a local example build to include this non-d.o. capable library
  // bootstrap can't be hosted on d.o. because of licensing issues
  if (isset($libraries['bootstrap'])) {
    // define it if its a local build file
    if ($local) {
      $libraries['bootstrap']['_name'] = t('Twitter Bootstrap');
      $libraries['bootstrap']['directory_name'] = "bootstrap";
      $libraries['bootstrap']['destination'] = "themes/contrib/bootstrap";
      $libraries['bootstrap']['download_url'] = "http://twitter.github.com/bootstrap/assets/bootstrap.zip";
    }
    else {
      // remove it if its a d.o. build file
      unset($libraries['bootstrap']);
    }
  }
}

/**
 * Implements hook_profiler_builder_modules_list_alter().
 */
function hook_profiler_builder_modules_list_alter(&$modules) {
  // remove the cdn module
  unset($modules['cdn']);
}

/**
 * Implements hook_profiler_builder_modules_list_alter().
 */
function hook_profiler_builder_drush_modules_list_alter(&$project_data, $machine_name) {
  // remove all modules listed as part of the distribution
  unset($project_data[$distro_name]);
}

/**
 * Implements hook_profiler_builder_ignore_alter().
 */
function hook_profiler_builder_ignore_alter(&$ignore) {
  // ignore the cdn settings
  $ignore[] = 'cdn_settings';
}

/**
 * Implements hook_profiler_builder_variables_alter().
 */
function hook_profiler_builder_variables_alter(&$variables) {
  // variable values to change
  $change = array(
    'cdn_status' => 0,
  );
  // loop through and change only set values
  foreach ($change as $var => $val) {
    if (isset($variables[$var])) {
      $variables[$var] = $val;
    }
  }
}

/**
 * Implements hook_profiler_builder_info_include().
 *  key name needs to be unique
 *  name is a human readable name for this component
 *  callback is a function that will return text to place in the file
 * Items added must be available through the profiler API
 * If they aren't you can still add them but they won't do anything
 */
function hook_profiler_builder_info_include() {
  $includes = array(
    'keyname' => array(
      'name' => t('Variables'),
      'callback' => '_profiler_builder_export_variables',
    ),
    'modules' => array(
      'name' => t('Dependencies'),
      'callback' => '_profiler_builder_export_dependencies',
    ),
  );
  return $includes;
}

/**
 * Implements hook_profiler_builder_info_include_alter().
 */
function hook_profiler_builder_info_include(&$includes) {
  $includes['modules']['callback'] = 'my_new_callback_to_handle_modules';
}

/**
 * Implements hook_profiler_builder_patch_locations().
 */
function hook_profiler_builder_patch_locations() {
  $locations = array(
    'includes',
    'misc',
    'modules',
    'profiles',
  );
  return $locations;
}

/**
 * Implements hook_profiler_builder_patch_locations_alter().
 */
function hook_profiler_builder_patch_locations_alter(&$locations) {
  foreach ($locations as $key => $location) {
    // don't scan profiles directory for patches
    if ($location == 'profiles') {
      unset($locations[$key]);
    }
  }
}