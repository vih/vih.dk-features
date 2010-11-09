<?php

/**
 * Implementation of hook_node_info().
 */
function vih_course_registration_long__node_info() {
  $items = array(
    'vih_course_registration_long_' => array(
      'name' => t('VIH Course Registration (long)'),
      'base' => 'node_content',
      'description' => t('Registration for long courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
