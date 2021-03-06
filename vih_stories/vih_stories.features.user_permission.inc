<?php
/**
 * @file
 * vih_stories.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vih_stories_user_default_permissions() {
  $permissions = array();

  // Exported permission: create story content.
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any story content.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own story content.
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any story content.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      0 => 'administrator',
      1 => 'kontor',
      2 => 'lærer',
      3 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own story content.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
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
