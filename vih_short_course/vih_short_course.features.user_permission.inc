<?php
/**
 * @file
 * vih_short_course.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vih_short_course_user_default_permissions() {
  $permissions = array();

  // Exported permission: create short_course content
  $permissions['create short_course content'] = array(
    'name' => 'create short_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any short_course content
  $permissions['delete any short_course content'] = array(
    'name' => 'delete any short_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own short_course content
  $permissions['delete own short_course content'] = array(
    'name' => 'delete own short_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any short_course content
  $permissions['edit any short_course content'] = array(
    'name' => 'edit any short_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own short_course content
  $permissions['edit own short_course content'] = array(
    'name' => 'edit own short_course content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'redaktør',
    ),
    'module' => 'node',
  );

  return $permissions;
}
