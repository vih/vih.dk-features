<?php

/**
 * Implementation of hook_node_info().
 */
function vih_employees_node_info() {
  $items = array(
    'employee' => array(
      'name' => t('Employee'),
      'base' => 'node_content',
      'description' => t('Description of the employee.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
