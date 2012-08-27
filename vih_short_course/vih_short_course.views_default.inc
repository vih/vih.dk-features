<?php
/**
 * @file
 * vih_short_course.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vih_short_course_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'short_course_types';
  $view->description = 'Used to show a block with short course types.';
  $view->tag = 'VIH';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Short course types';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'short-course-types';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'short_course_types',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sorteringskriterie: Draggableviews: Vægt */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'short_course_type' => 'short_course_type',
  );
  /* Filterkriterie: Ord i ordforråd: Klæbrig (field_sticky) */
  $handler->display->display_options['filters']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['filters']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_sticky_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_sticky_value']['group'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['display_description'] = 'Only sticky is chosen making it possible to have other types saved.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block - tekst */
  $handler = $view->new_display('block', 'Block - tekst', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'Only sticky is chosen making it possible to have other types saved.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['block_description'] = 'Korte kurser';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kursustype';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picture' => 'field_picture',
    'name' => 'name',
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
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Draggableviews: Ord i ordforråd */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'profile_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Felt: Ord i ordforråd: Klæbrig */
  $handler->display->display_options['fields']['field_sticky']['id'] = 'field_sticky';
  $handler->display->display_options['fields']['field_sticky']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['fields']['field_sticky']['field'] = 'field_sticky';
  $handler->display->display_options['fields']['field_sticky']['type'] = 'list_key';
  /* Felt: Ord i ordforråd: Link til redigering af term */
  $handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
  $handler->display->display_options['fields']['edit_term']['label'] = '';
  $handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'short_course_type' => 'short_course_type',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  $translatables['short_course_types'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Block'),
    t('Only sticky is chosen making it possible to have other types saved.'),
    t('Block - tekst'),
    t('Korte kurser'),
    t('Content pane'),
    t('Kursustype'),
    t('Navn'),
    t('Klæbrig'),
    t('View panes'),
  );
  $export['short_course_types'] = $view;

  $view = new view();
  $view->name = 'short_courses';
  $view->description = 'Show short courses';
  $view->tag = 'VIH';
  $view->base_table = 'node';
  $view->human_name = 'Short courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picture' => 'field_picture',
    'title' => 'title',
    'body' => 'title',
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
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_time' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['summary'] = 'Korte kurser på Vejle Idrætshøjskole - sommerhøjskole, familiehøjskole, familiekurser, golfhøjskole, golfkurser';
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sorteringskriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['sorts']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['sorts']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['sorts']['field_course_time_value']['field'] = 'field_course_time_value';
  /* Kontekstuelt filter: Indhold: Kursustype (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_course_type_tid']['validate_options']['vocabularies'] = array(
    'short_course_type' => 'short_course_type',
  );
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
    'short_course' => 'short_course',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['group'] = '0';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator_id'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['label'] = 'Tidspunkt -  startdato (field_course_time)';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['identifier'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = '+1 day';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Korte kurser';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'profile_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Kursustype */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['delta_offset'] = '0';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'short_course' => 'short_course',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['group'] = '0';
  $handler->display->display_options['filters']['field_course_time_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator_id'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['label'] = 'Startdato';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['identifier'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = '-40 days';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';
  $handler->display->display_options['path'] = 'admin/dashboard/short_courses/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Alle kurser';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Blok - course type */
  $handler = $view->new_display('block', 'Blok - course type', 'block_short_course_depends_type');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Used with taxonomy display on the taxonomy page.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = '<p><strong>Vi har i øjeblikket ikke nogen aktuelle kurser af den pågældende type. <a href="/nyhedsbrev">Tilmeld dig nyhedsbrevet</a> for at blive opdateret, når vi igen har aktuelle kurser.</strong></p>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Kursustype (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_course_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Korte kurser';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_course_time.field_course_time_value';
  $handler->display->display_options['path'] = 'kortekurser.xml';
  $handler->display->display_options['displays'] = array(
    'block_short_course_depends_type' => 'block_short_course_depends_type',
    'block_short_courses_quotes' => 'block_short_courses_quotes',
    'block_all_short_courses' => 'block_all_short_courses',
    'default' => 0,
    'block_short_courses_sidebar' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Ical */
  $handler = $view->new_display('feed', 'Ical', 'feed_ical');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Korte kurser';
  $handler->display->display_options['display_description'] = 'Feed i iCal format';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['description'] = 'Korte kurser på Vejle Idrætshøjskole';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_course_time.field_course_time_value';
  $handler->display->display_options['path'] = 'kortekurser.ics';
  $handler->display->display_options['displays'] = array(
    'block_short_course_depends_type' => 'block_short_course_depends_type',
    'block_short_courses_quotes' => 'block_short_courses_quotes',
    'block_all_short_courses' => 'block_all_short_courses',
    'default' => 0,
    'block_short_courses_sidebar' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Sidebar blok */
  $handler = $view->new_display('block', 'Sidebar blok', 'block_short_courses_sidebar');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'short-courses-sidebar';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['label'] = '';
  $handler->display->display_options['fields']['field_course_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Felt: Indhold: Kursustype */
  $handler->display->display_options['fields']['field_course_type']['id'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['fields']['field_course_type']['field'] = 'field_course_type';
  $handler->display->display_options['fields']['field_course_type']['label'] = '';
  $handler->display->display_options['fields']['field_course_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Kursustype (field_course_type) */
  $handler->display->display_options['arguments']['field_course_type_tid']['id'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['table'] = 'field_data_field_course_type';
  $handler->display->display_options['arguments']['field_course_type_tid']['field'] = 'field_course_type_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_course_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_course_type_tid']['validate_options']['vocabularies'] = array(
    'short_course_type' => 'short_course_type',
  );
  $handler->display->display_options['arguments']['field_course_type_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Blok - quotes */
  $handler = $view->new_display('block', 'Blok - quotes', 'block_short_courses_quotes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Relaterede kurser';
  $handler->display->display_options['display_description'] = 'Used to show related courses on the quotes pages.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'short_course_type' => 'short_course_type',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'short_course' => 'short_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = '+1 day';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Blok - all courses */
  $handler = $view->new_display('block', 'Blok - all courses', 'block_all_short_courses');
  $handler->display->display_options['display_description'] = 'Used to show all courses';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Blok - teachers */
  $handler = $view->new_display('block', 'Blok - teachers', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Underviser på følgende korte kurser';
  $handler->display->display_options['display_description'] = 'Shows which courses the teacher teaches.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_course_leader_target_id']['id'] = 'field_course_leader_target_id';
  $handler->display->display_options['relationships']['field_course_leader_target_id']['table'] = 'field_data_field_course_leader';
  $handler->display->display_options['relationships']['field_course_leader_target_id']['field'] = 'field_course_leader_target_id';
  $handler->display->display_options['relationships']['field_course_leader_target_id']['label'] = 'Indhold entity referenced from field_course_leader';
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['id'] = 'field_employee_reference_target_id';
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['table'] = 'field_data_field_employee_reference';
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['field'] = 'field_employee_reference_target_id';
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['relationship'] = 'field_course_leader_target_id';
  $handler->display->display_options['relationships']['field_employee_reference_target_id']['label'] = 'Indhold entity referenced from field_employee_reference';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail_tall',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Hvilken lærer? (field_employee_reference) */
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['id'] = 'field_employee_reference_target_id';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['table'] = 'field_data_field_employee_reference';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['field'] = 'field_employee_reference_target_id';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['relationship'] = 'field_course_leader_target_id';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_employee_reference_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Aktuelle korte kurser';
  $handler->display->display_options['display_description'] = 'Administrative view of short courses';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'profile_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Navn';
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Tidspunkt */
  $handler->display->display_options['fields']['field_course_time']['id'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['fields']['field_course_time']['field'] = 'field_course_time';
  $handler->display->display_options['fields']['field_course_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_course_time']['settings'] = array(
    'format_type' => 'medium_date_without_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'short_course' => 'short_course',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  /* Filterkriterie: Indhold: Tidspunkt -  startdato (field_course_time) */
  $handler->display->display_options['filters']['field_course_time_value']['id'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['table'] = 'field_data_field_course_time';
  $handler->display->display_options['filters']['field_course_time_value']['field'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_course_time_value']['group'] = '0';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator_id'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['label'] = 'Tidspunkt -  startdato (field_course_time)';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['operator'] = 'field_course_time_value_op';
  $handler->display->display_options['filters']['field_course_time_value']['expose']['identifier'] = 'field_course_time_value';
  $handler->display->display_options['filters']['field_course_time_value']['default_date'] = '+1 day';
  $handler->display->display_options['filters']['field_course_time_value']['year_range'] = '-0:+3';
  $translatables['short_courses'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Navn'),
    t('<h3>[title]</h3>'),
    t('Tidspunkt'),
    t('Alle'),
    t('Tidspunkt -  startdato (field_course_time)'),
    t('Side'),
    t('Korte kurser'),
    t('Kursustype'),
    t('Startdato'),
    t('Blok - course type'),
    t('Used with taxonomy display on the taxonomy page.'),
    t('<p><strong>Vi har i øjeblikket ikke nogen aktuelle kurser af den pågældende type. <a href="/nyhedsbrev">Tilmeld dig nyhedsbrevet</a> for at blive opdateret, når vi igen har aktuelle kurser.</strong></p>'),
    t('Feed'),
    t('Ical'),
    t('Feed i iCal format'),
    t('Sidebar blok'),
    t('Blok - quotes'),
    t('Relaterede kurser'),
    t('Used to show related courses on the quotes pages.'),
    t('Blok - all courses'),
    t('Used to show all courses'),
    t('Blok - teachers'),
    t('Underviser på følgende korte kurser'),
    t('Shows which courses the teacher teaches.'),
    t('Indhold entity referenced from field_course_leader'),
    t('Indhold entity referenced from field_employee_reference'),
    t('Content pane'),
    t('Aktuelle korte kurser'),
    t('Administrative view of short courses'),
    t('View panes'),
  );
  $export['short_courses'] = $view;

  return $export;
}
