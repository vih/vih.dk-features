<?php
/**
 * @file
 * vih_brochures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_brochures_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_brochures_node_info() {
  $items = array(
    'brochure_order' => array(
      'name' => t('Brochure Order'),
      'base' => 'node_content',
      'description' => t('Used for ordering brochure ordering'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => t('Du kan bestille vores magasin og dvd om de lange kurser eller vores brochure om de korte kurser.'),
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function vih_brochures_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
