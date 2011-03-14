<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function vih_brochures_user_default_permissions() {
  $permissions = array();

  // Exported permission: create brochure_order content
  $permissions['create brochure_order content'] = array(
    'name' => 'create brochure_order content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
