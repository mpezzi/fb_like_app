<?php if ( $bypass ): ?>
  <div class="bypass">
    <a href="<?php print $link ?>" target="_blank">
      <?php print render($bypass); ?>
    </a>
  </div>
<?php endif; ?>

<div class="like">
  <?php print render($content); ?>
</div>
