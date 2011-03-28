<?php
function vih_course_short_views_data() {
    // Define the base group of this table. Fields that don't
    // have a group defined will go into this field by default.
    $data['kortkursus']['table']['group'] = t('Korte kurser');
    $data['kortkursus']['table']['base'] = array(
        'field' => 'date',
        'title' => t('Korte kurser'),
        'help' => t('Korte kurser'),
        'database' => 'vih');
    $data['kortkursus']['id'] = array(
        'title' => t('Id'),
        'help' => t('Id for the course'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    $data['kortkursus']['navn'] = array(
        'title' => t('Name'),
        'help' => t('Name of the course'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_string'),
            'filter' => array('handler' => 'views_handler_filter_string'),
            'sort' => array('handler' => 'views_handler_sort_string')
        );
    return $data;
}
