<?php
/**
 * @file
 * vih_lectures.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vih_lectures_user_default_permissions() {
  $permissions = array();

  // Exported permission: create vih_lectures content.
  $permissions['create vih_lectures content'] = array(
    'name' => 'create vih_lectures content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vih_lectures content.
  $permissions['delete any vih_lectures content'] = array(
    'name' => 'delete any vih_lectures content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vih_lectures content.
  $permissions['delete own vih_lectures content'] = array(
    'name' => 'delete own vih_lectures content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any vih_lectures content.
  $permissions['edit any vih_lectures content'] = array(
    'name' => 'edit any vih_lectures content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own vih_lectures content.
  $permissions['edit own vih_lectures content'] = array(
    'name' => 'edit own vih_lectures content',
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
