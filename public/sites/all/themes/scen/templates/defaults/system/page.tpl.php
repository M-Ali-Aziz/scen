<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * This file will print the entire contents within the <body> tag. The only
 * variables you should be printing, should be the available regions. The
 * contents within the regions should be added using Contexts and blocks, and
 * therefore, shouldn't be added here.
 *
 * Feel free to add any HTML that you'd like to use for creating the structure
 * of the page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>
<div class="page-main-wrapper">
  <div class="page-top-wrapper">
  <div class="overlay"></div>
    <?php print render($page['header']); ?>
    <?php print render($page['content-top']); ?>
  </div>
  <?php print render($page['content']); ?>
  <div class="footer-main-wrapper">
    <?php print render($page['footer']); ?>
  </div>
</div>
