<?php
/**
 * @file
 * vih_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_calendar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_calendar_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_calendar_node_info() {
  $items = array(
    'vih_calendar' => array(
      'name' => t('Kalender'),
      'base' => 'node_content',
      'description' => t('Used for calendar items.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
