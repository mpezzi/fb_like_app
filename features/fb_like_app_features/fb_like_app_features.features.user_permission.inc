<?php
/**
 * @file
 * fb_like_app_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fb_like_app_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: view fb like app
  $permissions['view fb like app'] = array(
    'name' => 'view fb like app',
    'roles' => array(),
  );

  return $permissions;
}
