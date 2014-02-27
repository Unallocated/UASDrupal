<?php
/**
 * @file
 * uas_address_box.box.inc
 */

/**
 * Implements hook_default_box().
 */
function uas_address_box_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'uas_address_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'UAS Address Box';
  $box->options = array(
    'body' => array(
      'value' => '<div class="uas-address">
512 Shaw Ct.<br />
Suite #105<br />
Severn, MD  21144
</div>
<br />
<div class="uas-phone">1 (512) 943-2827</div>
<div class="copyright-notice">Copyright &copy; 2014 Unallocated Space<br />
All rights reserved.</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['uas_address_box'] = $box;

  return $export;
}
