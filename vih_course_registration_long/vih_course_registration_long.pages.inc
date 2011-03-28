<?php

/**
 * @file
 * Page callbacks for the vih_course_registration_long module.
 */

/**
 * Page callback for registration wizard.
 */
function vih_course_registration_long_wizard() {
  // required includes for wizard
  ctools_include('wizard');
  ctools_include('object-cache');

  // merlin hints that there's a better way to figure out the step
  $step = arg(3);

  $include_path = drupal_get_path('module', 'vih_course_registration_long');

  // Setup multi-step form for ctools.
  $form_info = array(
    'id' => __FUNCTION__,
    'path' => "registration/long/form/%step",
    'show trail' => TRUE,
    'free trail' => FALSE,
    'show back' => TRUE,
    'show cancel' => TRUE,
    // This controls order, as well as form labels
    'order' => array(
      'course' => t('Pick course'),
      'subjects' => t('Pick subjects'),
      'info' => t('Information'),
      'confirm' => t('Confirmation'),
    ),
    // Here we map a step to a form id.
    'forms' => array(
      'course' => array(
        'form id' => 'vih_course_registration_long_course_form',
        'include' => $include_path . '/vih_course_registration_long.forms.inc',
      ),
      'subjects' => array(
        'form id' => 'vih_course_registration_long_subjects_form',
        'include' => $include_path . '/vih_course_registration_long.forms.inc',
      ),
      'info' => array(
        'form id' => 'vih_course_registration_long_info_form',
        'include' => $include_path . '/vih_course_registration_long.forms.inc',
      ),
      'confirm' => array(
        'form id' => 'vih_course_registration_long_confirm_form',
        'include' => $include_path . '/vih_course_registration_long.forms.inc',
      ),
    ),
  );

  // Get the step keys for easy access in the logic below.
  $step_keys = array_keys($form_info['order']);

  $form_state = array(
    'cache key' => $form_info['id'],
  );

  // Get the cached values.
  $values = ctools_object_cache_get('vih_course_registration_long', $form_state['cache key']);

  // Check if course is set in the REQUEST parameters, and if so, store
  // it and skip the first step.
  if (isset($_REQUEST['course']) && $_REQUEST['course'] > 0) {
    // Cast to integer to make sure the value is safe.
    $values['course'] = (integer) $_REQUEST['course'];

    // Skip the first step.
    if (!$step || $step == $step_keys[0]) {
      ctools_object_cache_set('vih_course_registration_long', $form_state['cache key'], $values);
      return drupal_goto('registration/long/form/' . $step_keys[1]);
    }
  }

  // Check if we have cached values.
  if (!$values) {
    // If we are not on the first step, redirect to it.
    if (array_search($step, array_keys($form_info['order'])) > 0) {
      return drupal_goto('registration/long/form/' . $step_keys[0]);
    }

    // Initialise cache to an empty array.
    ctools_object_cache_set('vih_course_registration_long', $form_state['cache key'], array());
  }

  // Check that we are not skipping steps.
  if (!isset($values['course']) && array_search($step, $step_keys) > array_search('course', $step_keys)) {
    drupal_set_message('Please select a course');
    return drupal_goto('registration/long/form/' . $step_keys[0]);
  }
  elseif (!isset($values['subjects']) && array_search($step, $step_keys) > array_search('subjects', $step_keys)) {
    drupal_set_message('Please select subjects');
    return drupal_goto('registration/long/form/' . $step_keys[1]);
  }

  // Send the cached data along to the form.
  $form_state['cached data'] = $values;

  return ctools_wizard_multistep_form($form_info, $step, $form_state);
}

/**
 * Callback for proceeding to the next step of the form.
 */
function vih_course_registration_long_wizard_next(&$form_state) {
  // Get the current values.
  $values = ctools_object_cache_get('vih_course_registration_long', $form_state['cache key']);

  if (is_array($values)) {
    // Add the new values, let the new values take presedence.
    $values = $form_state['values'] + $values;
  }
  else {
    $values = $form_state['values'];
  }

  // Set the values in cache.
  ctools_object_cache_set('vih_course_registration_long', $form_state['cache key'], $values);
}

/**
 * Callback generated when the multistep form is complete
 *
 * Here we should save data to db and create a new ClubLead user for them,
 * log them in, and redirect to dashboard
 */
function vih_course_registration_long_wizard_finish(&$form_state) {
  $registration = (object) $form_state['cached data'];

  // Save the registration.
  drupal_write_record('vih_course_long_registrations', $registration);

  // Save subject choices.
  foreach ($registration->subjects as $period_nid => $subjects) {
    foreach ($subjects as $group_nid => $subject_nid) {
      db_insert('vih_course_long_registration_subjects')
        ->fields(array(
          'registration_id' => $registration->registration_id,
          'period_nid' => $period_nid,
          'subject_group_nid' => $group_nid,
          'subject_nid' => $subject_nid,
        ))
        ->execute();
    }
  }

  // Clear the cache
  $values = ctools_object_cache_get('vih_course_registration_long', $form_state['cache key']);
  drupal_set_message(t('Registration for long course completed.'));
  drupal_goto('<front>');
}

/**
 * Callback generated when the 'cancel' button is clicked.
 *
 * All we do here is clear the cache. 
 * redirect them to where they started 
 */
function vih_course_registration_long_wizard_cancel(&$form_state) {
  $values = ctools_object_cache_get('vih_course_registration_long', $form_state['cache key']);
  drupal_set_message(t('Registration for long course cancelled.'));
  drupal_goto('<front>');
}

