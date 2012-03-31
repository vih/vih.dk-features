<?php
/**
 * @file
 * vih_viggo.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function vih_viggo_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'viggo_calendar';
  $feeds_importer->config = array(
    'name' => 'Viggo Kalender',
    'description' => 'Imports calendar items from Viggo.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'ParserIcalCreator',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'vih_calendar',
        'expire' => '-1',
        'author' => '3',
        'mappings' => array(
          0 => array(
            'source' => 'summary',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'dtstart',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'dtend',
            'target' => 'field_date:end',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'uid',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['viggo_calendar'] = $feeds_importer;

  return $export;
}
