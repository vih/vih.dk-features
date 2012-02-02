<?php
/**
 * @file
 * vih_student_quotes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vih_student_quotes_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
