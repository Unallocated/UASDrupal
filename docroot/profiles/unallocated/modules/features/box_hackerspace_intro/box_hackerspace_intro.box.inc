<?php
/**
 * @file
 * box_hackerspace_intro.box.inc
 */

/**
 * Implements hook_default_box().
 */
function box_hackerspace_intro_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'hackerspace_intro';
  $box->plugin_key = 'simple';
  $box->title = 'What is a Hackerspace?';
  $box->description = 'Hackerspace Intro';
  $box->options = array(
    'body' => array(
      'value' => 'Unallocated Space is a Hackerspace. Don\'t worry though, this isn\'t as scary as it sounds! We are a group of engineers, programmers, administrators, and hobbyists that come together to explore and share technology. Not good at anything technical? Not a problem - just come prepared to learn!

<a href="#">Learn More About Hackerspaces &raquo;</a>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['hackerspace_intro'] = $box;

  return $export;
}
