<?php

/**
 * @file
 * Render a block of subjects, grouped by period and subject group.
 */
foreach ($groups as $period_nid => $period_groups): ?>
  <div id="period-<?php print $period_nid; ?>" class="period">
    <h4 class="period-title"><?php print check_plain($nodes[$period_nid]->title); ?></h4>
    <?php foreach ($period_groups as $group):
      $links = array();
      foreach ($group_subject_nids[$group['subject_group_nid']] as $nid) { 
        $links[] = l($subject_titles[$nid], 'node/' . $nid);
      }

      print theme('item_list', array(
        'items' => $links,
        'title' => $nodes[$group['subject_group_nid']]->title,
        'attributes' => array('class' => 'vih-subject-group'),
      ));
    ?>
    <?php endforeach; ?>
  </div>
<?php endforeach; ?>

