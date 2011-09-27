<?php
/**
 * @file
 * vih_course.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function vih_course_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function vih_course_node_info() {
  $items = array(
    'course_long' => array(
      'name' => t('Course (long)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_period' => array(
      'name' => t('Course period'),
      'base' => 'node_content',
      'description' => t('A period where courses take place. A course consists of one or more periods.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_subject' => array(
      'name' => t('Course subject'),
      'base' => 'node_content',
      'description' => t('A subject for courses. Swimming, Danish, Football, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course_subject_group' => array(
      'name' => t('Course subject group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
