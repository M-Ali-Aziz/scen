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
<div class="<?php print $block_html_id; ?> date-generator-wrapper" <?php print $attributes; ?>>
  <div class="date-generator-content-wrapper">
    <?php if ($block->subject): ?>
      <h1<?php print $title_attributes; ?>><?php print $block->subject ?></h1>
    <?php endif;?>

    <p>Create a very, very wonderful evening,<br> customized just for you! *</p>

    <?php print $content ?>

    <p>(*Culture is for all)</p>
  </div>

</div>
