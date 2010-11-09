<?php

/**
 * Implementation of hook_node_info().
 */
function vih_subjects_node_info() {
  $items = array(
    'subject' => array(
      'name' => t('Subject'),
      'base' => 'node_content',
      'description' => t('Use when adding new subjects.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
