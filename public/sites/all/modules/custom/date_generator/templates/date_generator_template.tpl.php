<div class="before-events">
  <?php foreach($before_nodes as $before_node): ?>
    <?php print render($before_node); ?>
  <?php endforeach; ?>
</div>

<div class="performance">
  <?php print render($performance); ?>
</div>

<div class="after-events">
  <?php foreach($after_nodes as $after_node): ?>
    <?php print render($after_node); ?>
  <?php endforeach; ?>
</div>