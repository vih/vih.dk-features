<?php
/**
 * @file
 * vih_brochures.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_brochures_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_brochure_order';
  $strongarm->value = 0;
  $export['comment_anonymous_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_brochure_order';
  $strongarm->value = '0';
  $export['comment_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_brochure_order';
  $strongarm->value = 1;
  $export['comment_default_mode_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_brochure_order';
  $strongarm->value = '50';
  $export['comment_default_per_page_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_brochure_order';
  $strongarm->value = 1;
  $export['comment_form_location_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_brochure_order';
  $strongarm->value = '1';
  $export['comment_preview_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_brochure_order';
  $strongarm->value = 1;
  $export['comment_subject_field_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_brochure_order';
  $strongarm->value = '0';
  $export['language_content_type_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_brochure_order';
  $strongarm->value = array();
  $export['menu_options_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_brochure_order';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_brochure_order';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_brochure_order';
  $strongarm->value = '0';
  $export['node_preview_brochure_order'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_brochure_order';
  $strongarm->value = 0;
  $export['node_submitted_brochure_order'] = $strongarm;

  return $export;
}
