<?php
/**
 * From http://drupal.org/node/717736
 * @see form_example_tutorial_6_validate()
 *
 */
function vih_course_registration_short_form($form, &$form_state) {
  $form['description'] = array(
    '#type' => 'item',
    '#title' => t('Important: The contact will receive all correspondance from us. If more of you want to receive information about the course, you need to submit different registrations.'),
  );

  // PERSONAL INFO

  $form['personalinfo'] = array(
    '#type' => 'fieldset',
    '#title' => t('Personal information'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['personalinfo']['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Please enter your name.",
    '#size' => 20,
    '#maxlength' => 20,
  );
  $form['personalinfo']['address'] = array(
    '#type' => 'addressfield',
    '#title' => t('Address'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Please enter your address.",
  );
  $form['personalinfo']['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone number'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Please enter your phone number.",
    '#size' => 20,
    '#maxlength' => 20,
  );
  $form['personalinfo']['email'] = array(
    '#type' => 'email',
    '#title' => t('Email'),
    '#required' => TRUE,
    '#default_value' => "E-mail",
    '#description' => "Please enter your email.",
    '#size' => 20,
    '#maxlength' => 20,
  );

  // PARTICIPANTS - NEEDS TO BE ABLE TO MAKE MORE

  $form['participant_1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Participant 1'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['participant_1']['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Please enter your name.",
    '#size' => 20,
    '#maxlength' => 20,
  );
  $form['participant_1']['cpr'] = array(
    '#type' => 'textfield',
    '#title' => t('CPR-number'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Format ddmmyy-xxxx.",
    '#size' => 20,
    '#maxlength' => 20,
  );

  // PAYMENT INFORMATION

  $form['insuranceinfo'] = array(
    '#type' => 'fieldset',
    '#title' => t('Cancellation insurance fee'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );

  $form['insuranceinfo']['insurance'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Insurance'),
    '#default_value' => '',
    '#options' => array(
      'yes' => t('Yes'),
      'no' => t('No')
    ),
    '#description' => t('Do you want to pay an extra fee, so you do not have to pay, if you cancel your stay?'),
  );

  // MESSAGE

  $form['comment'] = array(
    '#type' => 'fieldset',
    '#title' => t('Comment'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['comment']['comment'] = array(
    '#type' => 'textarea',
    '#title' => t('Comment'),
    '#default_value' => '',
    '#required' => FALSE
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit',
  );
  return $form;
}

/**
 * The value report is
 * $form_state['values'] (see http://drupal.org/node/144132#form-state).
 *
 * Values to validate are in this array: $form_state['values']
 *
 * Notice the name of the function. It is simply the name of the form
 * followed by '_validate'. This is always the name of the default validation
 * function. An alternate list of validation functions could have been provided
 * in $form['#validate'].
 *
 * @see form_example_tutorial_6()
 *
 */
function vih_registration_form_validate($form, &$form_state) {
}
