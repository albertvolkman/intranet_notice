<?php

function intranet_notice_json() {
  $json = array(
    'close'             => (variable_get('intranet_notice_meerkat_close', '') != '') ? variable_get('intranet_notice_meerkat_close', '') : '',
    'dontShowAgain'     => (variable_get('intranet_notice_meerkat_dontShowAgain', 'none') != '') ? variable_get('intranet_notice_meerkat_dontShowAgain', 'none') : 'none',
    'cookieExpires'     => (variable_get('intranet_notice_meerkat_cookieExpires', 0) != 0) ? variable_get('intranet_notice_meerkat_cookieExpires', 0) : 0,
    'position'          => (variable_get('intranet_notice_meerkat_position', 'bottom') != '') ? variable_get('intranet_notice_meerkat_position', 'bottom') : 'bottom',
    'animationOut'      => (variable_get('intranet_notice_meerkat_animationOut', 'slide') != '') ? variable_get('intranet_notice_meerkat_animationOut', 'slide') : 'slide',
    'animationSpeed'    => (variable_get('intranet_notice_meerkat_animationSpeed', 'slow') != '') ? variable_get('intranet_notice_meerkat_animationSpeed', 'slow') : 'slow',
    'height'            => (variable_get('intranet_notice_meerkat_height', 'auto') != '') ? variable_get('intranet_notice_meerkat_height', 'auto') : 'auto',
    'background'        => (variable_get('intranet_notice_meerkat_background', 'none') != '') ? variable_get('intranet_notice_meerkat_background', 'none') : 'none'
  );

  print drupal_json($json);
}
