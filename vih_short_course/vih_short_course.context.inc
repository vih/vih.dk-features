<?php
/**
 * @file
 * vih_short_course.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function vih_short_course_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'short_courses';
  $context->description = 'Short courses';
  $context->tag = 'sections';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'kortekurser' => 'kortekurser',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'kortekurser',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Short courses');
  t('sections');
  $export['short_courses'] = $context;

  return $export;
}
