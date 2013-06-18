<?php 
/**
 * @file
 * Override of the "branding zone"
 */
?>
<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>
  <div id="zone-menu-inner-wrapper">
    <div<?php print $content_attributes; ?>>
      <?php print $content; ?>
    </div>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>