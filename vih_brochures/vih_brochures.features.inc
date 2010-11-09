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
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
