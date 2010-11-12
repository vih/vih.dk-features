<?php
/**
 * From http://drupal.org/node/717736
 * @see form_example_tutorial_6_validate()
 *
 */
function vih_course_registration_long_form($form, &$form_state) {
  $form['description'] = array(
    '#type' => 'item',
    '#title' => t('Important: When filling out this form, you also accept our payment conditions. Your registrations is not completed before we receive your payment.'),
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
    '#default_value' => array('country' => 'Denmark'),
    '#description' => "Please enter your address.",
    '#default_widget' => 'addressfield_standard',
    '#default_formatter' => 'addressfield_default',
  );
  $form['personalinfo']['cpr'] = array(
    '#type' => 'textfield',
    '#title' => t('CPR-number'),
    '#required' => TRUE,
    '#default_value' => "DDMMYY-XXXX",
    '#description' => "Please enter your CPR number.",
    '#size' => 20,
    '#maxlength' => 20,
  );
  // @todo change to select box
  $form['personalinfo']['municipality'] = array(
    '#type' => 'textfield',
    '#title' => t('Municipality'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Please enter your municipality.",
    '#size' => 20,
    '#maxlength' => 20,
  );
  $form['personalinfo']['email'] = array(
    '#type' => 'email',
    '#title' => t('Email'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Please enter your email.",
    '#size' => 20,
    '#maxlength' => 20,
  );

  // CONTACT INFO

  $form['contactinfo'] = array(
    '#type' => 'fieldset',
    '#title' => t('Next of kin'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['contactinfo']['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Please enter your name.",
    '#size' => 20,
    '#maxlength' => 20,
  );
  $form['contactinfo']['address'] = array(
    '#type' => 'addressfield',
    '#title' => t('Address'),
    '#required' => TRUE,
    '#default_value' => "Denmark",
    '#description' => "Please enter your address.",
  );
  $form['contactinfo']['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone number'),
    '#required' => TRUE,
    '#default_value' => "Phone number",
    '#description' => "Please enter your phone number.",
    '#size' => 20,
    '#maxlength' => 20,
  );
  $form['contactinfo']['email'] = array(
    '#type' => 'email',
    '#title' => t('Email'),
    '#required' => TRUE,
    '#default_value' => "E-mail",
    '#description' => "Please enter your email.",
    '#size' => 20,
    '#maxlength' => 20,
  );

  // EDUCATION

  $form['educationinfo'] = array(
    '#type' => 'fieldset',
    '#title' => t('Education information'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['educationinfo']['education'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Education'),
    '#default_value' => '',
    '#options' => array(
      'folkeskole' => t('Folkeskole'),
      'gymnasium' => t('Gymnasium'),
      'handelsskole' => t('Handelsskole'),
      'hf' => t('HF'),
      'other' => t('Anden'),
    ),
    '#description' => t('What is your highest education level.'),
  );

  // PAYMENT INFORMATION

  $form['paymentinfo'] = array(
    '#type' => 'fieldset',
    '#title' => t('Payment information'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );

  $form['paymentinfo']['paymenttype'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Payment type'),
    '#default_value' => '',
    '#options' => array(
      'egne_midler' => t('Egne midler / Forældre'),
      'arbejdsloeshedskasse' => t('Arbejdsløshedskasse'),
      'kontanthjaelp' => t('Kontanthjælp'),
      'other' => t('Andet')
    ),
    '#description' => t('How do you plan to pay for your stay?'),
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
