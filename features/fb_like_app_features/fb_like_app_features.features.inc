<?php
/**
 * @file
 * fb_like_app_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fb_like_app_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_filefield_paths().
 */
function fb_like_app_features_default_filefield_paths() {
  $settings = array();

  // Exported node::fb_like_app::field_banner_closed
  $settings['node::fb_like_app::field_banner_closed'] = array(
    'type' => 'node::fb_like_app',
    'field' => 'field_banner_closed',
    'filename' => array(
      'value' => '[node:nid]-[node:language].[file:ffp-extension-original]',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'filepath' => array(
      'value' => 'images/fb_like_app/closed',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'active_updating' => '0',
  );
  // Exported node::fb_like_app::field_banner_like
  $settings['node::fb_like_app::field_banner_like'] = array(
    'type' => 'node::fb_like_app',
    'field' => 'field_banner_like',
    'filename' => array(
      'value' => '[node:nid]-[node:language].[file:ffp-extension-original]',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'filepath' => array(
      'value' => 'images/fb_like_app/like',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'active_updating' => '0',
  );
  // Exported node::fb_like_app::field_banner_like_bypass
  $settings['node::fb_like_app::field_banner_like_bypass'] = array(
    'type' => 'node::fb_like_app',
    'field' => 'field_banner_like_bypass',
    'filename' => array(
      'value' => '[node:nid]-[node:language].[file:ffp-extension-original]',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'filepath' => array(
      'value' => 'images/fb_like_app/like_bypass',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'active_updating' => '0',
  );
  // Exported node::fb_like_app::field_banner_liked
  $settings['node::fb_like_app::field_banner_liked'] = array(
    'type' => 'node::fb_like_app',
    'field' => 'field_banner_liked',
    'filename' => array(
      'value' => '[node:nid]-[node:language].[file:ffp-extension-original]',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'filepath' => array(
      'value' => 'images/fb_like_app/liked',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'active_updating' => '0',
  );
  // Exported node::fb_like_app::field_banner_maintenance
  $settings['node::fb_like_app::field_banner_maintenance'] = array(
    'type' => 'node::fb_like_app',
    'field' => 'field_banner_maintenance',
    'filename' => array(
      'value' => '[node:nid]-[node:language].[file:ffp-extension-original]',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'filepath' => array(
      'value' => 'images/fb_like_app/maintenance',
      'tolower' => 0,
      'pathauto' => 0,
      'transliterate' => 0,
    ),
    'active_updating' => '0',
  );

  return $settings;
}

/**
 * Implements hook_node_info().
 */
function fb_like_app_features_node_info() {
  $items = array(
    'fb_like_app' => array(
      'name' => t('Like Application'),
      'base' => 'node_content',
      'description' => t('A Facebook Like Application.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
