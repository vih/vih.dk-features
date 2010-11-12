<?php

/**
 * Implementation of hook_default_box().
 */
function vih_general_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'address';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Address block for Vejle Idrætshøjskole';
  $box->options = array(
    'body' => array(
      'value' => '<p id="address">Ørnebjergvej 28<br>
7100 Vejle<br>
Telefon: 7582 0811<br>
<a href="mailto:kontor@vih.dk">E-mail</a></p>',
      'format' => '3',
    ),
  );
  $export['address'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'links_sistersites';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Links for other sites at Vejle Idrætsskole';
  $box->options = array(
    'body' => array(
      'value' => '<ul id="navigation-sites"><li id="elevforeningen"><a href="http://vih.dk/elevforeningen">Elevforeningen</a></li><li id="efterskolen"><a href="http://www.vies.dk/">Efterskolen</a></li><li id="kursuscenteret"><a href="http://vih.dk/kursuscenter">Kursuscenter</a></li></ul>',
      'format' => '3',
    ),
  );
  $export['links_sistersites'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'rundvisning';
  $box->plugin_key = 'simple';
  $box->title = 'Rundvisning';
  $box->description = 'Rundvisning';
  $box->options = array(
    'body' => array(
      'value' => '<p>Rundvisning rundt over det hele på skolen. Det er da ik så ringe. dkfdslkfsd</p>',
      'format' => '2',
    ),
  );
  $export['rundvisning'] = $box;

  return $export;
}
