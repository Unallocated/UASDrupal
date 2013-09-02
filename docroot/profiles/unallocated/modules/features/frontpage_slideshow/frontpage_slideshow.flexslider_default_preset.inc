<?php
/**
 * @file
 * frontpage_slideshow.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function frontpage_slideshow_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'frontpage_slideshow';
  $preset->title = 'Frontpage Slideshow';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'frontpage-slideshow-880';
  $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '0',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 0,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '0',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'slide',
    'slideshow' => 1,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '1',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'animationLoop' => 1,
    'pauseOnAction' => 1,
    'pauseOnHover' => 1,
    'manualControls' => '',
  );
  $export['frontpage_slideshow'] = $preset;

  return $export;
}
