<?php
/**
 * @file
 * content_type_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_status|node|project|form';
  $field_group->group_name = 'group_project_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Status',
    'weight' => '35',
    'children' => array(
      0 => 'field_current_status',
      1 => 'field_status_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_status|node|project|form'] = $field_group;

  return $export;
}
