<?php
/**
 * @file
 * vih_long_course.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vih_long_course_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'lange_kurser';
  $view->description = 'Views with long courses.';
  $view->tag = 'VIH';
  $view->base_table = 'node';
  $view->human_name = 'Lange kurser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lange kurser';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picture' => 'field_picture',
    'title' => 'title',
    'body' => 'title',
    'field_course_time' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_course_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_course_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_course_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_course_time']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_course_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_course_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_course_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_course_time']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['sorts']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['sorts']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['sorts']['field_course_time_value']['field'] = 'field_course_time_value';
  /* Sorteringskriterie: Indhold: Tidspunkt - slutdato (field_course_time:value2) */
  $handler->display->display_options['sorts']['field_course_time_value2']['id'] = 'field_course_time_value2';
  $handler->display->display_options['sorts']['field_course_time_value2']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['sorts']['field_course_time_value2']['field'] = 'field_course_time_value2';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vih_long_course' => 'vih_long_course',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'title';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vih_long_course' => 'vih_long_course',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';
  $handler->display->display_options['path'] = 'langekurser.xml';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
  );

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vih_long_course' => 'vih_long_course',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = 'now -30 days';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';
  $handler->display->display_options['block_description'] = 'Tabel';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picture' => 'field_picture',
    'title' => 'title',
    'field_course_time' => 'field_course_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'profile_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_course_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_course_time']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_course_time']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_course_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_course_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_course_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_course_time']['field_api_classes'] = 0;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vih_long_course' => 'vih_long_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = 'now -30 day';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';

  /* Display: Økonomi */
  $handler = $view->new_display('block', 'Økonomi', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Prisoversigt';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_course_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_course_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_course_time']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_course_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_course_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_course_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_course_time']['field_api_classes'] = 0;
  /* Felt: Indhold: Tilmeldingsgebyr */
  $handler->display->display_options['fields']['field_registration_payment']['id'] = 'field_registration_payment';
  $handler->display->display_options['fields']['field_registration_payment']['table'] = 'field_data_field_registration_payment';
  $handler->display->display_options['fields']['field_registration_payment']['field'] = 'field_registration_payment';
  $handler->display->display_options['fields']['field_registration_payment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_registration_payment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_registration_payment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_registration_payment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_registration_payment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_registration_payment']['field_api_classes'] = 0;
  /* Felt: Indhold: Ugebetaling */
  $handler->display->display_options['fields']['field_weekly_payment']['id'] = 'field_weekly_payment';
  $handler->display->display_options['fields']['field_weekly_payment']['table'] = 'field_data_field_weekly_payment';
  $handler->display->display_options['fields']['field_weekly_payment']['field'] = 'field_weekly_payment';
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_weekly_payment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_weekly_payment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_weekly_payment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_weekly_payment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_weekly_payment']['field_api_classes'] = 0;
  /* Felt: Indhold: Materialegebyr */
  $handler->display->display_options['fields']['field_material_payment']['id'] = 'field_material_payment';
  $handler->display->display_options['fields']['field_material_payment']['table'] = 'field_data_field_material_payment';
  $handler->display->display_options['fields']['field_material_payment']['field'] = 'field_material_payment';
  $handler->display->display_options['fields']['field_material_payment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_material_payment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_material_payment']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_material_payment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_material_payment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_material_payment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_material_payment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_material_payment']['field_api_classes'] = 0;
  /* Felt: Indhold: Rejsebetaling */
  $handler->display->display_options['fields']['field_travel_payment']['id'] = 'field_travel_payment';
  $handler->display->display_options['fields']['field_travel_payment']['table'] = 'field_data_field_travel_payment';
  $handler->display->display_options['fields']['field_travel_payment']['field'] = 'field_travel_payment';
  $handler->display->display_options['fields']['field_travel_payment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_travel_payment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_travel_payment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_travel_payment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_travel_payment']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_travel_payment']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vih_long_course' => 'vih_long_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = 'now -14 days';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picture' => 'field_picture',
    'title' => 'title',
    'field_course_time' => 'field_course_time',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'profile_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_course_time']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_course_time']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_course_time']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_course_time']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_course_time']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_course_time']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_course_time']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_course_time']['field_api_classes'] = 0;
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vih_long_course' => 'vih_long_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'admin/dashboard/long_courses/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Alle kurser';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['lange_kurser'] = array(
    t('Master'),
    t('Lange kurser'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('<h3>[title]</h3>'),
    t('Tidspunkt'),
    t('Alle'),
    t('Feed'),
    t('Blok'),
    t('Tabel'),
    t('Content pane'),
    t('View panes'),
    t('Økonomi'),
    t('Prisoversigt'),
    t('Tilmeldingsgebyr'),
    t('Ugebetaling'),
    t('Materialegebyr'),
    t('Rejsebetaling'),
    t('Side'),
  );
  $export['lange_kurser'] = $view;

  return $export;
}
