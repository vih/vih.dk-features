<?php
/**
 * @file
 * vih_long_course.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vih_long_course_user_default_permissions() {
  $permissions = array();

  // Exported permission: create vih_long_course content
  $permissions['create vih_long_course content'] = array(
    'name' => 'create vih_long_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vih_long_course content
  $permissions['delete any vih_long_course content'] = array(
    'name' => 'delete any vih_long_course content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vih_long_course content
  $permissions['delete own vih_long_course content'] = array(
    'name' => 'delete own vih_long_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any vih_long_course content
  $permissions['edit any vih_long_course content'] = array(
    'name' => 'edit any vih_long_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own vih_long_course content
  $permissions['edit own vih_long_course content'] = array(
    'name' => 'edit own vih_long_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  return $permissions;
}
