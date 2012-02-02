<?php
/**
 * @file
 * vih_oneliners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_oneliners_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_oneliners_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_oneliners_node_info() {
  $items = array(
    'oneliners' => array(
      'name' => t('Oneliners'),
      'base' => 'node_content',
      'description' => t('Used for oneliners - small slogans.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
