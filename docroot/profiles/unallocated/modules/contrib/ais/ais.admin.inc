<?php
/**
 * @file
 * Administrative forms for Adaptive Image Styles.
 */

/**
 * Generates the AIS administration form
 */
function ais_admin_settings($form, &$form_state) {
  $form = array();

  $aischoose = variable_get('ais_adaptive_styles_method', 'both-max');

  $form['aischoose'] = array(
    '#type' => 'select',
    '#title' => t('Threshold Determination Method'),
    '#options' => array(
      'both-max' => t('Maximum of Width and Height'),
      'both-min' => t('Minimum of Width and Height'),
      'width' => t('Width'),
      'height' => t('Height'),
    ),
    '#default_value' => $aischoose,
    '#description' => t("Method that the browser's size is decided.<br /><ul>
<li>The maximum of the browser width and height will select a better resolution image and work well for both portrait and landscape images.</li>
<li>The minimum of the browser width and height will select a smaller image and and work well for both portrait and landscape images.</li>
<li>By width of the browser will work best for displaying mostly landscape images.</li>
<li>By height of the browser will work best for displaying mostly portrait images.</li></ul>
    "),
  );

  $form['ais'] = array(
    '#title' => t("Adaptive Image Styles"),
    '#type' => 'vertical_tabs',
  );

  $form['ais']['#attached']['js'] = array(
    drupal_get_path('module', 'ais') . '/assets/js/ais.admin.js',
  );

  $ais = variable_get("ais_adaptive_styles", array());
  $styles = image_styles();

  foreach ($styles as $is) {
    if ($is['name'] == 'adaptive') {
      continue;
    }

    $width = 0;
    foreach ($is['effects'] as $effect) {
      if (isset($effect['data']['width'])) {
        $width = $effect['data']['width'];
        break;
      }
    }

    $name = $is['name'];
    $nameset = $name . "_set";
    $namesize = $name . "_size";

    $form['ais'][$nameset] = array(
      '#title' => $is['name'],
      '#type' => 'fieldset',
      '#attributes' => array('class' => array('ais-settings-form')),
    );

    $form['ais'][$nameset][$name]['#title'] = t("Selected");
    $form['ais'][$nameset][$name]['#type'] = 'checkbox';
    $form['ais'][$nameset][$name]['#default_value'] = isset($form_state['values'][$name]) ? $form_state['values'][$name] : _ais_is_used($name, $ais);

    $size = _ais_get_size($name, $ais);
    if (!isset($size) or $size == "") {
      $size = $width;
    }

    $form['ais'][$nameset][$namesize] = array();
    $form['ais'][$nameset][$namesize]['#type'] = 'textfield';
    $form['ais'][$nameset][$namesize]['#description'] = t('Threshold');
    $form['ais'][$nameset][$namesize]['#states'] = array(
      'invisible' => array(
        'input[name="' . $name . '"]' => array('checked' => FALSE),
      ),
    );
    $form['ais'][$nameset][$namesize]['#default_value'] = isset($form_state['values'][$namesize]) ? $form_state['values'][$namesize] : $size;

  }

  $form['submit'] = array('#type' => 'submit', '#value' => t('Save') );
  $form['#validate'][] = 'ais_admin_settings_validate';
  $form['#submit'][] = 'ais_admin_settings_submit';

  return $form;
}


/**
 * Validates AIS Admin form submittions
 */
function ais_admin_settings_validate(&$form, &$form_state) {
  $styles = image_styles();
  foreach ($styles as $is) {
    if ($is['name'] == 'adaptive') {
      continue;
    }
    $name = $is['name'];
    $nameset = $name . "_set";
    $namesize = $name . "_size";

    if (isset($form_state['values'][$name]) and $form_state['values'][$name]) {
      if (
        !isset($form_state['values'][$namesize]) and
        !is_numeric($form_state['values'][$namesize]) and
        $form_state['values'][$namesize] > 0
      ) {
        form_set_error('width', t('You must select valid width in pixels for style %style', array('%style' => $name)));
      }
    }
  }
}


/**
 * Handles AIS admin page submittions
 */
function ais_admin_settings_submit(&$form, &$form_state) {
  $ais = array();
  $styles = image_styles();
  foreach ($styles as $is) {
    if ($is['name'] == 'adaptive') {
      continue;
    }
    $name = $is['name'];
    $nameset = $name . "_set";
    $namesize = $name . "_size";

    if (isset($form_state['values'][$name]) and $form_state['values'][$name]) {
      if (isset($form_state['values'][$namesize])) {
        $ais[] = array('name' => $name, 'size' => $form_state['values'][$namesize]);
      }
    }
  }
  variable_set("ais_adaptive_styles", $ais);

  if (isset($form_state['values']['aischoose']) and
      (
        $form_state['values']['aischoose'] == 'both-max' or
        $form_state['values']['aischoose'] == 'both-min' or
        $form_state['values']['aischoose'] == 'width' or
        $form_state['values']['aischoose'] == 'height'
      )
    ) {
    variable_set("ais_adaptive_styles_method", $form_state['values']['aischoose']);
  }
}

