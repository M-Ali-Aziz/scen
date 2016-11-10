<?php
/**
  * @file Email Template file for Date Generator module
  */ 
?>

<!-- Style -->
<style>
.main-mail-template-wrapper {
  background: gray;
}
  
</style><!-- Style end! -->



<!-- Content -->
<dir class="main-mail-template-wrapper">
  <div class="before-events">
    <div class="before-event-one">
      <?php print render($before_nodes[0]); ?> 
    </div>
    <div class="before-event-two">
      <?php print render($before_nodes[1]); ?>
    </div>
  </div>

  <div class="performance">
    <?php print render($performance); ?>
  </div>

  <div class="after-events">
    <div class="after-events-one">
      <?php print render($after_nodes[0]); ?>
    </div>
    <div class="after-events-two">
      <?php print render($after_nodes[1]); ?>
    </div>
  </div>
</dir>


