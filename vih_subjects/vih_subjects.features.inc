<?php
/**
 * @file
 * vih_subjects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_subjects_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_subjects_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_subjects_node_info() {
  $items = array(
    'subject' => array(
      'name' => t('Subject'),
      'base' => 'node_content',
      'description' => t('Use when adding new subjects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
