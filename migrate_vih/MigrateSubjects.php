<?php
class MigrateSubjects extends Migration {
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate subjects from legacy database');
    $this->team = array(
      new MigrateTeamMember('Lars Olesen', 'lars@vih.dk', t('Webmaster')),
    );
    $query = db_select('langtkursus_fag', 'fag', array('target' => 'vih'))
             ->fields('fag', array('id', 'navn', 'beskrivelse', 'udvidet_beskrivelse', 'date_created', 'date_updated', 'published'))
             ->where('active = :active', array(':active' => 1));
    $query->addExpression('CONCAT(beskrivelse, udvidet_beskrivelse)', 'concat_beskrivelse');
    $this->source = new MigrateSourceSQL($query);
    $this->source->setMapJoinable(false);
    $this->destination = new MigrateDestinationNode('subject', array('text_format' => 'full_html'));
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'id' => array('type' => 'int',
                        'unsigned' => TRUE,
                        'not null' => TRUE,
                       )
        ),
        MigrateDestinationNode::getKeySchema()
      );
    $this->addFieldMapping('title', 'navn');
    $this->addFieldMapping('body', 'concat_beskrivelse');
    $this->addFieldMapping('uid')
         ->defaultValue(1);
    $this->addFieldMapping('created', 'date_created');
    $this->addFieldMapping('changed', 'date_updated');
    $this->addFieldMapping('status', 'published');
  }
}
