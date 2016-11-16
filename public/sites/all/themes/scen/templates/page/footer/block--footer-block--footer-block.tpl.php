<?php
/**
 * @file
 * Default theme implementation to display a block.
 *
 * This is the default template file for every block. If you'd like to override
 * this for a specific block, you should copy this file, and rename it to
 * block--MODULE--DELTA.tpl.php. Which module is being used and which delta that
 * you should specify varies. You could go to admin/structure/block, and go to
 * the configuration for the block that you'd like to override. Look at the URL,
 * and you'll find both the module and delta.
 *
 * admin/structure/block/manage/MODULE/DELTA/configure.
 *
 * If you're looking for the available variables, look for the preprocess_block
 * function, and print_r() the $variables variable.
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 */
?>
<div class="<?php print $block_html_id; ?>" <?php print $attributes; ?>>
  <?php if ($block->subject): ?>
    <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
  <?php endif;?>

  <div class="footer-content-wrapper">

    <h2><?php print $content ?></h2>
    
    <div class="organisations-logo-wrapper">
      <ul>
        <li><div class="malmo-opera-logo"><a href="http://www.malmoopera.se"></a></div></li>
        <li><div class="malmo-stadsteater-logo"><a href="http://www.malmostadsteater.se/"></a></div></li>
        <li><div class="skanes-dansteater-logo"><a href="http://www.skanesdansteater.se/"></a></div></li>
      </ul>
    </div>

    <div class="footer-button"><a href="http://www.google.com">About Malmöscenen</a></div>

    <div class="social-logo-wrapper">
      <ul>
        <li><div class="facebook-logo"><a href="https://www.facebook.com/"></a></div></li>
        <li><div class="twitter-logo"><a href="https://twitter.com/"></a></div></li>
        <li><div class="instagram-logo"><a href="https://www.instagram.com/"></a></div></li>
      </ul>
    </div>

  </div>

</div>
