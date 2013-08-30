<?php
/**
 * @file
 * flexslider style plugin for the Views module.
 */

/**
  * Implements a style type plugin for the Views module.
  */
class flexslider_views_plugin_style_flexslider extends views_plugin_style {

  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options += array(
      'optionset' => array('default' => 'default'),
      'id' => array('default' => ''),
    );

    return $options;
  }

  /**
   * Show a form to edit the style options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['flexslider'] = array(
      '#type' => 'fieldset',
      '#title' => t('FlexSlider'),
    );

    $optionsets = array();
    foreach (flexslider_optionset_load_all() as $name => $optionset) {
      $optionsets[$name] = check_plain($optionset->title);
    }
    $form['flexslider']['optionset'] = array(
      '#title' => t('Option set'),
      '#type' => 'select',
      '#options' => $optionsets,
      '#default_value' => $this->options['optionset'],
    );

    $link_options = array('' => t('None'));
    foreach ($this->view->display_handler->get_handlers('field') as $field => $handler) {
      $link_options[$field] = $handler->ui_name();
    }

    $form['flexslider']['id'] = array(
      '#type' => 'textfield',
      '#title' => t('Element ID'),
      '#description' => t("Manually define the FlexSlider container ID attribute <em>Ensure you don't display similar ID elements on the same page</em>."),
      '#size' => 40,
      '#maxlength' => 255,
      '#default_value' => $this->options['id'],
    );
  }

  /**
   * Performs some cleanup tasks on the options array before saving it.
   */
  function options_submit(&$form, &$form_state) {
    $options =& $form_state['values']['style_options'];

    // Pull the fieldset values one level up
    $options += $options['flexslider'];
    unset($options['flexslider']);
  }

  /**
   * Render the display in this style.
   */
  function render() {

    // Group the rows according to the grouping field, if specified.
    $sets = $this->render_grouping($this->view->result, $this->options['grouping']);

    // Render each group separately and concatenate.
    $output = '';
    foreach ($sets as $title => $rows) {
      $output .= theme($this->theme_functions(),
        array(
          'view' => $this->view,
          'options' => $this->options,
          'rows' => $rows,
          'title' => $title)
        );
    }

    return $output;
  }
}
