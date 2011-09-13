<?php
/**
 * @file
 * vih_subjects.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function vih_subjects_views_default_views() {
  $views = array();

  // Exported view: rejser
  $view = new view;
  $view->name = 'rejser';
  $view->description = 'List with different travels made throughout the year.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Travel';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Rejser';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_picture' => 'field_picture',
    'body' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
    ),
    'field_picture' => array(
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
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Forbindelse: Indhold: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Felt: Indhold: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'subject' => 'subject',
  );
  /* Filterkriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Rejser';
  $handler->display->display_options['filters']['name']['expose']['required'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'rejser';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Rejser';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['rejser'] = array(
    t('Master'),
    t('Rejser'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('term'),
    t('Page'),
  );

  $views[$view->name] = $view;

  // Exported view: subject_packages
  $view = new view;
  $view->name = 'subject_packages';
  $view->description = 'View with the different subject packages for the long courses.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Subject Packages';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<strong>[name]</strong>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Felt: Ord i ordforråd: Billede */
  $handler->display->display_options['fields']['field_tags_picture']['id'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['table'] = 'field_data_field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['field'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['label'] = '';
  $handler->display->display_options['fields']['field_tags_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tags_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_tags_picture']['field_api_classes'] = 0;
  /* Felt: Ord i ordforråd: Billede */
  $handler->display->display_options['fields']['field_tags_picture_1']['id'] = 'field_tags_picture_1';
  $handler->display->display_options['fields']['field_tags_picture_1']['table'] = 'field_data_field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture_1']['field'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tags_picture_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_tags_picture_1']['field_api_classes'] = 0;
  /* Filterkriterie: Ordforråd: Maskinnavn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'subject_packages' => 'subject_packages',
  );

  /* Display: Block - forside */
  $handler = $view->new_display('block', 'Block - forside', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<strong>[name]</strong>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Felt: Ord i ordforråd: Billede */
  $handler->display->display_options['fields']['field_tags_picture']['id'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['table'] = 'field_data_field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['field'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['label'] = '';
  $handler->display->display_options['fields']['field_tags_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tags_picture']['settings'] = array(
    'image_style' => 'frontpage_slideshow_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_tags_picture']['field_api_classes'] = 0;
  /* Felt: Ord i ordforråd: Billede */
  $handler->display->display_options['fields']['field_tags_picture_1']['id'] = 'field_tags_picture_1';
  $handler->display->display_options['fields']['field_tags_picture_1']['table'] = 'field_data_field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture_1']['field'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture_1']['label'] = '';
  $handler->display->display_options['fields']['field_tags_picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_picture_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tags_picture_1']['settings'] = array(
    'image_style' => 'frontpage_slideshow_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_tags_picture_1']['field_api_classes'] = 0;

  /* Display: Forside - slideshow */
  $handler = $view->new_display('block', 'Forside - slideshow', 'block_2');
  $handler->display->display_options['display_description'] = 'Blok til forsiden som skifter billeder automatisk.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'name' => 0,
    'field_tags_picture' => 0,
    'field_tags_picture_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'name' => 'name',
    'field_tags_picture_1' => 'field_tags_picture_1',
    'field_tags_picture' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Billede */
  $handler->display->display_options['fields']['field_tags_picture']['id'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['table'] = 'field_data_field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['field'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture']['label'] = '';
  $handler->display->display_options['fields']['field_tags_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tags_picture']['settings'] = array(
    'image_style' => 'frontpage_slideshow_large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_tags_picture']['field_api_classes'] = 0;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="transparent">
<h2>[name]</h2>
</div>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Felt: Ord i ordforråd: Billede */
  $handler->display->display_options['fields']['field_tags_picture_1']['id'] = 'field_tags_picture_1';
  $handler->display->display_options['fields']['field_tags_picture_1']['table'] = 'field_data_field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture_1']['field'] = 'field_tags_picture';
  $handler->display->display_options['fields']['field_tags_picture_1']['label'] = '';
  $handler->display->display_options['fields']['field_tags_picture_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_picture_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tags_picture_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_tags_picture_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tags_picture_1']['settings'] = array(
    'image_style' => 'frontpage_slideshow_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_tags_picture_1']['field_api_classes'] = 0;
  $translatables['subject_packages'] = array(
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
    t('<strong>[name]</strong>'),
    t('Billede'),
    t('Block - forside'),
    t('Block'),
    t('Forside - slideshow'),
    t('Blok til forsiden som skifter billeder automatisk.'),
    t('<div class="transparent">
<h2>[name]</h2>
</div>'),
  );

  $views[$view->name] = $view;

  // Exported view: subjects
  $view = new view;
  $view->name = 'subjects';
  $view->description = 'View with all the subjects for the long courses.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subjects';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fag - sammensæt dit eget skema';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '60';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = 'field_terms';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<p>For os er idræt en møde at være sammen på og et middel til at opleve egne og andres muligheder. Idræt er personlighedsudviklende, men personlig udvikling er andet og mere end idræt, derfor lægger vi vægt på musiske, kreative og andre mere bløde fag.</p><p>På Vejle Idrætshøjskole får du en leder- og instruktøruddannelse i en af de syv idrætsgrene, men de fleste af vores elever, fremhæver ofte alle fagene omkring idrætten som deres primære udbytte.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Forbindelse: Indhold: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 1;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'subject_category' => 'subject_category',
    'tags' => 0,
    'subject_packages' => 0,
  );
  /* Felt: Indhold: Kategori */
  $handler->display->display_options['fields']['field_terms']['id'] = 'field_terms';
  $handler->display->display_options['fields']['field_terms']['table'] = 'field_data_field_terms';
  $handler->display->display_options['fields']['field_terms']['field'] = 'field_terms';
  $handler->display->display_options['fields']['field_terms']['label'] = '';
  $handler->display->display_options['fields']['field_terms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_terms']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_terms']['alter']['text'] = '<h2>[field_terms]</h2>';
  $handler->display->display_options['fields']['field_terms']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_terms']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_terms']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_terms']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_terms']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_terms']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_terms']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_terms']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_terms']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sorteringskriterie: Ord i ordforråd: Vægt */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'term_node_tid';
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
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
    'subject' => 'subject',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_terms';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'fag';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Fag';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = 'field_terms';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_picture']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Kategori */
  $handler->display->display_options['fields']['field_terms']['id'] = 'field_terms';
  $handler->display->display_options['fields']['field_terms']['table'] = 'field_data_field_terms';
  $handler->display->display_options['fields']['field_terms']['field'] = 'field_terms';
  $handler->display->display_options['fields']['field_terms']['label'] = '';
  $handler->display->display_options['fields']['field_terms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_terms']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_terms']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_terms']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_terms']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_terms']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_terms']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_terms']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_terms']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_terms']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_terms']['field_api_classes'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  $handler->display->display_options['pane_title'] = 'Subjects for taxonomy';
  $handler->display->display_options['pane_category']['name'] = 'Subjects';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );
  $translatables['subjects'] = array(
    t('Master'),
    t('Fag - sammensæt dit eget skema'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('<p>For os er idræt en møde at være sammen på og et middel til at opleve egne og andres muligheder. Idræt er personlighedsudviklende, men personlig udvikling er andet og mere end idræt, derfor lægger vi vægt på musiske, kreative og andre mere bløde fag.</p><p>På Vejle Idrætshøjskole får du en leder- og instruktøruddannelse i en af de syv idrætsgrene, men de fleste af vores elever, fremhæver ofte alle fagene omkring idrætten som deres primære udbytte.</p>'),
    t('term'),
    t('<h2>[field_terms]</h2>'),
    t('<strong>[title]</strong>'),
    t('Alle'),
    t('Page'),
    t('Blok'),
    t('Content pane'),
    t('Subjects for taxonomy'),
    t('Subjects'),
  );

  $views[$view->name] = $view;

  return $views;
}
