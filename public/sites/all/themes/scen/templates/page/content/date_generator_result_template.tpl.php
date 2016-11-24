<?php
/**
  * @file Template file from Date Generator module
  * contain the result of the Date Generator form after submit
  */
?>

<div class="content-content-wrapper">

  <h1><?php print t('For example it may look like this:') ?></h1>  

  <div class="content-box start-box">
    <h2><?php print t('The evening begins') ?></h2>
    <p><?php print t('You have neither the knowledge nor etiquette? Get advice') ?>
      <a href="http://google.se"><?php print t('here') ?></a>.
    </p>
  </div>

  <div class="content-box before-node-first">
    <?php print render($before_nodes[0]); ?>
  </div>

  <div class="content-box before-node-secund">
    <?php print render($before_nodes[1]); ?>
  </div>

  <div class="content-box performance-node">
    <?php print render($performance); ?>
  </div>

  <div class="content-box after-node">
    <?php print render($after_node); ?> 
  </div>

  <div class="content-box end-box-one">
    <h2><?php print t('Be social!') ?></h2>
    <p><?php print t('Share your experiences, tag your posts to') ?>
      <strong href="http://google.se"><?php print t('#malmoscenen') ?></strong>.
    </p>
  </div>

  <div class="content-box end-box-two">
    <h2><?php print t('We hope you had a wonderful evening...') ?></h2>
    <p><?php print t('...you are liable for the rest on your own.') ?></p>
    <p class="font-italic"><?php print t('Best regards from Malmöscenen.') ?></p>
    
  </div>

</div>