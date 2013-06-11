<?php
// $Id: flexifilter.components.inc,v 1.14.2.2 2008/11/22 22:23:18 cwgordon7 Exp $

/**
 * @file
 * Contains the components to be used by the Flexifield module.
 */

/**
 * Implements hook_flexifilter_components().
 *
 * @return An array of components to be used by the Flexifilter module. The keys of this array
 * are unique identifiers for the component (called the component class), and the values of the
 * array are again arrays, with the following keys:
 * - label : A human readable name for the component
 * - description (optional) : A human readable description of what the component does (defaults to none)
 * - is_container (optional) : TRUE if any of the #contains_ fields are TRUE (set automatically)\
 * - is_advanced (optional) : TRUE if the component should only be shown in component dropdown lists in advanced editing mode (defaults to FALSE)
 * - contains_condition (optional) : TRUE if the component has a condition associated with it (defaults to FALSE)
 * - contains_components (optional) : TRUE if the component has children components (defaults to FALSE)
 * - callback : A callback function which implements the component
 * - callback_arguments (optional) : An array of arguments to pass to the callback function (defaults to none)
 * - group (optional) : A human readable name of the group that the component belongs to (defaults to "Other")
 */
function flexifilter_flexifilter_components() {
  $components = array();
  // If, While, etc.
  $components['flexifilter_control_if'] = array(
    'label' => t('If'),
    'description' => t('If and only if the condition is true, then the actions are performed.'),
    'contains_condition' => TRUE,
    'contains_components' => TRUE,
    'callback' => 'flexifilter_component_if',
    'group' => t('Control Structures'),
    'step' => 'both',
  );
  $components['flexifilter_control_while'] = array(
    'label' => t('While'),
    'description' => t('While the condition is true, the actions are performed.'),
    'contains_condition' => TRUE,
    'contains_components' => TRUE,
    'callback' => 'flexifilter_component_while',
    'group' => t('Control Structures'),
    'step' => 'both',
  );

  // Simple text operations
  $components['flexifilter_text_replace'] = array(
    'label' => t('Text Replace'),
    'description' => t('Does a primtive search & replace on the text.'),
    'callback' => 'flexifilter_component_text_simple_replace',
    'group' => t('Text: Basic'),
    'step' => 'either',
  );
  $components['flexifilter_text_regex'] = array(
    'label' => t('Regex Text Replace'),
    'description' => t('Does a search & replace on the text using regular expressions.'),
    'callback' => 'flexifilter_component_text_regex_replace',
    'group' => t('Text: Intermediate'),
    'step' => 'either',
  );
  $components['flexifilter_text_alternation'] = array(
    'label' => t('Pattern-based Text Replacement'),
    'description' => t('Cycles through several replacements on the text.'),
    'callback' => 'flexifilter_component_text_pattern_replace',
    'group' => t('Text: Intermediate'),
    'step' => 'either',
  );
  $components['flexifilter_text_append'] = array(
    'label' => t('Text Append'),
    'description' => t('Appends text to the end.'),
    'callback' => 'flexifilter_component_text_append',
    'group' => t('Text: Basic'),
    'step' => 'either',
  );
  $components['flexifilter_text_prepend'] = array(
    'label' => t('Text Prepend'),
    'description' => t('Prepends text to the beginning.'),
    'callback' => 'flexifilter_component_text_prepend',
    'group' => t('Text: Basic'),
    'step' => 'either',
  );
  $components['flexifilter_text_substr'] = array(
    'label' => t('Text Slice'),
    'description' => t('"Slices" a certain number of characters off either end of the text.'),
    'callback' => 'flexifilter_component_text_substr',
    'group' => t('Text: Basic'),
    'step' => 'either',
  );
  $components['flexifilter_advanced_append'] = array(
    'label' => t('Advanced Text Append'),
    'description' => t('Appends text to the end.'),
    'callback' => 'flexifilter_component_advanced_append',
    'group' => t('Text: Intermediate'),
    'contains_components' => TRUE,
    'step' => 'either',
  );
  $components['flexifilter_advanced_prepend'] = array(
    'label' => t('Advanced Text Prepend'),
    'description' => t('Prepends text to the beginning.'),
    'callback' => 'flexifilter_component_advanced_prepend',
    'group' => t('Text: Intermediate'),
    'contains_components' => TRUE,
    'step' => 'either',
  );

  // Advanced.
  $components['flexifilter_advanced_php'] = array(
    'label' => t('PHP code'),
    'description' => t('Uses php code to modify text.'),
    'callback' => 'flexifilter_component_advanced_php',
    'group' => t('Advanced'),
    'is_advanced' => TRUE,
    'step' => 'either',
  );

  // Chunks!
  $components['flexifilter_chunk_grab'] = array(
    'label' => t('Chunk grabber'),
    'description' => t('Grabs chunks of text for further filtering and then sticks the filtered version back into the text.'),
    'callback' => 'flexifilter_component_chunk_grab',
    'group' => t('Chunks'),
    'contains_components' => TRUE,
    'step' => 'either',
  );

  // Sequences
  $components['flexifilter_basic_sequences'] = array(
    'label' => t('Basic sequences'),
    'description' => t('Choose from a variety of sequences to insert.'),
    'callback' => 'flexifilter_component_sequences',
    'group' => t('Sequences'),
    'step' => 'either',
  );

  // Allow existing filters to be used as components
  foreach (module_implements('filter') as $module) {
    if ($module !== 'flexifilter') {
      $list = module_invoke($module, 'filter', 'list');
      if (isset($list) && is_array($list)) {
        foreach ($list as $delta => $name) {
          $components['flexifilter_existing__' . $module . '__filter__' . $delta] = array(
            'label' => $name,
            'description' => module_invoke($module, 'filter', 'description', $delta),
            'callback' => 'flexifilter_existing_filter_as_component',
            'callback_arguments' => array($module, $delta),
            'group' => t('Existing Filters'),
            'step' => 'both',
          );
        }
      }
    }
  }

  // Allow existing flexifilters to be used as components
  foreach (flexifilter_get_filters(FALSE) as $fid => $filter) {
    $components['flexifilter_existing_flexifilter__' . $fid] = array(
      'label' => $filter['label'],
      'description' => $filter['description'],
      'callback' => 'flexifilter_existing_flexifilter_as_component',
      'callback_arguments' => array($fid),
      'group' => t('Existing Filters'),
      'step' => 'both',
    );
  }

  return $components;
}

