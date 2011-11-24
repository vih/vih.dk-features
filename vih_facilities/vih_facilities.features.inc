<?php
/**
 * @file
 * vih_facilities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_facilities_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_facilities_node_info() {
  $items = array(
    'vih_facilities' => array(
      'name' => t('Faciliteter'),
      'base' => 'node_content',
      'description' => '',
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
function vih_facilities_views_api() {
  return array(
    'api' => '3.0',
  );
}
