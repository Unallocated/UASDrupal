<?php
/**
 * @file
 * home_page_anonymous_context.box.inc
 */

/**
 * Implements hook_default_box().
 */
function home_page_anonymous_context_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_page_slideshow';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page slideshow';
  $box->options = array(
    'body' => array(
      'value' => '<h1> Stuff Goes Here </h1>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['home_page_slideshow'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'quick_links';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Front page space status and quick links';
  $box->options = array(
    'body' => array(
      'value' => '<div class="panel-pane pane-block pane-block-2 dark-block">
  
        <h2 class="pane-title cufon-replace">Want to know more?</h2>
    
  
  <div class="pane-content">
    <ul class="know-more-list"><li class="know-more-read-faq"><a href="#">Read our FAQ</a></li>
<li class="know-more-contact"><a href="#">Contact a member</a></li>
<li class="know-more-classes"><a href="#">Join a class</a></li>
<li class="know-more-beginners"><a href="#">Beginners Welcome</a></li>
</ul>  </div>

  
  </div>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['quick_links'] = $box;

  return $export;
}