/**
 * Flexifilter component callback.
 * Handles a simple text replacement through str_replace.
 */
function flexifilter_component_text_simple_replace($op, $settings, $text = '') {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['find'] = array(
        '#type' => 'textfield',
        '#title' => t('Text to find'),
        '#default_value' => isset($settings['find']) ? $settings['find'] : '',
        '#required' => TRUE,
      );
      $form['replace'] = array(
        '#type' => 'textfield',
        '#title' => t('Replacement text'),
        '#default_value' => isset($settings['replace']) ? $settings['replace'] : '',
        '#required' => FALSE,
      );
      return $form;

    case 'prepare':
    case 'process':
      return str_replace($settings['find'], isset($settings['replace']) ? $settings['replace'] : '', $text);
  }
  return $text;
}

/**
 * Flexifilter component callback.
 * Handles a more complex text replacement with regular expressions through preg_replace.
 */
function flexifilter_component_text_regex_replace($op, $settings, $text = '') {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['find'] = array(
        '#type' => 'textfield',
        '#title' => t('Text to find'),
        '#description' => t('Uses Perl compatible regular expressions'),
        '#default_value' => isset($settings['find']) ? $settings['find'] : '',
        '#required' => TRUE,
      );
      $form['replace'] = array(
        '#type' => 'textfield',
        '#title' => t('Replacement text'),
        '#description' => t('May contain references of the form $n'),
        '#default_value' => isset($settings['replace']) ? $settings['replace'] : '',
        '#required' => FALSE,
      );
      return $form;

    case 'prepare':
    case 'process':
      return preg_replace('~' . str_replace('~', '\~', $settings['find']) . '~', isset($settings['replace']) ? $settings['replace'] : '', $text);
  }
  return $text;
}

