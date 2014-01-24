<?php
/**
 * @file
 * uas_contact_form.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function uas_contact_form_field_default_fields() {
  $fields = array();

  // Exported field: 'entityform-contact_form-field_agency_or_entity_represent'.
  $fields['entityform-contact_form-field_agency_or_entity_represent'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_agency_or_entity_represent',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '64',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'contact_form',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_agency_or_entity_represent',
      'label' => 'Agency or Entity Representing',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'entityform-contact_form-field_contact_email'.
  $fields['entityform-contact_form-field_contact_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contact_email',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '64',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'contact_form',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_email',
      'label' => 'Email',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'entityform-contact_form-field_contact_inquiry'.
  $fields['entityform-contact_form-field_contact_inquiry'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contact_inquiry',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'contact_form',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_inquiry',
      'label' => 'Inquiry',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
        ),
        'type' => 'text_textarea',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'entityform-contact_form-field_contact_name'.
  $fields['entityform-contact_form-field_contact_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contact_name',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '64',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'contact_form',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'So that we know who to address when responding to your inquiry.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_name',
      'label' => 'Name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'entityform-contact_form-field_contact_type_of_inquiry'.
  $fields['entityform-contact_form-field_contact_type_of_inquiry'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contact_type_of_inquiry',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'general' => 'General Questions',
          'complaints' => 'Complaints',
          'governance' => 'Governance Questions',
          'website_feedback' => 'Website Feedback',
          'board' => 'Board Inquiries',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'contact_form',
      'default_value' => array(
        0 => array(
          'value' => 'general',
        ),
      ),
      'deleted' => '0',
      'description' => 'This helps us direct your inquiry to the right place. Available Options:<br />
<ul>
<li><strong>General Questions:</strong> New to Unallocated? Never been? These questions are answered by our very own Keyholders. We\'re happy to answer.</li>
<li><strong>Activities:</strong> Want to get involved with a project or class, but don\'t know how?</li>
<li><strong>Complaints:</strong> I promise, we pay attention to these.</li>
<li><strong>Governance Questions:</strong> Governance is a little crazy here. We\'ll clarify whatever we can on how this place runs.</li>
<li><strong>Website Feedback:</strong> Pipes directly to /dev/null</li>
<li><strong>Board Inquiries:</strong> Questions regarding space finance, legal, or marketing/press. Please do not abuse, we would like to sleep now and then.</li>
</ul>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_type_of_inquiry',
      'label' => 'Type of Inquiry',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 0,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Agency or Entity Representing');
  t('Email');
  t('Inquiry');
  t('Name');
  t('So that we know who to address when responding to your inquiry.');
  t('This helps us direct your inquiry to the right place. Available Options:<br />
<ul>
<li><strong>General Questions:</strong> New to Unallocated? Never been? These questions are answered by our very own Keyholders. We\'re happy to answer.</li>
<li><strong>Activities:</strong> Want to get involved with a project or class, but don\'t know how?</li>
<li><strong>Complaints:</strong> I promise, we pay attention to these.</li>
<li><strong>Governance Questions:</strong> Governance is a little crazy here. We\'ll clarify whatever we can on how this place runs.</li>
<li><strong>Website Feedback:</strong> Pipes directly to /dev/null</li>
<li><strong>Board Inquiries:</strong> Questions regarding space finance, legal, or marketing/press. Please do not abuse, we would like to sleep now and then.</li>
</ul>');
  t('Type of Inquiry');

  return $fields;
}
