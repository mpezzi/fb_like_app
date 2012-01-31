<?php
/**
 * @file
 * fb_like_app_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fb_like_app_features_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fb_like_app';
  $strongarm->value = 0;
  $export['comment_anonymous_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fb_like_app';
  $strongarm->value = 1;
  $export['comment_default_mode_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fb_like_app';
  $strongarm->value = '50';
  $export['comment_default_per_page_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fb_like_app';
  $strongarm->value = '1';
  $export['comment_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fb_like_app';
  $strongarm->value = 1;
  $export['comment_form_location_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fb_like_app';
  $strongarm->value = '1';
  $export['comment_preview_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fb_like_app';
  $strongarm->value = 1;
  $export['comment_subject_field_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fb_like_app';
  $strongarm->value = '4';
  $export['language_content_type_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fb_like_app';
  $strongarm->value = array();
  $export['menu_options_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fb_like_app';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fb_like_app';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fb_like_app';
  $strongarm->value = '1';
  $export['node_preview_fb_like_app'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fb_like_app';
  $strongarm->value = 0;
  $export['node_submitted_fb_like_app'] = $strongarm;

  return $export;
}
