<?php
/**
 * @file
 * vih_student_quotes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_student_quotes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_vih_long_course_quotes';
  $strongarm->value = '0';
  $export['language_content_type_vih_long_course_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_vih_long_course_quotes';
  $strongarm->value = array();
  $export['menu_options_vih_long_course_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_vih_long_course_quotes';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_vih_long_course_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_vih_long_course_quotes';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_vih_long_course_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_vih_long_course_quotes';
  $strongarm->value = '1';
  $export['node_preview_vih_long_course_quotes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_vih_long_course_quotes';
  $strongarm->value = 1;
  $export['node_submitted_vih_long_course_quotes'] = $strongarm;

  return $export;
}
