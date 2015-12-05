<?php
// $Id: flexifilter.conditions.inc,v 1.6 2008/01/22 00:48:28 cwgordon7 Exp $

/**
 * @file
 * Contains the condition callback functions for the Flexifield module.
 */

/**
 * Implements hook_flexifilter_conditions().
 */
function flexifilter_flexifilter_conditions() {
  $conditions = array();
  $conditions['flexifilter_group_or'] = array(
    'label' => t('OR Group'),
    'description' => t('True if any of the contained conditions are true'),
    'contains_conditions' => TRUE,
    'callback' => 'flexifilter_condition_group_or',
    'group' => t('Logic'),
  );
  $conditions['flexifilter_group_and'] = array(
    'label' => t('AND Group'),
    'description' => t('True if all of the contained conditions are true'),
    'contains_conditions' => TRUE,
    'callback' => 'flexifilter_condition_group_and',
    'group' => t('Logic'),
  );
  $conditions['flexifilter_group_not'] = array(
    'label' => t('NOT Group'),
    'description' => t('True if any of the contained conditions are false'),
    'contains_conditions' => TRUE,
    'callback' => 'flexifilter_condition_group_not',
    'group' => t('Logic'),
  );
  $conditions['flexifilter_true'] = array(
    'label' => t('Always true'),
    'callback' => 'flexifilter_condition_constant',
    'callback_arguments' => array(TRUE),
    'group' => t('Logic'),
  );
  $conditions['flexifilter_false'] = array(
    'label' => t('Always false'),
    'callback' => 'flexifilter_condition_constant',
    'callback_arguments' => array(FALSE),
    'group' => t('Logic'),
  );
  $conditions['flexifilter_text_search'] = array(
    'label' => t('Text contains phrase'),
    'description' => t('True if the text contains the specified phrase. Can optionally use regular expressions.'),
    'callback' => 'flexifilter_condition_text_search',
    'group' => t('Text'),
  );
  $conditions['flexifilter_text_length'] = array(
    'label' => t('Text length is...'),
    'description' => t('True if the text length meets the condition.'),
    'callback' => 'flexifilter_condition_text_length',
    'group' => t('Text'),
  );
  $conditions['flexifilter_step_prepare'] = array(
    'label' => t('Is preparation step'),
    'description' => t('True only during the preparation step of filtering.'),
    'callback' => 'flexifilter_condition_step',
    'callback_arguments' => array('prepare'),
    'group' => t('Filtering Steps'),
    'is_advanced' => TRUE,
  );
  $conditions['flexifilter_step_process'] = array(
    'label' => t('Is processing step'),
    'description' => t('True only during the processing step of filtering.'),
    'callback' => 'flexifilter_condition_step',
    'callback_arguments' => array('process'),
    'group' => t('Filtering Steps'),
    'is_advanced' => TRUE,
  );
  // Advanced.
  $conditions['flexifilter_advanced_php'] = array(
    'label' => t('PHP code'),
    'description' => t('Uses php code to evaluate a condition.'),
    'callback' => 'flexifilter_condition_advanced_php',
    'group' => t('Advanced'),
    'is_advanced' => TRUE,
    'step' => 'either',
  );
  return $conditions;
}

/**
 * Flexifilter condition callback.
 * Returns TRUE if the phrase/regex is found in the text.
 */
function flexifilter_condition_text_search($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['find'] = array(
        '#type' => 'textfield',
        '#title' => t('Text to find'),
        '#default_value' => isset($settings['find']) ? $settings['find'] : '',
        '#required' => TRUE,
      );
      $form['is_regex'] = array(
        '#type' => 'checkbox',
        '#title' => t('Use regular expressions'),
        '#description' => t('If ticked, then the above text to find is interpreted as a regular expression.'),
        '#default_value' => isset($settings['is_regex']) ? $settings['is_regex'] : 0,
      );
      return $form;

    case 'prepare':
    case 'process':
      if (isset($settings['is_regex']) && $settings['is_regex'] == 1) {
        return preg_match('~' . str_replace('~', '\~', $settings['find']) . '~', $text) == 1;
      }
      else {
        return strpos($text, $settings['find']) !== FALSE;
      }
  }
}

/**
 * Flexifilter condition callback.
 * Returns TRUE if the text length in characters meets the user-specified condition.
 */
