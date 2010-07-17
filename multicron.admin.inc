<?php
// $Id$

function multicron_overview_form(&$form_state) {
  $form = _multicron_overview_list();

  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save configuration'),
    );
  return $form;
}

function theme_multicron_overview_form($form) {
  dsm($form);
  $rows = array('Cell 1', 'Cell 2', 'Cell 3');
  $header = array('head 1', 'head 2', 'head 3');

  $output .= theme('table', $header, $rows, array('id' => 'multicron-overview'));
  $output .= drupal_render($form);
  return $output;
}

function multicron_overview_form_submit($form, &$form_state) {
}

function _multicron_overview_list() {
  $sites = array('Cell 1');
  foreach($sites as $site) {
    $form[$site]['expanded'] = array(
      '#type' => 'checkbox',
      '#default_value' => $item['expanded'],
    );
  }
  return $form;
}