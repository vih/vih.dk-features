<?php
/**
 * @file
 * vih_dashboard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_dashboard_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function vih_dashboard_views_api() {
  return array("version" => "3.0");
}