function flexifilter_condition_text_length($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['operator'] = array(
        '#type' => 'radios',
        '#title' => t('Operator'),
        '#options' => array(
          0 => 'Is less than',
          1 => 'Is less than or equal to',
          2 => 'Is equal to',
          3 => 'Is more than or equal to',
          4 => 'Is more than',
        ),
        '#default_value' => isset($settings['operator']) ? $settings['operator'] : 0,
        '#required' => TRUE,
      );
      $form['num'] = array(
        '#type' => 'textfield',
        '#title' => t('Length in character count'),
        '#desrciption' => t('Leave blank for teaser length.'),
        '#default_value' => isset($settings['num']) ? $settings['num'] : '',
        '#required' => TRUE,
      );
      return $form;

    case 'prepare':
    case 'process':
      $length   = drupal_strlen($text);
      $operator = isset($settings['operator']) ? $settings['operator'] : 0;
      $num      = isset($settings['num']) ? $settings['num'] : variable_get('teaser_length', 600);
      switch ($operator) {
        case 0:
          return ($length < $num);

        case 1:
          return ($length <= $num);

        case 2:
          return ($length == $num);

        case 3:
          return ($length >= $num);

        case 4:
          return ($length > $num);
      }
  }
}

/**
 * Flexifilter condition callback.
 * Returns TRUE if all of the conditions it contains are TRUE.
 */
function flexifilter_condition_group_and($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      return $form;

    case 'prepare':
    case 'process':
      foreach ($settings['conditions'] as $condition) {
        if (flexifilter_invoke_condition($condition, $op, $text) == FALSE) {
          return FALSE;
        }
      }
      return TRUE;
  }
}

/**
 * Flexifilter condition callback.
 * Returns TRUE if any of the conditions it contains are TRUE.
 */
function flexifilter_condition_group_or($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      return $form;

    case 'prepare':
    case 'process':
      foreach ($settings['conditions'] as $condition) {
        if (flexifilter_invoke_condition($condition, $op, $text) == TRUE) {
          return TRUE;
        }
      }
      return FALSE;
  }
}

/**
 * Flexifilter condition callback.
 * Returns TRUE if any of the conditions it contains are FALSE.
 */
function flexifilter_condition_group_not($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      return $form;

    case 'prepare':
    case 'process':
      foreach ($settings['conditions'] as $condition) {
        if (flexifilter_invoke_condition($condition, $op, $text) == FALSE) {
          return TRUE;
        }
      }
      return FALSE;
  }
}

/**
 * Flexifilter condition callback.
 * Returns $constant.
 *
 * @param $constant
 *   The constant to return, either TRUE or FALSE.
 */
function flexifilter_condition_constant($constant, $op, $settings, $text) {
  switch ($op) {
    case 'settings':
      return array();

    case 'prepare':
    case 'process':
      return $constant;
  }
}

/**
 * Flexifilter condition callback.
 * Returns TRUE if the current step matches $step.
 *
 * @param $step
 *   The step to match, either 'prepare' or 'process'.
 */
function flexifilter_condition_step($step, $op, $settings, $text) {
  switch ($op) {
    case 'settings':
      return array();

    case 'prepare':
    case 'process':
      return $step == $op;
  }
}

/**
 * Flexifilter condition callback.
 * Returns whatever the custom php code written by the user returns.
 * Is somewhat safe (as in it won't break your site) in that it only runs during the filtering process, thus not on every page load.
 */
function flexifilter_condition_advanced_php($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['code'] = array(
        '#type' => 'textarea',
        '#title' => t('PHP code to be evaluated.'),
        '#description' => t('Enter the code to evaluate. Does not need &lt;?php ?&gt; tags. Available variables are <em>$text</em>, which contains the text, and $op, which contains the operation, which will either be "prepare" or "process". This should return either TRUE if the condition is true or FALSE if the condition is false. WARNING: Evaluating incorrect PHP code can break your site.'),
        '#default_value' => isset($settings['code']) ? $settings['code'] : 'return TRUE;',
      );
      return $form;

    case 'prepare':
    case 'process':
      $code = isset($settings['code']) ? $settings['code'] : 'return TRUE;';
      return eval($code);
  }
}

