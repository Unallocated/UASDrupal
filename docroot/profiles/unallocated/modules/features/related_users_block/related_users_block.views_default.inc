<?php
/**
 * @file
 * related_users_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function related_users_block_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_users';
  $view->description = 'Utility view for use as a global filter with the related users view.';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Related Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Skills (field_skills) */
  $handler->display->display_options['relationships']['field_skills_tid']['id'] = 'field_skills_tid';
  $handler->display->display_options['relationships']['field_skills_tid']['table'] = 'field_data_field_skills';
  $handler->display->display_options['relationships']['field_skills_tid']['field'] = 'field_skills_tid';
  $handler->display->display_options['relationships']['field_skills_tid']['required'] = TRUE;
  /* Relationship: Taxonomy term: User using Interests */
  $handler->display->display_options['relationships']['reverse_field_interests_user']['id'] = 'reverse_field_interests_user';
  $handler->display->display_options['relationships']['reverse_field_interests_user']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_interests_user']['field'] = 'reverse_field_interests_user';
  $handler->display->display_options['relationships']['reverse_field_interests_user']['relationship'] = 'field_skills_tid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Biography */
  $handler->display->display_options['fields']['field_biography']['id'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['table'] = 'field_data_field_biography';
  $handler->display->display_options['fields']['field_biography']['field'] = 'field_biography';
  $handler->display->display_options['fields']['field_biography']['label'] = '';
  $handler->display->display_options['fields']['field_biography']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_biography']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_biography']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Field: Skills */
  $handler->display->display_options['fields']['field_skills']['id'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['table'] = 'field_data_field_skills';
  $handler->display->display_options['fields']['field_skills']['field'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['label'] = '';
  $handler->display->display_options['fields']['field_skills']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_skills']['delta_offset'] = '0';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['not'] = TRUE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['related_users'] = $view;

  return $export;
}
