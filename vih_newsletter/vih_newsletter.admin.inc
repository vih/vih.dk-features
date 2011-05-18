<?php
function vih_newsletter_admin_form($form, &$form_state) {
  $form['newsletter'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Newsletter configuration'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['newsletter']['intraface_public_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Intraface Public Key'),
    '#required' => true,
    '#default_value' => variable_get('intraface_public_key'),
  );
  $form['newsletter']['intraface_newsletter_list_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Intraface Newsletter List ID'),
    '#required' => true,
    '#default_value' => variable_get('intraface_newsletter_list_id'),
  ); 
  // saves and executes a submission callback, see $form["#submit"] for that
  $form['save'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#executes_submit_callback' => true
  );
  $form['#submit'] = array(
    'vih_newsletter_admin_form_submit'
  );
  return $form;
}

function vih_newsletter_admin_validate($form, &$form_state) {
  $list_id = $form_state['values']['intraface_newsletter_list_id'];
  if (!is_numeric($list_id)) {
    form_set_error('intraface_newsletter_list_id', t('Intraface newsletter list ID must be numeric.'));
  }
}

function vih_newsletter_admin_form_submit($form, &$form_state) {
  variable_set('intraface_public_key', $form_state['values']['intraface_public_key']);
  variable_set('intraface_newsletter_list_id', $form_state['values']['intraface_newsletter_list_id']);
  drupal_set_message(t("Intraface values has been set"));
}
