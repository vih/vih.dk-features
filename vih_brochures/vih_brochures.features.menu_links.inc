<?php
/**
 * @file
 * vih_brochures.features.menu_links.inc
 */

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
    'link_title' => 'Bestilling',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bestilling');


  return $menu_links;
}
