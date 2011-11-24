<?php
/**
 * @file
 * vih_lectures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_lectures_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_lectures_node_info() {
  $items = array(
    'vih_lecture' => array(
      'name' => t('Foredrag'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_lectures' => array(
      'name' => t('VIH Lectures'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_partner' => array(
      'name' => t('Samarbejdspartner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function vih_lectures_views_api() {
  return array(
    'api' => '3.0',
  );
}
