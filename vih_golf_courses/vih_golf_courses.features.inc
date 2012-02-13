<?php
/**
 * @file
 * vih_golf_courses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_golf_courses_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_golf_courses_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_golf_courses_node_info() {
  $items = array(
    'vih_golf_courses' => array(
      'name' => t('Golfbaner'),
      'base' => 'node_content',
      'description' => t('Bruges til at beskrive golfbanerne til de korte kurser.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
