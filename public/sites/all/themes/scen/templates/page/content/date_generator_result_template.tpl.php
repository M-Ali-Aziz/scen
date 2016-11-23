<?php
/**
  * @file Template file from Date Generator module
  * contain the result of the Date Generator form after submit
  */
?>

<div class="content-content-wrapper">

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

</div>