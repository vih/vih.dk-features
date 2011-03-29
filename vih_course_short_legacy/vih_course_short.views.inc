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
            'click sortable' => true,
            'argument' => array('handler' => 'views_handler_argument_string'),
            'filter' => array('handler' => 'views_handler_filter_string'),
            'sort' => array('handler' => 'views_handler_sort_string')
        );
    $data['kortkursus']['beskrivelse'] = array(
        'title' => t('Description'),
        'help' => t('Description of the course'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_string'),
            'filter' => array('handler' => 'views_handler_filter_string'),
            'sort' => array('handler' => 'views_handler_sort_string')
        );
    $data['kortkursus']['date_created'] = array(
        'title' => t('Date created'),
        'help' => t('Date course has been created'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_date'),
            'filter' => array('handler' => 'views_handler_filter_date'),
            'sort' => array('handler' => 'views_handler_sort_date')
        );
    $data['kortkursus']['date_updated'] = array(
        'title' => t('Date updated'),
        'help' => t('Date course has been updated'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_date'),
            'filter' => array('handler' => 'views_handler_filter_date'),
            'sort' => array('handler' => 'views_handler_sort_date')
        );
    $data['kortkursus']['dato_start'] = array(
        'title' => t('Start date'),
        'help' => t('Date course starts'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'click sortable' => true,
            'argument' => array('handler' => 'views_handler_argument_date'),
            'filter' => array('handler' => 'views_handler_filter_date'),
            'sort' => array('handler' => 'views_handler_sort_date')
        );
    $data['kortkursus']['dato_slut'] = array(
        'title' => t('End date'),
        'help' => t('Date course ends'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'click sortable' => true,
            'argument' => array('handler' => 'views_handler_argument_date'),
            'filter' => array('handler' => 'views_handler_filter_date'),
            'sort' => array('handler' => 'views_handler_sort_date')
        );
    $data['kortkursus']['uge'] = array(
        'title' => t('Week'),
        'help' => t('Week'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'click sortable' => true,
            'argument' => array('handler' => 'views_handler_argument_string'),
            'filter' => array('handler' => 'views_handler_filter_string'),
            'sort' => array('handler' => 'views_handler_sort_string')
        );
    $data['kortkursus']['pris'] = array(
        'title' => t('Price'),
        'help' => t('Price for the adults'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    $data['kortkursus']['pris_boern'] = array(
        'title' => t('Price for children'),
        'help' => t('Price for the children'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    $data['kortkursus']['published'] = array(
        'title' => t('Published'),
        'help' => t('Is course published'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    $data['kortkursus']['active'] = array(
        'title' => t('Active'),
        'help' => t('Is course active'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    return $data;
}
