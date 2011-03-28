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
    '#options' => vih_course_registration_long_course_options(),
    '#default_value' => $form_state['cached data']['course'],
    '#required' => TRUE,
  );

  return $form;
}

/**
 * Helper function to provide a list of available courses.
 *
 * This is intended for use with a standard form API select field.
 *
 * @return
 *   Array of course titles, keyed by their node id.
 */
function vih_course_registration_long_course_options() {
  $options = array();

  foreach (node_load_multiple(array(), array('status' => 1, 'type' => 'course_long')) as $node) {
    $options[$node->nid]  = $node->title;
  }

  return $options;
}

/**
 * Long course registration subject selection form (step 2).
 */
function vih_course_registration_long_subjects_form($form, &$form_state) {
  $course = node_load($form_state['cached data']['course']);

  // Make a list of the nodes we need to load.
  $nids = array();

  // Group subject groups by period and add them to the nid loading list.
  $groups = array();
  foreach ($course->field_course_subject_groups['und'] as $group) {
    $nids[$group['subject_group_nid']] = $group['subject_group_nid'];
    $nids[$group['period_nid']] = $group['period_nid'];
    $groups[$group['period_nid']][] = $group['subject_group_nid'];
  }

  // Load all the required nodes.
  $nodes = node_load_multiple($nids);

  // Make a list of all the subjects in question, so we can load their titles.
  $subject_nids = array();
  foreach ($nodes as $node) {
    if (isset($node->field_subject_group_subjects['und'])) {
      foreach ($node->field_subject_group_subjects['und'] as $subject) {
        $subject_nids[$subject['nid']] = $subject['nid'];
      }
    }
  }

  // Load the title for each subject.
  $subject_titles = array();
  foreach (db_query("SELECT nid, title FROM {node} WHERE nid IN (:nids)", array(':nids' => $subject_nids)) as $row) {
    $subject_titles[$row->nid] = $row->title;
  }

  // Now we have all the data we need, start building the form.
  $form['subjects'] = array(
    '#tree' => 'TRUE',
  );

  // Make a fieldset for each period.
  foreach ($groups as $period_nid => $period_groups) {
    $form['subjects'][$period_nid] = array(
      '#tree' => TRUE,
      '#type' => 'fieldset',
      '#title' => $nodes[$period_nid]->title,
    );

    // Make a set of radios for each subject group in each period.
    foreach ($period_groups as $group_nid) {
      $group_node = $nodes[$group_nid];
      $form['subjects'][$period_nid][$group_nid] = array(
        '#tree' => TRUE,
        '#type' => 'radios',
        '#title' => $group_node->title,
        // If set, use the cached values as default. That was, the user
        // will see his previous entries if going backwards in the flow.
        '#default_value' => (isset($form_state['cached data']['subjects'][$period_nid][$group_nid])) ? $form_state['cached data']['subjects'][$period_nid][$group_nid] : NULL,
        '#options' => array(),
      );

      // Add each subject as an option to the set of radios.
      foreach ($group_node->field_subject_group_subjects['und'] as $subject) {
        $form['subjects'][$period_nid][$group_nid]['#options'][$subject['nid']] = $subject_titles[$subject['nid']];
      }
    }
  }

  return $form;
}

/**
 * Long course registration student information form (step 3).
 */
function vih_course_registration_long_info_form($form, &$form_state) {
  // Necessary for country_get_list(); not using include_once for performance.
  if (!function_exists('country_get_list')) {
    include DRUPAL_ROOT . '/includes/locale.inc';
  }

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

  $form['personalinfo']['country'] = array(
    '#type' => 'select',
    '#title' => t('Country'),
    '#options' => country_get_list(),
    '#required' => TRUE,
    '#description' => "Select your country",
  );

  $form['personalinfo']['address1'] = array(
    '#type' => 'textfield',
    '#title' => t('Address'),
    '#required' => TRUE,
    '#description' => "Please enter your address.",
  );

  $form['personalinfo']['address2'] = array(
    '#type' => 'textfield',
    '#title' => t('Address, line 2'),
  );

  $form['personalinfo']['address2'] = array(
    '#type' => 'textfield',
    '#title' => t('Address, line 2'),
  );

  $form['personalinfo']['postal_code'] = array(
    '#type' => 'textfield',
    '#title' => t('Postal code'),
    '#required' => TRUE,
  );

  $form['personalinfo']['city'] = array(
    '#type' => 'textfield',
    '#title' => t('City'),
    '#required' => TRUE,
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

  $form['personalinfo']['mail'] = array(
    '#type' => 'textfield',
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

  $form['contactinfo']['contact_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#required' => TRUE,
    '#default_value' => "",
    '#description' => "Please enter contact’s name.",
    '#size' => 20,
    '#maxlength' => 20,
  );

  $form['contactinfo']['contact_mail'] = array(
    '#type' => 'textfield',
    '#title' => t('E-mail-address'),
    '#required' => TRUE,
    '#description' => "Please enter contact’s e-mail-address.",
  );

  $form['contactinfo']['contact_phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone number'),
    '#required' => TRUE,
    '#default_value' => "Phone number",
    '#description' => "Please enter contact’s phone number.",
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
    '#type' => 'radios',
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

  $form['paymentinfo']['payment_type'] = array(
    '#type' => 'radios',
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

