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
