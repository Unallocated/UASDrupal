<?php

/**
 * @file
 * Hooks provided by the css3pie module
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * This hook is used to provide a list of css selectors that uses css3 in your module.
 * namespace is normally your modulename
 *
 * @return array
 */
function hook_css3pie() {
  return array(
    'namespace' => array('.selectorClass1', '.selectorClass2', '#selectorId1', '#selectorId2'),
  );
}

/**
 * Alter the css3pie module selector array before building
 *
 * @param array $data the selector array
 * @param string $mode the current bulding mode (css or js)
 */
function hook_css3pie_alter(array &$data, $mode = 'css') {
  if (isset($data['css3pie'])) {
    $data['css3pie'][] = '.newSelector';
  }
}

/**
 * @} End of "addtogroup hooks".
 */
