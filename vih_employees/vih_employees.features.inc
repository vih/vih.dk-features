<?php
/**
 * @file
 * vih_employees.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_employees_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
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

/**
 * Implements hook_views_api().
 */
function vih_employees_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
