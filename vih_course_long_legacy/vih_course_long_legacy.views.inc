<?php
function vih_course_long_legacy_views_data() {
    // Define the base group of this table. Fields that don't
    // have a group defined will go into this field by default.
    $data['langtkursus']['table']['group'] = t('Long courses');
    $data['langtkursus']['table']['base'] = array(
        'field' => 'date',
        'title' => t('Long courses'),
        'help' => t('Long courses'),
        'database' => 'vih');
    $data['langtkursus']['id'] = array(
        'title' => t('Id'),
        'help' => t('Id for the course'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    $data['langtkursus']['navn'] = array(
        'title' => t('Name'),
        'help' => t('Name of the course'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'click sortable' => true,
            'argument' => array('handler' => 'views_handler_argument_string'),
            'filter' => array('handler' => 'views_handler_filter_string'),
            'sort' => array('handler' => 'views_handler_sort_string')
        );
    $data['langtkursus']['beskrivelse'] = array(
        'title' => t('Description'),
        'help' => t('Description of the course'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_string'),
            'filter' => array('handler' => 'views_handler_filter_string'),
            'sort' => array('handler' => 'views_handler_sort_string')
        );
    $data['langtkursus']['date_created'] = array(
        'title' => t('Date created'),
        'help' => t('Date course has been created'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_date'),
            'filter' => array('handler' => 'views_handler_filter_date'),
            'sort' => array('handler' => 'views_handler_sort_date')
        );
    $data['langtkursus']['date_updated'] = array(
        'title' => t('Date updated'),
        'help' => t('Date course has been updated'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_date'),
            'filter' => array('handler' => 'views_handler_filter_date'),
            'sort' => array('handler' => 'views_handler_sort_date')
        );
    $data['langtkursus']['dato_start'] = array(
        'title' => t('Start date'),
        'help' => t('Date course starts'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'click sortable' => true,
            'argument' => array('handler' => 'views_handler_argument_date'),
            'filter' => array('handler' => 'views_handler_filter_date'),
            'sort' => array('handler' => 'views_handler_sort_date')
        );
    $data['langtkursus']['dato_slut'] = array(
        'title' => t('End date'),
        'help' => t('Date course ends'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'click sortable' => true,
            'argument' => array('handler' => 'views_handler_argument_date'),
            'filter' => array('handler' => 'views_handler_filter_date'),
            'sort' => array('handler' => 'views_handler_sort_date')
        );
    $data['langtkursus']['ugeantal'] = array(
        'title' => t('Weeks'),
        'help' => t('Number of weeks'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'click sortable' => true,
            'argument' => array('handler' => 'views_handler_argument_string'),
            'filter' => array('handler' => 'views_handler_filter_string'),
            'sort' => array('handler' => 'views_handler_sort_string')
        );
    $data['langtkursus']['pris_uge'] = array(
        'title' => t('Weekly price'),
        'help' => t('Price per week'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    $data['langtkursus']['pris_rejsedepositum'] = array(
        'title' => t('Excursion price'),
        'help' => t('Price for the excursion'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    $data['langtkursus']['pris_material'] = array(
        'title' => t('Material price'),
        'help' => t('Price for the materials'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );

    $data['langtkursus']['published'] = array(
        'title' => t('Published'),
        'help' => t('Is course published'),
        'field' => array(
            'handler' => 'views_handler_field'),
            'argument' => array('handler' => 'views_handler_argument_numeric'),
            'filter' => array('handler' => 'views_handler_filter_numeric'),
            'sort' => array('handler' => 'views_handler_sort_numeric')
        );
    $data['langtkursus']['active'] = array(
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