/**
 * Flexifilter component callback.
 * Handles a basic IF statement with a condition that determines whether or not its components are fired.
 */
function flexifilter_component_if($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      return $form;

    case 'prepare':
    case 'process':
      if (flexifilter_invoke_condition($settings['condition'], $op, $text) == TRUE) {
        $text = flexifilter_invoke_components($settings['components'], $op, $text);
      }
    default:
      return $text;
  }
}

/**
 * Flexifilter component callback.
 * Handles a basic WHILE statement with a condition that determines whether or not its components are fired.
 * They will be fired until the condition is FALSE or the operation times out.
 */
function flexifilter_component_while($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['limit'] = array(
        '#type' => 'textfield',
        '#title' => t('Number of iterations before abort'),
        '#description' => t('In order to prevent infinite looping, the loop will stop after a given number of iterations, even if the condition is still true.'),
        '#default_value' => isset($settings['limit']) ? $settings['limit'] : '100',
        '#required' => TRUE,
      );
      if (!isset($settings['limit'])) {
        $form['limit']['#value'] = $form['limit']['#default_value'];
      }
      return $form;

    case 'prepare':
    case 'process':
      // Optimization case; the loop is skipped if none of the components do anything
      // in this step. Also helps prevent naive infinite loops like this one:
      // while (text contains "example") replace "example" with "e.g."
      // As the replacement would only run in processing, the while loop would loop
      // forever in preparation.
      $limit = (integer) $settings['limit'];
      $n = 0;
      if (flexifilter_components_involve_step($settings['components'], $op)) {
        while (flexifilter_invoke_condition($settings['condition'], $op, $text) == TRUE) {
          $text = flexifilter_invoke_components($settings['components'], $op, $text);
          $n++;
          if ($n >= $limit) {
            drupal_set_message(t('Flexifilter while loop aborted at @count iterations. Consider tweaking the limit or condition.', array('@count' => $n)));
            break;
          }
        }
      }
    default:
      return $text;
  }
}

/**
 * Helper function for flexifilter_existing_filter_as_component.
 * Modifies the global configuration and returns a backup of the old configuration.
 *
 * @param $settings
 *   The settings to set the global configuration to.
 * @see _flexifilter_pop_conf()
 */
function _flexifilter_push_conf($settings) {
  global $conf;
  $conf_backup = $conf;
  foreach ($settings as $key => $value) {
    $conf[$key] = $value;
  }
  return $conf_backup;
}

/**
 * Helper function for flexifilter_existing_filter_as_component.
 * Sets the global configuration back to the backup.
 *
 * @param $old
 *   The old settings to revert back to.
 * @see _flexifilter_push_conf()
 */
function _flexifilter_pop_conf($old) {
  global $conf;
  $conf = $old;
}

/**
 * Flexifilter component callback.
 * Handles the usage of another filter as a component.
 *
 * @param $module
 *   The module whose filter is being called.
 * @param $delta
 *   The delta (identifier) of the filter in the module being called.
 */
function flexifilter_existing_filter_as_component($module, $delta, $op, $settings, $text) {
  global $conf;
  switch ($op) {
    case 'settings':
      $form     = array();
      $oldconf  = _flexifilter_push_conf($settings);
      $settings = module_invoke($module, 'filter', 'settings', $delta, 1, $text);
      _flexifilter_pop_conf($oldconf);
      if (is_array($settings) && count($settings) > 0) {
        foreach (element_children($settings) as $key) {
          $element = $settings[$key];
          if ($element['#type'] == 'fieldset') {
            foreach (element_children($element) as $key2) {
              $form[$key2] = $element[$key2];
            }
          }
        }
      }
      return $form;

    case 'prepare':
    case 'process':
      $oldconf = _flexifilter_push_conf($settings);
      $text = module_invoke($module, 'filter', $op, $delta, 1, $text);
      _flexifilter_pop_conf($oldconf);
      return $text;
  }
}

