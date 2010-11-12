<?php

/**
 * Implementation of hook_default_box().
 */
function vih_general_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vih_address';
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
  $export['vih_address'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vih_highlighted_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'The highlighed text at the top of vih.dk';
  $box->options = array(
    'body' => array(
      'value' => '<p>Spørgsmål til højskoleophold eller rundvisning<span>Kontakt Peter Sebastian på 2929 6387 eller ps@vih.dk.</span></p></div>',
      'format' => '3',
    ),
  );
  $export['vih_highlighted_box'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vih_links_sistersites';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Links for other sites at Vejle Idrætsskole';
  $box->options = array(
    'body' => array(
      'value' => '<ul id="navigation-sites"><li id="elevforeningen"><a href="http://vih.dk/elevforeningen">Elevforeningen</a></li><li id="efterskolen"><a href="http://www.vies.dk/">Efterskolen</a></li><li id="kursuscenteret"><a href="http://vih.dk/kursuscenter">Kursuscenter</a></li></ul>',
      'format' => '3',
    ),
  );
  $export['vih_links_sistersites'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vih_book_tour';
  $box->plugin_key = 'simple';
  $box->title = 'Rundvisning';
  $box->description = 'Book tour';
  $box->options = array(
    'body' => array(
      'value' => '<p>Du er meget velkommen til at ringe til skolen og aftale et tidspunkt for en rigtig rundvisning. Kontakt Peter Sebastian på 2929 6387.</p>',
      'format' => '2',
    ),
  );
  $export['vih_book_tour'] = $box;

  return $export;
}
