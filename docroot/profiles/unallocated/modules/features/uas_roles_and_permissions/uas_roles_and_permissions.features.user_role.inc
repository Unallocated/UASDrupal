<?php
/**
 * @file
 * uas_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function uas_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Board of Directors.
  $roles['Board of Directors'] = array(
    'name' => 'Board of Directors',
    'weight' => '5',
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => '6',
  );

  // Exported role: Keyholder.
  $roles['Keyholder'] = array(
    'name' => 'Keyholder',
    'weight' => '4',
  );

  // Exported role: UAS Member.
  $roles['UAS Member'] = array(
    'name' => 'UAS Member',
    'weight' => '3',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
