<?php

/**
 * @file
 * Form callbacks for the vih_course_registration_long module.
 */

/**
 * Long course registration course selection form (step 1).
 */
function vih_course_registration_long_course_form($form, &$form_state) {
  $form['course'] = array(
    '#type' => 'select',
    '#title' => t('Select course'),
    '#options' => array(1, 2, 3),
  );

  return $form;
}

/**
 * Long course registration subject selection form (step 2).
 */
function vih_course_registration_long_subjects_form($form, &$form_state) {
  $form['subjects'] = array(
    '#type' => 'select',
    '#title' => t('Select subjects'),
    '#options' => array(1, 2, 3),
  );

  return $form;
}

/**
 * Long course registration student information form (step 3).
 */
function vih_course_registration_long_info_form($form, &$form_state) {
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
    '#description' => "Please enter your CPR number. Format ddmmyy-xxxx",
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
 * Long course registration confirmation form (step 4).
 */
function vih_course_registration_long_confirm_form($form, &$form_state) {
  $form['message'] = array(
    '#markup' => t('Please confirm your registration'),
  );


  return $form;
}

