<?php
/**
 * @file
 * vih_middleman_redirect.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_middleman_redirect_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function vih_middleman_redirect_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_middleman_redirect_node_info() {
  $items = array(
    'middleman_redirect' => array(
      'name' => t('Middleman redirect'),
      'base' => 'node_content',
      'description' => t('Used for redirection to certain pages. Can be used if you want a more catchy title and another picture to redirect to a particular page.'),
      'has_title' => '1',
      'title_label' => t('Tekst'),
      'help' => '',
    ),
  );
  return $items;
}
