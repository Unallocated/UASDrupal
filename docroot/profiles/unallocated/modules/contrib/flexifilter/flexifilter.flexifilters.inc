<?php
// $Id: flexifilter.flexifilters.inc,v 1.4 2008/01/22 00:48:28 cwgordon7 Exp $

/**
 * @file
 * Contains sample filters for the Flexifield module.
 */

/**
 * Implements hook_flexifilters().
 */
function flexifilter_flexifilters() {
  return array(
    array(
      'label' => 'Mediawiki Format',
      'description' => 'This is an example format which provides a wikimedia-style input format.',
      'id' => '1',
      'enabled' => TRUE,
      'advanced' => TRUE,
      'delta' => '0',
      'components' => array(
        array(
          'class' => 'flexifilter_text_prepend',
          'settings' => array(
            'text' => '</nowiki>',
            'step' => 'process',
          ),
          'id' => '2',
        ),
        array(
          'class' => 'flexifilter_text_append',
          'settings' => array(
            'text' => '<nowiki>',
            'step' => 'process',
          ),
          'id' => '3',
        ),
        array(
          'class' => 'flexifilter_chunk_grab',
          'settings' => array(
            'starts' => '</nowiki>',
            'ends' => '<nowiki>',
            'pass_limits' => 0,
            'case_sensitive' => 0,
            'include_rest' => 1,
            'step' => 'process',
            'components' => array(
              array(
                'class' => 'flexifilter_text_alternation',
                'settings' => array(
                  'find' => '====',
                  'replace' => "<h4>\n</h4>",
                  'step' => 'process',
                ),
                'id' => '5',
              ),
              array(
                'class' => 'flexifilter_text_alternation',
                'settings' => array(
                  'find' => '===',
                  'replace' => "<h3>\n</h3>",
                  'step' => 'process',
                ),
                'id' => '6',
              ),
              array(
                'class' => 'flexifilter_text_alternation',
                'settings' => array(
                  'find' => '==',
                  'replace' => "<h2>\n</h2>",
                  'step' => 'process',
                ),
                'id' => '7',
              ),
              array(
                'class' => 'flexifilter_text_alternation',
                'settings' => array(
                  'find' => '\'\'\'',
                  'replace' => "<strong>\n</strong>",
                  'step' => 'process',
                ),
                'id' => '8',
              ),
              array(
                'class' => 'flexifilter_text_alternation',
                'settings' => array(
                  'find' => '\'\'',
                  'replace' => "<em>\n</em>",
                  'step' => 'process',
                ),
                'id' => '9',
              ),
              array(
                'class' => 'flexifilter_chunk_grab',
                'settings' => array(
                  'starts' => '[[',
                  'ends' => ']]',
                  'pass_limits' => 0,
                  'case_sensitive' => 0,
                  'include_rest' => 1,
                  'step' => 'process',
                  'components' => array(
                    array(
                      'class' => 'flexifilter_control_if',
                      'settings' => array(
                        'components' => array(
                          array(
                            'class' => 'flexifilter_text_replace',
                            'settings' => array(
                              'find' => '~',
                              'replace' => '\\~',
                              'step' => 'process',
                            ),
                            'id' => '12',
                          ),
                          array(
                            'class' => 'flexifilter_text_append',
                            'settings' => array(
                              'text' => '~~',
                              'step' => 'process',
                            ),
                            'id' => '13',
                          ),
                          array(
                            'class' => 'flexifilter_advanced_append',
                            'settings' => array(
                              'step' => 'process',
                              'components' => array(
                                array(
                                  'class' => 'flexifilter_text_replace',
                                  'settings' => array(
                                    'find' => '~~',
                                    'replace' => '</a>',
                                    'step' => 'process',
                                  ),
                                  'id' => '23',
                                ),
                              ),
                            ),
                            'id' => '14',
                          ),
                          array(
                            'class' => 'flexifilter_text_replace',
                            'settings' => array(
                              'find' => '~~',
                              'replace' => '">',
                              'step' => 'process',
                            ),
                            'id' => '26',
                          ),
                          array(
                            'class' => 'flexifilter_text_prepend',
                            'settings' => array(
                              'text' => '<a href="http://en.wikipedia.org/wiki/',
                              'step' => 'process',
                            ),
                            'id' => '24',
                          ),
                          array(
                            'class' => 'flexifilter_text_replace',
                            'settings' => array(
                              'find' => '\\~',
                              'replace' => '~',
                              'step' => 'process',
                            ),
                            'id' => '28',
                          ),
                        ),
                        'condition' => array(
                          'class' => 'flexifilter_group_not',
                          'settings' => array(
                            'conditions' => array(
                              array(
                                'class' => 'flexifilter_text_search',
                                'settings' => array(
                                  'find' => '|',
                                  'is_regex' => 0,
                                ),
                              ),
                            ),
                          ),
                        ),
                      ),
                      'id' => '11',
                    ),
                    array(
                      'class' => 'flexifilter_control_if',
                      'settings' => array(
                        'components' => array(
                          array(
                            'class' => 'flexifilter_text_prepend',
                            'settings' => array(
                              'text' => '<a href="http://en.wikipedia.org/wiki/',
                              'step' => 'process',
                            ),
                            'id' => '33',
                          ),
                          array(
                            'class' => 'flexifilter_text_replace',
                            'settings' => array(
                              'find' => '|',
                              'replace' => '">',
                              'step' => 'process',
                            ),
                            'id' => '34',
                          ),
                          array(
                            'class' => 'flexifilter_text_append',
                            'settings' => array(
                              'text' => '</a>',
                              'step' => 'process',
                            ),
                            'id' => '35',
                          ),
                        ),
                        'condition' => array(
                          'class' => 'flexifilter_text_search',
                          'settings' => array(
                            'find' => '|',
                            'is_regex' => 0,
                          ),
                        ),
                      ),
                      'id' => '32',
                    ),
                  ),
                ),
                'id' => '10',
              ),
            ),
          ),
          'id' => '4',
        ),
        'id_next' => 37,
        'id_prefix' => 'flexifilter_component_',
      ),
      'fid' => 'new',
    ),
  );
}
