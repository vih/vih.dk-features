<?php
/**
 * @file
 * vih_participant_quotes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_participant_quotes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_participant_quotes_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_participant_quotes_node_info() {
  $items = array(
    'citater' => array(
      'name' => t('Citater'),
      'base' => 'node_content',
      'description' => t('Citater fra tidligere kursister.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
