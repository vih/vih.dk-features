<?php
/**
 * @file
 * vih_subjects.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function vih_subjects_taxonomy_default_vocabularies() {
  return array(
    'subject_category' => array(
      'name' => 'Subject Category',
      'machine_name' => 'subject_category',
      'description' => 'Categories for subjects',
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
      'description' => '',
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
