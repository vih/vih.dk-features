<?php

/**
 * Implementation of hook_node_info().
 */
function vih_stories_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('Use <em>stories</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function vih_stories_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
