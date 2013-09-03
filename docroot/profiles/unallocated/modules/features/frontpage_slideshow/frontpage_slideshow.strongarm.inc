<?php
/**
 * @file
 * frontpage_slideshow.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function frontpage_slideshow_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ais_adaptive_styles';
  $strongarm->value = array(
    0 => array(
      'name' => 'threshold-480',
      'size' => '480',
    ),
    1 => array(
      'name' => 'threshold-768',
      'size' => '768',
    ),
    2 => array(
      'name' => 'threshold-992',
      'size' => '992',
    ),
    3 => array(
      'name' => 'threshold-1382',
      'size' => '1382',
    ),
    4 => array(
      'name' => 'frontpage-slideshow-480',
      'size' => '480',
    ),
    5 => array(
      'name' => 'frontpage-slideshow-520',
      'size' => '768',
    ),
    6 => array(
      'name' => 'frontpage-slideshow-700',
      'size' => '992',
    ),
    7 => array(
      'name' => 'frontpage-slideshow-880',
      'size' => '1382',
    ),
  );
  $export['ais_adaptive_styles'] = $strongarm;

  return $export;
}
