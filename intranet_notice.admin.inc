<?php

function _intranet_notice() {
  $form['intranet_notice'] = array(
    '#type' => 'fieldset',
    '#title' => t('Intranet Notice Settings'),
    );

  $form['intranet_notice']['intranet_notice_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled'),
    '#default_value' => variable_get('intranet_notice_enabled', 0),
    );

  $form['intranet_notice']['intranet_notice_override'] = array(
    '#type' => 'checkbox',
    '#title' => t('Override'),
    '#default_value' => variable_get('intranet_notice_override', 0),
    );

  $form['intranet_notice']['intranet_notice_server_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Server URL'),
    '#default_value' => variable_get('intranet_notice_server_url', ''),
    '#description' => t("URL for JSON string."),
    );

  $form['intranet_notice']['intranet_notice_json_element'] = array(
    '#type' => 'textfield',
    '#title' => t('JSON Element'),
    '#default_value' => variable_get('intranet_notice_json_element', 'node_revisions_body'),
    '#description' => t("Which JSON Element to display."),
    );

  $form['intranet_notice_meerkat'] = array(
    '#type' => 'fieldset',
    '#title' => t('Meerkat Settings'),
    );

  $form['intranet_notice_meerkat']['intranet_notice_meerkat_close'] = array(
    '#type' => 'textfield',
    '#title' => t('Close Selector'),
    '#default_value' => variable_get('intranet_notice_meerkat_close', ''),
    '#description' => t("When a user clicks on the selector you have set as your close option, Meerkat will close until it's reloaded again (defaults to 'none')."),
    );

  $form['intranet_notice_meerkat']['intranet_notice_meerkat_dontShowAgain'] = array(
    '#type' => 'textfield',
    '#title' => t('Dont Show Again'),
    '#default_value' => variable_get('intranet_notice_meerkat_dontShowAgain', 'none'),
    '#description' => t("When a user clicks on the selector you have set as your dontShow option, Meerkat will close and not show again until the browser session has ended (the user's browser has been restarted) or for a specific amount of days, depending on the dontShowExpire setting (defaults to 'none')."),
    );

  $form['intranet_notice_meerkat']['intranet_notice_meerkat_cookieExpires'] = array(
    '#type' => 'textfield',
    '#title' => t('Cookie Expire Time'),
    '#default_value' => variable_get('intranet_notice_meerkat_cookieExpires', 0),
    '#description' => t("If you set the cookieExpires option, you have the option of setting the length of time Meerkat will not show to that user for. Enter time in reference to days (defaults to 0)."),
    );

  $position = drupal_map_assoc(array('top','bottom'));
  $form['intranet_notice_meerkat']['intranet_notice_meerkat_position'] = array(
    '#type' => 'select',
    '#title' => t('Meerkat Position'),
    '#default_value' => variable_get('intranet_notice_meerkat_position', 'bottom'),
    '#options' => $position,
    '#description' => t("Location in browser that Meerkat will appear (defaults to 'bottom')."),
    );

  $animation = drupal_map_assoc(array('slide','fade'));
  $form['intranet_notice_meerkat']['intranet_notice_meerkat_animationOut'] = array(
    '#type' => 'select',
    '#title' => t('Animation'),
    '#default_value' => variable_get('intranet_notice_meerkat_animationOut', 'slide'),
    '#options' => $animation,
    '#description' => t("Method in which Meerkat will appear (defaults to 'slide')."),
    );

  $form['intranet_notice_meerkat']['intranet_notice_meerkat_animationSpeed'] = array(
    '#type' => 'textfield',
    '#title' => t('Animation Speed'),
    '#default_value' => variable_get('intranet_notice_meerkat_animationSpeed', 'slow'),
    '#description' => t("The animationSpeed option accepts the following values: ('slow', 'normal', or 'fast') or the number of milliseconds to run the animation (defaults to 'slow')."),
    );

  $form['intranet_notice_meerkat']['intranet_notice_meerkat_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height'),
    '#default_value' => variable_get('intranet_notice_meerkat_height', 'auto'),
    '#description' => t("The height option accepts all CSS height property values (px, em, %, auto, etc) (defaults to 'auto')."),
    );

  $form['intranet_notice_meerkat']['intranet_notice_meerkat_background'] = array(
    '#type' => 'textfield',
    '#title' => t('Background'),
    '#default_value' => variable_get('intranet_notice_meerkat_background', 'none'),
    '#description' => t("The background option accepts CSS background (shorthand) property values (defaults to 'none')."),
    );

  return system_settings_form($form);
}