/**
 * Flexifilter component callback.
 * Handles the usage of another flexifilter as a component.
 *
 * @param $fid
 *   The flexifilter id of the flexifilter being used as a component.
 */
function flexifilter_existing_flexifilter_as_component($fid, $op, $settings, $text) {
  switch ($op) {
    case 'settings':
      return array();

    case 'prepare':
    case 'process':
      $filters = flexifilter_get_filters();
      $filter = $filters[$fid];
      return flexifilter_invoke_components($filter['components'], $op, $text);
  }
}

/**
 * Flexifilter component callback.
 * Replaces text based on a pattern.
 */
function flexifilter_component_text_pattern_replace($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form         = array();
      $max          = isset($settings['number']) ? $settings['number'] : '2';
      $form['find'] = array(
        '#type' => 'textfield',
        '#title' => t('Text to find'),
        '#description' => t('Enter the text that will be replaced based on a pattern.'),
        '#default_value' => isset($settings['find']) ? $settings['find'] : '',
        '#required' => TRUE,
      );
      $form['replace'] = array(
        '#type' => 'textarea',
        '#title' => t('Text to replace'),
        '#description' => t('Enter the text that will replace based on a pattern. Place separate replacements on new lines. The replacements will be cycled through. Use [[flexifilter_count]] to represent the numberth replacement this is, starting with 1.'),
        '#default_value' => isset($settings['replace']) ? $settings['replace'] : '',
        '#required' => TRUE,
      );
      return $form;

    case 'prepare':
    case 'process':
      $find    = $settings['find'];
      $i       = 0;
      $count   = 1;
      $replace = explode("\n", $settings['replace']);
      $max     = count($replace);
      foreach ($replace as $key => $value) {
        $replace[$key] = trim($value);
      }
      while (($pos = strpos($text, $find)) !== FALSE) {
        $text = flexifilter_component_text_pattern_replace_once($pos, $find, str_replace('[[flexifilter_count]]', $count, $replace[$i]), $text);
        $i++;
        $count++;
        if ($i >= $max) {
          // Reset $i.
          $i = $i - $max;
        }
      }
      return $text;
  }
}

/**
 * Helper function for flexifilter_component_text_pattern_replace. Replaces text only once.
 * Cannot use str_replace with $count because Drupal supports PHP 4.
 * GCI TODO: replace this with str_replace since D7 supports str_replace with $count.
 */
function flexifilter_component_text_pattern_replace_once($pos, $search, $replace, $subject) {
  return drupal_substr($subject, 0, $pos) . $replace . drupal_substr($subject, $pos + drupal_strlen($search));
}

/**
 * Flexifilter component callback.
 * Grabs chunks of text based on starting and ending tags.
 */
