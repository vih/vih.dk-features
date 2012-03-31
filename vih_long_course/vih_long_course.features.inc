<?php
/**
 * @file
 * vih_long_course.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_long_course_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function vih_long_course_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_long_course_node_info() {
  $items = array(
    'vih_long_course' => array(
      'name' => t('Long course'),
      'base' => 'node_content',
      'description' => t('Use <em>Long course</em> for long courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
