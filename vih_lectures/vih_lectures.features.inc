<?php
/**
 * @file
 * vih_lectures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_lectures_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function vih_lectures_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_lectures_node_info() {
  $items = array(
    'vih_lecture' => array(
      'name' => t('Foredrag'),
      'base' => 'node_content',
      'description' => t('Bruges til at indtaste de enkelte foredrag.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_lectures' => array(
      'name' => t('Foredragsrække'),
      'base' => 'node_content',
      'description' => t('Brug <em>foredragsrække</em> til at samle foredrag, som skal udskrives i et hæfte.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_partner' => array(
      'name' => t('Samarbejdspartner'),
      'base' => 'node_content',
      'description' => t('Brug <em>samarbejdspartner</em> til organisationer, vi samarbejder med - fx omkring foredragsrækken.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
