<?php
/**
 * @file
 */
require_once dirname(__FILE__) . '/../Base.inc';

class VIH_Lectures_Pdf_Portrait extends VIH_Lectures_Pdf_Base {

  protected $font = 'helvetica';
  protected $frontpage_font = 'helvetica';

  function __construct($events) {
    $this->events = $events;
    parent::__construct('P','mm','A4');
  }
    
  function addFrontpage($image) {
    $this->addPage();
    $this->Image($image, 10, 10, 190, 0, '');
    $this->setY(140);
    $this->SetFont($this->frontpage_font, 'B', 50);
    $this->MultiCell(0, 0, $this->heading, null, 'C');
    $this->SetFont($this->frontpage_font, 'B', 40);
    $this->MultiCell(0, 0, $this->sub_title, null, 'C');
    if (!empty($this->logo) && file_exists($this->logo)) {
      $this->Image($this->logo, 55, 230, 100, 0, '', 'http://vih.dk/');
    }
  }

  function addSecondPage() {
    $this->addPage();
    $this->SetFont($this->frontpage_font, '', 22);
    $this->MultiCell(0, 0, $this->heading, null, 'L');
    $this->SetFont($this->frontpage_font, 'B', 34);
    $this->Cell(0, 0, $this->sub_title, null, 2, 'L');
    $this->Line(0, 50, 220, 50);
    $this->SetFont($this->frontpage_font, null, 18);
    $this->setTextColor(0, 0, 0);
    $this->setY(60);
    $this->writeHtmlCell(190, 10, $this->GetX(), $this->GetY(), $this->description, 0);
    $this->Line(0, 245, 220, 245);
    if (!empty($this->logo) && file_exists($this->logo)) {
      $this->Image($this->logo, 150, 255, 50, 0, '', 'http://vih.dk/');
    }
  }

  function addEventPage($event) {
    $title = check_plain($event->title);
    $speaker = trim($event->field_speaker['und'][0]['value']);
    $body_field = field_get_items('node', $event, 'body');
    $body = check_markup($this->clearJavascript($body_field[0]['safe_value']), 'filtered_html');
    $picture = field_get_items('node', $event, 'field_picture');
    $picture_filename = drupal_realpath(image_style_path('sidepicture', $picture[0]['uri']));
    $location = trim($event->field_location['und'][0]['safe_value']);
    $price = trim($event->field_price['und'][0]['value']);
    $tilmelding = 'http://vih.dk/node/' . $event->nid;
    $start_date = new DateTime($event->field_date['und'][0]['value'], new DateTimeZone($event->field_date['und'][0]['timezone']));
    $end_date = new DateTime($event->field_date['und'][0]['value2'], new DateTimeZone($event->field_date['und'][0]['timezone']));
    $date = ucfirst($this->t($start_date->format('l')) . ', ' . $start_date->format('j.') . $this->t($start_date->format('F')) . ', ' . $start_date->format('Y H:i') . '-' . $end_date->format('H:i'));
    $date = format_date(strtotime($event->field_date['und'][0]['value']) + $start_date->getOffset(), 'custom', 'l, j. F, Y H:i', date_default_timezone_get()) . '-' . format_date(strtotime($event->field_date['und'][0]['value2']) + $end_date->getOffset(), 'custom', 'H:i', date_default_timezone_get());

    $this->addPage();
    $this->SetFont($this->font, 'B', 22);
    $this->setY(10);
    $this->Cell(150, 0, $speaker, null, 2, 'L');
    $this->SetFont($this->font, 'B', 34);
    $this->MultiCell(130, 0, $title, null, 'L');
    $this->SetFont($this->font, null, 18);
    $this->setTextColor(0, 0, 0);
    $this->Line(0, 85, 220, 85);
    $this->setY(95);
    $this->writeHTMLCell(190, 10, $this->GetX(), $this->GetY(), $body); 
      
    $this->Line(0, 245, 220, 245);
    $this->Line(220, 40, 220, 220);

    if ($picture_filename) {
      $this->Image($picture_filename, 150, 5, 0, 75, '');
    }

    $qr_file = $this->getBarcodePath($tilmelding, 200, 200);
    if ($qr_file !== false) {
      $this->Image($qr_file, 4, 250, 35, 0, '');
    }
    if (!empty($this->logo) && file_exists($this->logo)) {
      $this->Image($this->logo, 150, 255, 50, 0, '', 'http://vih.dk/');
    }
    $x = 40;
    $this->setY(252);
    $this->setX($x);
    $this->SetFont($this->font, null, 14);
    $this->Write(14, 'Pris: ' . $price . ' kroner');
    $this->setY(258);
    $this->setX($x);
    $this->Write(14, 'Sted: ' . $location);
    $this->setY(264);
    $this->setX($x);
    $this->Write(14, 'Tid: ' . $date);
    $this->setY(270);
    $this->setX($x);
    $this->Write(14, 'Tilmelding: ' . $tilmelding);        
    $this->Ln();
  }

  /**
   * Implements abstract method
   */
  public function render() {
    $this->SetTitle($this->heading);
    $this->SetSubject($this->sub_title);
    $this->SetAuthor('Vejle Idrætshøjskole');
    $this->SetAutoPageBreak(false);
    foreach ($this->events as $event) {
      $this->addEventPage($event);
    }

    $this->Output('foredrag.pdf', 'I');
  }
}
