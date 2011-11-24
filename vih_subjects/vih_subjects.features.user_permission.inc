<?php
/**
 * @file
 * vih_subjects.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vih_subjects_user_default_permissions() {
  $permissions = array();

  // Exported permission: create subject content
  $permissions['create subject content'] = array(
    'name' => 'create subject content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any subject content
  $permissions['delete any subject content'] = array(
    'name' => 'delete any subject content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own subject content
  $permissions['delete own subject content'] = array(
    'name' => 'delete own subject content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any subject content
  $permissions['edit any subject content'] = array(
    'name' => 'edit any subject content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own subject content
  $permissions['edit own subject content'] = array(
    'name' => 'edit own subject content',
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
