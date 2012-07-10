<?php
/**
 * @file
 * Provides the administration page for Cufon.
 */

function _cufon_selector_form($selector = array(), $new = FALSE) {
  // Read fonts form cache if possible
  // and generate list for display

  $fonts['autoDetect'] = '-- AutoDetect --';
  foreach (_cufon_find_fonts() as $family => $file) {
    $fonts[$family] = $family;
  }

  $form = array(
    'selector' => array(
      '#type' => 'textfield',
      '#size' => 60,
      '#maxlength' => 128,
      '#default_value' => empty($selector['selector']) ? NULL : $selector['selector'],
    ),
    'options' => array(
      '#tree' => TRUE,
      'enabled' => array(
        '#type' => 'checkbox',
        '#default_value' => empty($selector['options']['enabled']) ? NULL : $selector['options']['enabled'],
      ),
      'fontFamily' => array(
        '#type' => 'select',
        '#options' => $fonts,
        '#default_value' => empty($selector['options']['fontFamily']) ? NULL : $selector['options']['fontFamily'],
      ),
      'hover' => array(
        '#type' => 'checkbox',
        '#default_value' => empty($selector['options']['hover']) ? 0 : $selector['options']['hover'],
      ),
      'textShadow' => array(
        '#type' => 'textfield',
        '#size' => 30,
        '#maxlength' => 128,
        '#default_value' => empty($selector['options']['textShadow']) ? NULL : $selector['options']['textShadow'],
      ),
    ),
  );

  return $form;
}
/**
 * Administration settings page
 */
function cufon_admin($form, &$form_state)  {
  $selectors = variable_get('cufon_selectors', array());

  // Search for fonts (don't use cached data)
  $fonts = _cufon_find_fonts(FALSE);

  if (empty($fonts)) {
    // No fonts - no replacement!
    drupal_set_message(t('In order to use Cufón module you must install at least one font in <code>libraries/cufon-fonts</code>.'), 'warning');
    return array();
  }

  $form_state['cache'] = TRUE;

  $form['#tree'] = TRUE;
  $form['cufon_remote_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Remote Cufón URL'),
    '#prefix' => '<div id="cufon-remote-url-wrapper">',
    '#suffix' => '</div>',
    '#description' => 'Absolute URL to a remote Cufón JS file.  If left blank, you need to install Cufón locally (read the documentation on how to do that).',
    '#default_value' => variable_get('cufon_remote_url', ''),
  );

  $form['cufon_selectors'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cufón selectors'),
    // Set up the wrapper so that AJAX will be able to replace the fieldset.
    '#prefix' => '<div id="cufon-selectors-fieldset-wrapper">',
    '#suffix' => '</div>',
  );

  if (empty($form_state['selector_count'])) {
    $form_state['selector_count'] = 1;
  }

  // Container for just the selectors.
  $form['cufon_selectors']['selector'] = array(
    '#prefix' => '<div id="cufon-selectors">',
    '#suffix' => '</div>',
    '#theme' => 'cufon_selectors',
  );

  $delta = 0;
  if (!empty($selectors)) {
    $delta = count($selectors);
    // Add existing selectors
    foreach ($selectors as $key => $selector) {
      $form['cufon_selectors']['selector'][] = _cufon_selector_form($selector);
    }
  }
  // Add initial or additional selectors
  for ($i = 1 ; $i < $form_state['selector_count']; $i++) {
    $form['cufon_selectors']['selector'][] = _cufon_selector_form(array(), TRUE);
  }

  $form['cufon_selectors']['add_selector'] = array(
    '#type' => 'submit',
    '#value' => t('Add selector'),
    '#description' => t("Click here to add selector."),
    '#weight' => 1,
    '#submit' => array('cufon_add_submit'),
    '#ajax' => array(
      'callback' => 'cufon_selector_js_callback',
      'wrapper' => 'cufon-selectors-fieldset-wrapper',
      'progress' => 'none'
    ),
    '#prefix' => '<div class="clearfix">',
    '#suffix' => '</div>',
  );

  if ($form_state['selector_count'] > 1) {
    $form['cufon_selectors']['remove_selector'] = array(
      '#type' => 'submit',
      '#value' => t('Remove one selector'),
      '#weight' => 2,
      '#submit' => array('cufon_remove_submit'),
      '#ajax' => array(
        'callback' => 'cufon_selector_js_callback',
        'wrapper' => 'cufon-selectors-fieldset-wrapper',
        'progress' => 'none'
      ),
    );
  }

  $form = system_settings_form($form);
  // We don't want to call system_settings_form_submit(), so change #submit.
  array_pop($form['#submit']);
  $form['#submit'][] = 'cufon_admin_submit';

  return $form;
}

function cufon_add_submit($form, &$form_state) {
  $form_state['selector_count']++;
  $form_state['rebuild'] = TRUE;
}

function cufon_remove_submit($form, &$form_state) {
  if ($form_state['selector_count'] > 1) {
    $form_state['selector_count']--;
  }
  $form_state['rebuild'] = TRUE;
}

function cufon_selector_js_callback($form, $form_state) {
  return $form['cufon_selectors'];
}


/**
 * Submit callback for cufon administrative settings
 *
 * Filters out empty form elements.
 */
function cufon_admin_submit($form, &$form_state) {
  $selectors = $form_state['values']['cufon_selectors']['selector'];
  $remote_url = $form_state['values']['cufon_remote_url'];

  foreach ($selectors as $key => $item) {
    if (empty($item['selector'])) {
      unset($selectors[$key]);
    }
    else {
      // set autoDetect if selected
      if ($selectors[$key]['options']['fontFamily'] == 'autoDetect') {
        $selectors[$key]['options']['autoDetect'] = TRUE;
        unset($selectors[$key]['options']['fontFamily']);
      } else {
        unset($selectors[$key]['options']['autoDetect']);
      }

      // remove unused/empty options
      $selectors[$key]['options'] = array_filter($selectors[$key]['options']);
    }
  }
  
  variable_set('cufon_selectors', $selectors);
  variable_set('cufon_remote_url', $remote_url);
  drupal_set_message(t('The configuration options have been saved.'));
}
