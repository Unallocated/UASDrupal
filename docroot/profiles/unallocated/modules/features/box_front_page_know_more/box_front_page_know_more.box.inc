<?php
/**
 * @file
 * box_front_page_know_more.box.inc
 */

/**
 * Implements hook_default_box().
 */
function box_front_page_know_more_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'front_page_know_more';
  $box->plugin_key = 'simple';
  $box->title = 'Want to know more?';
  $box->description = 'Front page: Know More.';
  $box->options = array(
    'body' => array(
      'value' => '<ul class="know-more-list">
  <li class="know-more-read-faq"><a href=\'#\'>Read our FAQ</a></li>
  <li class="know-more-contact"><a href=\'#\'>Contact a member</a></li>
  <li class="know-more-classes"><a href=\'#\'>Join a class</a></li>
  <li class="know-more-beginners"><a href=\'#\'>Beginners Welcome</a></li>
</ul>',
      'format' => 'full_html',
    ),
  );
  $export['front_page_know_more'] = $box;

  return $export;
}
