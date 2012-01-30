<?php

/**
 * @file
 * Provides theme functions for fb_like_app module.
 */


/**
 * Override or insert variables into fb_like_app.tpl.php
 */
function template_preprocess_fb_like_app(&$vars) {
  global $fb_like_app;

  $vars['theme_hook_suggestions'] = array();
  $vars['theme_hook_suggestions'][] = 'fb__like__app';
  $vars['theme_hook_suggestions'][] = 'fb__like__app__' . $vars['node']->nid;

  $field_app_link = field_get_items('node', $vars['node'], 'field_app_link');
  $field_app_status = field_get_items('node', $vars['node'], 'field_app_status');
  $field_banner_like = field_get_items('node', $vars['node'], 'field_banner_like');
  $field_banner_liked = field_get_items('node', $vars['node'], 'field_banner_liked');
  $field_banner_closed = field_get_items('node', $vars['node'], 'field_banner_closed');
  $field_banner_maintenance = field_get_items('node', $vars['node'], 'field_banner_maintenance');

  $vars['app_link'] = $field_app_link[0]['url'];
  $vars['app_status'] = $field_app_status[0]['value'];
  $vars['banner_like'] = field_view_value('node', $vars['node'], 'field_banner_like', $field_banner_like[0]);
  $vars['banner_liked'] = field_view_value('node', $vars['node'], 'field_banner_liked', $field_banner_liked[0]);
  $vars['banner_closed'] = field_view_value('node', $vars['node'], 'field_banner_closed', $field_banner_closed[0]);
  $vars['banner_maintenance'] = field_view_value('node', $vars['node'], 'field_banner_maintenance', $field_banner_maintenance[0]);

  $vars['is_closed'] = ( $vars['app_status'] == 0 );
  $vars['is_open'] = ( $vars['app_status'] == 1 );
  $vars['is_maintenance'] = ( $vars['app_status'] == 2 );
  $vars['is_liked'] = (bool) $fb_like_app->liked;

  if ( $vars['type'] == FB_LIKE_APP_CLOSED ) {
    $vars['is_closed'] = TRUE;
  }

  if ( $vars['type'] == FB_LIKE_APP_MAINTENANCE ) {
    $vars['is_maintenance'] = TRUE;
  }

  if ( $vars['type'] == FB_LIKE_APP_LIKE ) {
    $vars['is_like'] = FALSE;
  }

  if ( $vars['type'] == FB_LIKE_APP_LIKED ) {
    $vars['is_liked'] = TRUE;
  }

  $vars['fb_like_app'] = $fb_like_app;
  $vars['fb_like_app_admin'] = theme('fb_like_app_admin', array('node' => $vars['node']));
}

/**
 * Override or insert variables into fb_like_app_admin.tpl.php
 */
function template_preprocess_fb_like_app_admin(&$vars) {
  global $fb_like_app;

  $vars['app_id'] = isset($fb_like_app->app_id) ? $fb_like_app->app_id : '';
}