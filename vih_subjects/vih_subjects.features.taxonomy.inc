<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function vih_subjects_taxonomy_default_vocabularies() {
  return array(
    'subjects' => array(
      'name' => 'Subjects',
      'machine_name' => 'subjects',
      'description' => 'Categories for subjects',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-10',
      'rdf_mapping' => array(
        'rdftype' => array(
          '0' => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            '0' => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            '0' => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
