<?php
/**
 * @file
 * vih_stories.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function vih_stories_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:nyheder
  $menu_links['main-menu:nyheder'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'nyheder',
    'router_path' => 'nyheder',
    'link_title' => 'Det sker',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Det sker');


  return $menu_links;
}
