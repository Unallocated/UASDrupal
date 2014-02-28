<?php
/**
 * @file
 * Mandrill Template entity class
 */

class MandrillTemplateMap extends Entity {
  public
    $mandrill_template_map_entity_id,
    $name,
    $label,
    $mailsystem_key,
    $template_id,
    $main_section,
    $sections;

  /**
   * Return a new entity instance of type mandrill_template_map.
   *
   * @param array $values
   */
  public function __construct(array $values = array()) {
    parent::__construct($values, 'mandrill_template_map');
  }

  /**
   * Specify URI.
   */
  protected function defaultUri() {
    return array('path' => 'admin/config/services/mandrill/templates/' . $this->identifier());
  }

  /**
   * Generate the arguments that are required for sending templates.
   * 
   * @return array
   *   An associative array containing message template arguments.
   */
  public function message_send_arguments($message) {
    return array(
      'id' => $this->template_id,
      'template_content' => array(
        '0' => array(
          'name' => $this->main_section,
          'content_postprocess' => 'html',
        ),
      ),
    );
  }
}
