<?php
require_once 'markdown.php';
class MigrateNews extends Migration {
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate news from legacy database');
    $this->team = array(
      new MigrateTeamMember('Lars Olesen', 'lars@vih.dk', t('Webmaster')),
    );
    $query = db_select('nyhed', 'nyhed', array('target' => 'vih'))
             ->fields('nyhed', array('id', 'overskrift', 'tekst', 'date_created', 'date_updated', 'published'))
             ->where('nyhed.active = :active', array(':active' => 1));
    /*
    $query->leftJoin('keyword_x_object', 'kxo', 'nyhed.id = kxo.belong_to');
    $query->innerJoin('keyword', 'keyword', 'keyword.id = kxo.keyword_id');
    // Gives a single comma-separated list of related terms
    $query->addExpression('GROUP_CONCAT(keyword.keyword)', 'terms');
    */
    $this->source = new MigrateSourceSQL($query);
    $this->source->setMapJoinable(false);
    $this->destination = new MigrateDestinationNode('story', array('text_format' => 'full_html'));
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'id' => array('type' => 'int',
                        'unsigned' => TRUE,
                        'not null' => TRUE,
                       )
        ),
        MigrateDestinationNode::getKeySchema()
      );
    $this->addFieldMapping('title', 'overskrift');
    $this->addFieldMapping('body', 'tekst')
         ->description('See prepare method');
    $this->addFieldMapping('uid')
         ->defaultValue(1);
    $this->addFieldMapping('created', 'date_created');
    $this->addFieldMapping('changed', 'date_updated');
    $this->addFieldMapping('status', 'published');
    //$this->addFieldMapping('field_tags', 'terms')->separator(',');
  }

public function prepareRow(stdClass $row) {
    $row->tekst = Markdown($row->tekst);
  }
}
