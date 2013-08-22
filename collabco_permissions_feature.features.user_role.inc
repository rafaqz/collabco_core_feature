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

  // Exported role: Community Moderator.
  $roles['Community Moderator'] = array(
    'name' => 'Community Moderator',
    'weight' => 5,
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => 4,
  );

  // Exported role: Super Admin.
  $roles['Super Admin'] = array(
    'name' => 'Super Admin',
    'weight' => 7,
  );

  return $roles;
}
