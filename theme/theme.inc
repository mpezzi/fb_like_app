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

  $field_app_status = field_get_items('node', $vars['node'], 'field_app_status');

  $vars['app_status'] = $field_app_status[0]['value'];

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

  // Sections.
  $vars['admin'] = theme('fb_like_app_admin', array('node' => $vars['node']));
  $vars['closed'] = theme('fb_like_app_closed', array('node' => $vars['node']));
  $vars['maintenance'] = theme('fb_like_app_maintenance', array('node' => $vars['node']));
  $vars['liked'] = theme('fb_like_app_liked', array('node' => $vars['node']));
  $vars['like'] = theme('fb_like_app_like', array('node' => $vars['node']));
}

/**
 * Override or insert variables into fb_like_app_like.tpl.php
 */
function template_preprocess_fb_like_app_like(&$vars) {
  $vars['theme_hook_suggestions'] = array();
  $vars['theme_hook_suggestions'][] = 'fb__like__app__like';
  $vars['theme_hook_suggestions'][] = 'fb__like__app__like__' . $vars['node']->nid;

  $field_app_link = field_get_items('node', $vars['node'], 'field_app_link');
  $field_banner_like = field_get_items('node', $vars['node'], 'field_banner_like');

  $vars['link'] = $field_app_link[0]['url'];
  $vars['content'][] = field_view_value('node', $vars['node'], 'field_banner_like', $field_banner_like[0]);
}

/**
 * Override or insert variables into fb_like_app_liked.tpl.php
 */
function template_preprocess_fb_like_app_liked(&$vars) {
  $vars['theme_hook_suggestions'] = array();
  $vars['theme_hook_suggestions'][] = 'fb__like__app__liked';
  $vars['theme_hook_suggestions'][] = 'fb__like__app__liked__' . $vars['node']->nid;

  $field_app_link = field_get_items('node', $vars['node'], 'field_app_link');
  $field_banner_liked = field_get_items('node', $vars['node'], 'field_banner_liked');

  $vars['link'] = $field_app_link[0]['url'];
  $vars['content'][] = field_view_value('node', $vars['node'], 'field_banner_liked', $field_banner_liked[0]);
}

/**
 * Override or insert variables into fb_like_app_closed.tpl.php
 */
function template_preprocess_fb_like_app_closed(&$vars) {
  $vars['theme_hook_suggestions'] = array();
  $vars['theme_hook_suggestions'][] = 'fb__like__app__closed';
  $vars['theme_hook_suggestions'][] = 'fb__like__app__closed__' . $vars['node']->nid;

  $field_banner_closed = field_get_items('node', $vars['node'], 'field_banner_closed');

  $vars['content'][] = field_view_value('node', $vars['node'], 'field_banner_closed', $field_banner_closed[0]);
}

/**
 * Override or insert variables into fb_like_app_maintenance.tpl.php
 */
function template_preprocess_fb_like_app_maintenance(&$vars) {
  $vars['theme_hook_suggestions'] = array();
  $vars['theme_hook_suggestions'][] = 'fb__like__app__maintenance';
  $vars['theme_hook_suggestions'][] = 'fb__like__app__maintenance__' . $vars['node']->nid;

  $field_banner_maintenance = field_get_items('node', $vars['node'], 'field_banner_maintenance');

  $vars['content'][] = field_view_value('node', $vars['node'], 'field_banner_maintenance', $field_banner_maintenance[0]);
}

/**
 * Override or insert variables into fb_like_app_admin.tpl.php
 */
function template_preprocess_fb_like_app_admin(&$vars) {
  global $fb_like_app;

  $vars['app_id'] = isset($fb_like_app->app_id) ? $fb_like_app->app_id : '';
  $vars['channel_url'] = url('fb_like_app/channel', array('absolute' => TRUE));
  $vars['redirect_url'] = url('node/' . $vars['node']->nid . '/' . FB_LIKE_APP_TASK, array('absolute' => TRUE));
}