<?php
/**
 * @file
 * vih_participant_quotes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_participant_quotes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_citater';
  $strongarm->value = '0';
  $export['language_content_type_citater'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_citater';
  $strongarm->value = array();
  $export['menu_options_citater'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_citater';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_citater'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_citater';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_citater'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_citater';
  $strongarm->value = '1';
  $export['node_preview_citater'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_citater';
  $strongarm->value = 0;
  $export['node_submitted_citater'] = $strongarm;

  return $export;
}
