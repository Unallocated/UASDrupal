<?php
/**
 * @file
 * box_front_page_donate.box.inc
 */

/**
 * Implements hook_default_box().
 */
function box_front_page_donate_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_page_donate';
  $box->plugin_key = 'simple';
  $box->title = 'Donate';
  $box->description = 'Front Page: Donate';
  $box->options = array(
    'body' => array(
      'value' => 'If you believe in our mission, please consider a donation of money, equipment, or time. There are no paid staff here, and donations go 100% towards advancing technology education.

<a id="front-donate-link" class="large-button-yellow">Donate</a>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['front_page_donate'] = $box;

  return $export;
}
