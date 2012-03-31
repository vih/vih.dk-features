<?php
/**
 * @file
 * vih_student_quotes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_student_quotes_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function vih_student_quotes_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_student_quotes_node_info() {
  $items = array(
    'vih_long_course_quotes' => array(
      'name' => t('Elevcitater'),
      'base' => 'node_content',
      'description' => t('Used for quotes about the long courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
