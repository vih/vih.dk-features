<?php
/**
 * @file
 * vih_stories.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_stories_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_stories_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('Use <em>stories</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function vih_stories_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