function flexifilter_component_chunk_grab($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['starts'] = array(
        '#type' => 'textfield',
        '#title' => t('Chunk starts with'),
        '#description' => t('Enter the text that the chunk will start with.'),
        '#default_value' => isset($settings['starts']) ? $settings['starts'] : '[',
        '#required' => TRUE,
      );
      $form['ends'] = array(
        '#type' => 'textfield',
        '#title' => t('Chunk ends with'),
        '#description' => t('Enter the text that the chunk will end with.'),
        '#default_value' => isset($settings['ends']) ? $settings['ends'] : ']',
        '#required' => TRUE,
      );
      $form['pass_limits'] = array(
        '#type' => 'checkbox',
        '#title' => t('Pass delimiters'),
        '#description' => t('Should the delimiters be passed into the chunk?'),
        '#default_value' => isset($settings['pass_limits']) ? $settings['pass_limits'] : FALSE,
      );
      $form['case_sensitive'] = array(
        '#type' => 'checkbox',
        '#title' => t('Case sensitive'),
        '#description' => t('This option will make the chunk selection case-sensitive if checked.'),
        '#default_value' => isset($settings['case_sensitive']) ? $settings['case_sensitive'] : TRUE,
      );
      $form['include_rest'] = array(
        '#type' => 'checkbox',
        '#title' => t('Include rest'),
        '#description' => t('This option will make everything not selected by the chunk grabber, although not passed into the chunk, passed out of the grabber.'),
        '#default_value' => isset($settings['include_rest']) ? $settings['include_rest'] : TRUE,
      );
      return $form;

    case 'prepare':
    case 'process':
      $start          = $settings['starts'];
      $end            = $settings['ends'];
      $pass_limits    = $settings['pass_limits'];
      $case_sensitive = $settings['case_sensitive'];
      $include_rest   = $settings['include_rest'];
      $chunk          = '';
      $pos            = 0;
      $endpos         = 0;
      $tmp            = '';
      $tmp2           = '';
      while ($pos !== FALSE && $endpos !== FALSE) {
        $pos = $case_sensitive ? strpos($text, $start) : stripos($text, $start);
        if ($include_rest) {
          $tmp = drupal_substr($text, 0, $pos);
        }
        if ($pos !== FALSE) {
          $endpos = $case_sensitive ? strpos($text, $end) : stripos($text, $end);
          if ($endpos !== FALSE) {
            if ($include_rest) {
              $tmp2 = drupal_substr($text, $endpos + drupal_strlen($end));
            }
            if ($pass_limits) {
              $endpos = $endpos + drupal_strlen($end);
            }
            else {
              $pos = $pos + drupal_strlen($start);
            }
            $chunk = drupal_substr($text, $pos, $endpos - $pos);
            $tmp .= flexifilter_invoke_components($settings['components'], $op, $chunk);
            $tmp .= $tmp2;
            $text = $tmp;
          }
        }
      }
      return $text;
  }
}

/**
 * Flexifilter component callback.
 * Simple text append.
 */
function flexifilter_component_text_append($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['text'] = array(
        '#type' => 'textfield',
        '#title' => t('Text to append'),
        '#description' => t('Enter the text to append.'),
        '#default_value' => isset($settings['text']) ? $settings['text'] : '',
      );
      return $form;

    case 'prepare':
    case 'process':
      $append = isset($settings['text']) ? $settings['text'] : '';
      return $text . $append;
  }
}

/**
 * Flexifilter component callback.
 * Simple text prepend.
 */
function flexifilter_component_text_prepend($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['text'] = array(
        '#type' => 'textfield',
        '#title' => t('Text to prepend'),
        '#description' => t('Enter the text to prepend.'),
        '#default_value' => isset($settings['text']) ? $settings['text'] : '',
      );
      return $form;

    case 'prepare':
    case 'process':
      $prepend = isset($settings['text']) ? $settings['text'] : '';
      return $prepend . $text;
  }
}

/**
 * Flexifilter component callback.
 * "Slices" some text off.
 */
function flexifilter_component_text_substr($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['substr_start'] = array(
        '#type' => 'textfield',
        '#title' => t('The number of characters in at which to slice'),
        '#description' => t('The number of characters in at which to slice. Negative numbers will slice from the end. 0 doesn\'t do anything, 1 slices off the first character, and -1 slices off everything except the last character.'),
        '#default_value' => isset($settings['substr_start']) ? $settings['substr_start'] : '0',
      );
      $form['substr_length'] = array(
        '#type' => 'textfield',
        '#title' => t('The maximum number of characters to allow in this slice.'),
        '#description' => t('The number of characters in at which to slice. Negative numbers will slice from the end. Leave this empty for it not to do anything, 1 allows only one character, and -1 takes off one character from the end.'),
        '#default_value' => isset($settings['substr_length']) ? $settings['substr_length'] : '',
      );
      return $form;

    case 'prepare':
    case 'process':
      $substr_start = isset($settings['substr_start']) ? $settings['substr_start'] : '0';
      $substr_length = isset($settings['substr_length']) ? $settings['substr_length'] : '';
      if ($substr_length === '') {
        return drupal_substr($text, $substr_start);
      }
      return drupal_substr($text, $substr_start, $substr_length);
  }
}

