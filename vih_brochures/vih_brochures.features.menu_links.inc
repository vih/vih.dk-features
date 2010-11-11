<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function vih_brochures_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/add/brochure-order
  $menu_links['main-menu:node/add/brochure-order'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/brochure-order',
    'router_path' => 'node/add/brochure-order',
    'link_title' => 'Order brochure',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Order brochure');


  return $menu_links;
}
