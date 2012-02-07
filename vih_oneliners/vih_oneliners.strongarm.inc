<?php
/**
 * @file
 * vih_oneliners.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_oneliners_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_oneliners';
  $strongarm->value = '0';
  $export['language_content_type_oneliners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_oneliners';
  $strongarm->value = array();
  $export['menu_options_oneliners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_oneliners';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_oneliners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_oneliners';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_oneliners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_oneliners';
  $strongarm->value = '1';
  $export['node_preview_oneliners'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_oneliners';
  $strongarm->value = 1;
  $export['node_submitted_oneliners'] = $strongarm;

  return $export;
}