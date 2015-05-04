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
      'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. In egestas tellus sed nisl pharetra suscipit vulputate arcu condimentum. Suspendisse venenatis volutpat nisl, sit amet fringilla magna cursus eu. Morbi ut elit odio, vitae consectetur enim. Aliquam erat volutpat. 

»',
      'format' => 'full_html',
    ),
  );
  $export['hackerspace_intro'] = $box;

  return $export;
}
