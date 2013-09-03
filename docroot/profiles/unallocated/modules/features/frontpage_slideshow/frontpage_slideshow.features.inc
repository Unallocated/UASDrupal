<?php
/**
 * @file
 * frontpage_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function frontpage_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function frontpage_slideshow_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function frontpage_slideshow_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: frontpage_slideshow
  $nodequeues['frontpage_slideshow'] = array(
    'name' => 'frontpage_slideshow',
    'title' => 'Frontpage Slideshow',
    'subqueue_title' => '',
    'size' => '5',
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '0',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'types' => array(
      0 => 'project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function frontpage_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage-slideshow-480.
  $styles['frontpage-slideshow-480'] = array(
    'name' => 'frontpage-slideshow-480',
    'label' => 'frontpage-slideshow-480',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '480',
          'height' => '300',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: frontpage-slideshow-520.
  $styles['frontpage-slideshow-520'] = array(
    'name' => 'frontpage-slideshow-520',
    'label' => 'frontpage-slideshow-520',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '520',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: frontpage-slideshow-700.
  $styles['frontpage-slideshow-700'] = array(
    'name' => 'frontpage-slideshow-700',
    'label' => 'frontpage-slideshow-700',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '700',
          'height' => '450',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: frontpage-slideshow-880.
  $styles['frontpage-slideshow-880'] = array(
    'name' => 'frontpage-slideshow-880',
    'label' => 'frontpage-slideshow-880',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '880',
          'height' => '450',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
