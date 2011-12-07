<?php
/**
 * @file
 * vih_subjects.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vih_subjects_taxonomy_default_vocabularies() {
  return array(
    'subject_category' => array(
      'name' => 'Subject Category',
      'machine_name' => 'subject_category',
      'description' => 'Used for categorization according to the weekly schedule.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'metatags' => array(),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'subject_packages' => array(
      'name' => 'Subject Packages',
      'machine_name' => 'subject_packages',
      'description' => 'Used to group subjects based on interest.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '9',
      'metatags' => array(),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
