<?php
/**
 * @file
 * vih_short_course.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_short_course_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_short_course_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_short_course_node_info() {
  $items = array(
    'short_course' => array(
      'name' => t('Short Course'),
      'base' => 'node_content',
      'description' => t('Use <em>Short course</em> for short courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
