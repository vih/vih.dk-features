<?php
/**
 * @file
 * vih_facilities.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vih_facilities_user_default_permissions() {
  $permissions = array();

  // Exported permission: create vih_facilities content
  $permissions['create vih_facilities content'] = array(
    'name' => 'create vih_facilities content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vih_facilities content
  $permissions['delete any vih_facilities content'] = array(
    'name' => 'delete any vih_facilities content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own vih_facilities content
  $permissions['delete own vih_facilities content'] = array(
    'name' => 'delete own vih_facilities content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any vih_facilities content
  $permissions['edit any vih_facilities content'] = array(
    'name' => 'edit any vih_facilities content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own vih_facilities content
  $permissions['edit own vih_facilities content'] = array(
    'name' => 'edit own vih_facilities content',
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
