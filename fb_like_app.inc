<?php

/**
 * @file
 * Provides internal functions Facebook Like Tab functionality.
 */


/**
 * Parse a Facebook signed request.
 * @see https://developers.facebook.com/docs/authentication/signed_request/
 *
 * @param $signed_request
 *   A Facebook signed request, usually found in $_REQUEST['signed_request']
 * @param $secret
 *   A Facebook App secret.
 * @return
 *   A Facebook Signed Request data array.
 */
function fb_like_app_parse_signed_request($signed_request, $secret) {
  list($encoded_sig, $payload) = explode('.', $signed_request, 2); 

  // Decode the data.
  $sig = fb_like_app_base64_url_decode($encoded_sig);
  $data = json_decode(fb_like_app_base64_url_decode($payload), true);

  if (strtoupper($data['algorithm']) !== 'HMAC-SHA256') {
    error_log('Unknown algorithm. Expected HMAC-SHA256');
    return null;
  }

  // Check signature.
  $expected_sig = hash_hmac('sha256', $payload, $secret, $raw = true);
  if ($sig !== $expected_sig) {
    error_log('Bad Signed JSON signature!');
    return null;
  }

  return $data;
}

/**
 * Decode a url data.
 */
function fb_like_app_base64_url_decode($input) {
  return base64_decode(strtr($input, '-_', '+/'));
}

/*
 * Mapping Facebook locale -> Drupal language code
 */
function fb_like_app_lang_map($lang) {
  $map = array(
    'af_ZA' => 'af',
    'ar_AR' => 'ar',
    'ay_BO' => 'ay',
    'az_AZ' => 'az',
    'be_BY' => 'be',
    'bg_BG' => 'bg',
    'bn_IN' => 'bn',
    'bs_BA' => 'bs',
    'ca_ES' => 'ca',
    'cs_CZ' => 'cs',
    'cy_GB' => 'cy',
    'da_DK' => 'da',
    'de_DE' => 'de',
    'el_GR' => 'el',
    'en_US' => 'en',
    'eo_EO' => 'eo',
    'es_ES' => 'es',
    'et_EE' => 'et',
    'eu_ES' => 'eu',
    'fa_IR' => 'fa',
    'fi_FI' => 'fi',
    'fo_FO' => 'fo',
    'fr_CA' => 'fr',
    'fr_FR' => 'fr',
    'ga_IE' => 'ga',
    'gl_ES' => 'gl',
    'gn_PY' => 'gn',
    'gu_IN' => 'gu',
    'he_IL' => 'he',
    'hi_IN' => 'hi',
    'hr_HR' => 'hr',
    'hu_HU' => 'hu',
    'hy_AM' => 'hy',
    'id_ID' => 'id',
    'is_IS' => 'is',
    'it_IT' => 'it',
    'ja_JP' => 'ja',
    'jv_ID' => 'jv',
    'ka_GE' => 'ka',
    'kk_KZ' => 'kk',
    'km_KH' => 'km',
    'kn_IN' => 'kn',
    'ko_KR' => 'ko',
    'ku_TR' => 'ku',
    'la_VA' => 'la',
    'lt_LT' => 'lt',
    'lv_LV' => 'lv',
    'mg_MG' => 'mg',
    'mk_MK' => 'mk',
    'ml_IN' => 'ml',
    'mn_MN' => 'mn',
    'mr_IN' => 'mr',
    'ms_MY' => 'ms',
    'mt_MT' => 'mt',
    'nb_NO' => 'nb',
    'ne_NP' => 'ne',
    'nl_BE' => 'nl',
    'nn_NO' => 'nn',
    'pa_IN' => 'pa',
    'pl_PL' => 'pl',
    'ps_AF' => 'ps',
    'qu_PE' => 'qu',
    'rm_CH' => 'rm',
    'ro_RO' => 'ro',
    'ru_RU' => 'ru',
    'sa_IN' => 'sa',
    'se_NO' => 'se',
    'sk_SK' => 'sk',
    'sl_SI' => 'sl',
    'so_SO' => 'so',
    'sq_AL' => 'sq',
    'sr_RS' => 'sr',
    'sv_SE' => 'sv',
    'sw_KE' => 'sw',
    'ta_IN' => 'ta',
    'te_IN' => 'te',
    'tg_TJ' => 'tg',
    'th_TH' => 'th',
    'tl_ST' => 'tl',
    'tr_TR' => 'tr',
    'tt_RU' => 'tt',
    'uk_UA' => 'uk',
    'ur_PK' => 'ur',
    'uz_UZ' => 'uz',
    'vi_VN' => 'vi',
    'xh_ZA' => 'xh',
    'yi_DE' => 'yi',
    'zh_CN' => 'zh-hans',
    'zh_TW' => 'zh-hant',
    'zu_ZA' => 'zu',
  );

  return isset($map[$lang]) ? $map[$lang] : 'en';
}