/**
 * Flexifilter component callback.
 * Allows user to enter php code to be evaluated during filtering process. (So somewhat safe as in it won't be evaluated on every page load).
 */
function flexifilter_component_advanced_php($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['code'] = array(
        '#type' => 'textarea',
        '#title' => t('PHP code to be evaluated.'),
        '#description' => t('Enter the code to evaluate. Does not need &lt;?php ?&gt; tags. Available variables are <em>$text</em>, which contains the text, and <em>$op</em>, which contains the operation, which will either be "prepare" or "process". This should return the text. WARNING: Evaluating incorrect PHP code can break your site.'),
        '#default_value' => isset($settings['code']) ? $settings['code'] : 'return $text;',
      );
      return $form;

    case 'prepare':
    case 'process':
      $code = isset($settings['code']) ? $settings['code'] : 'return $text;';
      return eval($code);
  }
}

/**
 * Flexifilter component callback.
 * Appends text based on the text passed back from the text passed in to the components which represents the entire text passed into this component.
 */
function flexifilter_component_advanced_append($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      return $form;

    case 'prepare':
    case 'process':
      $append = flexifilter_invoke_components($settings['components'], $op, $text);
      return $text . $append;
  }
}

/**
 * Flexifilter component callback.
 * Prepends text based on the text passed back from the text passed in to the components which represents the entire text passed into this component.
 */
function flexifilter_component_advanced_prepend($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      return $form;

    case 'prepare':
    case 'process':
      $prepend = flexifilter_invoke_components($settings['components'], $op, $text);
      return $prepend . $text;
  }
}

/**
 * Basic sequence callback.
 */
function flexifilter_component_sequences($op, $settings, $text) {
  switch ($op) {
    case 'settings':
      $form = array();
      $form['text'] = array(
        '#type' => 'textfield',
        '#title' => t('Text to replace'),
        '#description' => t('Enter the text to replace. Leave blank for simple insertion.'),
        '#default_value' => isset($settings['text']) ? $settings['text'] : '',
      );
      $form['sequence'] = array(
        '#type' => 'radios',
        '#title' => t('Sequence type'),
        '#options' => module_invoke_all('flexifilter_sequences'),
        '#default_value' => 'flexifilter_sequence_numbers',
      );
      return $form;

    case 'prepare':
    case 'process':
      static $_flexifilter_sequence_count = 0;
      if (!empty($settings['text'])) {
        while (flexifilter_sequences_replace_once($settings['text'], call_user_func($settings['sequence'], $_flexifilter_sequence_count), $text)) {
          $_flexifilter_sequence_count++;
        }
        return $text;
      }
      return call_user_func($settings['sequence'], $_flexifilter_sequence_count);
  }
}

function flexifilter_sequences_replace_once($search, $replace, &$subject) {
  if (($pos = strpos($subject, $search)) !== FALSE) {
    $subject = drupal_substr($subject, 0, $pos) . $replace . drupal_substr($subject, $pos + drupal_strlen($search));
    return TRUE;
  }
  return FALSE;
}

/**
 * Implements hook_flexifilter_sequences().
 */
function flexifilter_flexifilter_sequences() {
  return array(
    'flexifilter_sequence_numbers' => t('Simple numbers'),
    'flexifilter_sequence_letters_uc' => t('Letters, upper case'),
    'flexifilter_sequence_letters_lc' => t('Letters, lower case'),
  );
}

/**
 * Sequence callback: simple numbers.
 */
function flexifilter_sequence_numbers($num) {
  return $num + 1;
}

function flexifilter_sequence_letters_uc($num) {
  return drupal_strtoupper(flexifilter_sequence_letters_lc($num));
}

function flexifilter_sequence_letters_lc($num) {
  $letters = array('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z');
  return $letters[$num % 26];
}
