<?php

/**
 * Implementation of hook_field_default_fields().
 */
function vih_brochures_field_default_fields() {
  $fields = array();

  // Exported field: 'node-brochure_order-field_brochure'
  $fields['node-brochure_order-field_brochure'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '2',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_brochure',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          '0' => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => '1|Lange kurser
2|Korte kurser',
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list',
    ),
    'field_instance' => array(
      'bundle' => 'brochure_order',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Hvilken brochure vil du gerne bestille?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'rss' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_brochure',
      'label' => 'Brochure',
      'required' => 1,
      'settings' => array(),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'node-brochure_order-field_brochure_address'
  $fields['node-brochure_order-field_brochure_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_brochure_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'brochure_order',
      'default_value' => array(
        '0' => array(
          'administrative_area' => '',
          'country' => 'DK',
          'dependent_locality' => '',
          'element_key' => 'node|brochure_order|field_brochure_address|und|0',
          'locality' => '',
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => '',
          'sub_premise' => '',
          'thoroughfare' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(),
          'type' => 'addressfield_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'rss' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_brochure_address',
      'label' => 'Address',
      'required' => 1,
      'settings' => array(),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'default_country' => 'DK',
        ),
        'type' => 'addressfield_standard',
        'weight' => '-2',
      ),
    ),
  );

  // Exported field: 'node-brochure_order-field_brochure_comment'
  $fields['node-brochure_order-field_brochure_comment'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_brochure_comment',
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
          '0' => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'brochure_order',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'rss' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_brochure_comment',
      'label' => 'Comment',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-brochure_order-field_brochure_email'
  $fields['node-brochure_order-field_brochure_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_brochure_email',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'email',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'brochure_order',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(),
          'type' => 'default',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'rss' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_brochure_email',
      'label' => 'E-mail',
      'required' => 1,
      'settings' => array(),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '-1',
      ),
    ),
  );

  // Exported field: 'node-brochure_order-field_brochure_sent'
  $fields['node-brochure_order-field_brochure_sent'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_brochure_sent',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          '0' => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => '0|Brochure not sent
1|Brochure sent',
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'brochure_order',
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'rss' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_index' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_brochure_sent',
      'label' => 'Sendt',
      'required' => 0,
      'settings' => array(),
      'widget' => array(
        'active' => 0,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_onoff',
        'weight' => '1',
      ),
    ),
  );

  return $fields;
}
