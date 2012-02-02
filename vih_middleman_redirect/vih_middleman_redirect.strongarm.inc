<?php
/**
 * @file
 * vih_middleman_redirect.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_middleman_redirect_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_middleman_redirect';
  $strongarm->value = '0';
  $export['language_content_type_middleman_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_middleman_redirect';
  $strongarm->value = array();
  $export['menu_options_middleman_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_middleman_redirect';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_middleman_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_middleman_redirect';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_middleman_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_middleman_redirect';
  $strongarm->value = '1';
  $export['node_preview_middleman_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_middleman_redirect';
  $strongarm->value = 0;
  $export['node_submitted_middleman_redirect'] = $strongarm;

  return $export;
}
