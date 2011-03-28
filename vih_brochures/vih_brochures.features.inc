<?php

/**
 * Implementation of hook_node_info().
 */
function vih_brochures_node_info() {
  $items = array(
    'brochure_order' => array(
      'name' => t('Brochure Order'),
      'base' => 'node_content',
      'description' => t('Used for ordering brochure ordering'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Du kan bestille vores magasin og dvd om de lange kurser eller vores brochure om de korte kurser.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function vih_brochures_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
