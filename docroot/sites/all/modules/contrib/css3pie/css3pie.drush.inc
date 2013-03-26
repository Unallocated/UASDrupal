<?php
/**
 * @file
 * css3pie drush integration for lib downloading
 */
define('CSS3PIE_DOWNLOAD_URI', 'http://cloud.github.com/downloads/lojjic/PIE/PIE-1.0beta5.zip');
define('CSS3PIE_DEFAULT_DESTINATION', 'sites/all/libraries');
define('CSS3PIE_DEFAULT_DESTINATION_PATH', 'PIE');

/**
 * Implementation of hook_drush_command().
 */
function css3pie_drush_command() {
  $items = array();
  // the key in the $items array is the name of the command.
  $items['css3pie-download'] = array(
    'description' => dt("Downloads the css3pie library"),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH, // No bootstrap.
    'arguments' => array(
      'path' => dt('Optional. A path where to install the css3pie library. If omitted Drush will use the default location.'),
    ),
    'core' => array('7+'),
  );
  return $items;
}

/**
 * Implementation of hook_drush_help().
 *
 * This function is called whenever a drush user calls
 * 'drush help <name-of-your-command>'
 *
 * @param
 *   A string with the help section (prepend with 'drush:')
 *
 * @return
 *   A string with the help text for your command.
 */
function css3pie_drush_help($section) {
  switch ($section) {
    case 'drush:css3pie-download':
      return dt("Downloads the css3pie library, default location is sites/all/libraries.");
  }
}

/**
 * Drush command callback
 * to download the Secureshare plugin.
 */
function drush_css3pie_download() {
  if (!drush_shell_exec('type unzip')) {
    return drush_set_error(dt('Missing dependency: unzip. Install it before using this command.'));
  }

  $args = func_get_args();
  if (!empty($args[0])) {
    $path = $args[0];
  }
  else {
    $path = CSS3PIE_DEFAULT_DESTINATION;
  }

  // Create the path if it does not exist.
  if (!is_dir($path)) {
    drush_op('mkdir', $path);
    drush_log(dt('Directory @path was created', array('@path' => $path)), 'notice');
  }

  // Set the directory to the download location.
  $olddir = getcwd();
  chdir($path);

  $filename = basename(CSS3PIE_DOWNLOAD_URI);

  // Remove any existing plugin directory
  if (is_dir(CSS3PIE_DEFAULT_DESTINATION_PATH)) {
    drush_log(dt('A existing download was overwritten at @path', array('@path' => $path)), 'notice');
  }
  else {
    drush_op('mkdir', CSS3PIE_DEFAULT_DESTINATION_PATH);
    drush_log(dt('Directory @path was created', array('@path' => $path)), 'notice');
  }

  chdir(CSS3PIE_DEFAULT_DESTINATION_PATH);

  // Remove any existing plugin zip archive
  if (is_file($filename)) {
    drush_op('unlink', $filename);
  }

  // Download the zip archive
  if (!drush_shell_exec('wget ' . CSS3PIE_DOWNLOAD_URI)) {
    drush_shell_exec('curl -O ' . CSS3PIE_DOWNLOAD_URI);
  }

  if (is_file($filename)) {
    // Decompress the zip archive
    drush_shell_exec('unzip -qq -o ' . $filename);
    // Remove the zip archive
    drush_op('unlink', $filename);
  }

  // Set working directory back to the previous working directory.
  chdir($olddir);

  if (is_dir($path . '/' . CSS3PIE_DEFAULT_DESTINATION_PATH)) {
    drush_log(dt('css3pie library has been downloaded to @path', array('@path' => $path)), 'success');
  }
  else {
    drush_log(dt('Drush was unable to download the css3pie library to @path', array('@path' => $path)), 'error');
  }
}

/**
 * Implements drush_MODULE_post_COMMAND().
 */
function drush_css3pie_post_pm_enable() {
  $extensions = func_get_args();
  // Deal with comma delimited extension list.
  if (strpos($extensions[0], ',') !== FALSE) {
    $extensions = explode(',', $extensions[0]);
  }

  if (in_array('css3pie', $extensions) && !drush_get_option('skip')) {
    drush_css3pie_download();
  }
}