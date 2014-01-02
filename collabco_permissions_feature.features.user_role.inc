<?php
/**
 * @file
 * collabco_permissions_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function collabco_permissions_feature_user_default_roles() {
  $roles = array();

  // Exported role: Admin.
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => 2,
  );

  // Exported role: Moderator.
  $roles['Moderator'] = array(
    'name' => 'Moderator',
    'weight' => 4,
  );

  return $roles;
}
