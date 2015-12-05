<div class="container-8">

  <div class="grid-6 alpha">
    <?php if($latest_content_block_title): ?>
      <h2 class="block-title"><?php print $latest_content_block_title; ?></h2>
    <?php endif; ?>
    <?php print $latest_content_block; ?>
  </div>
  <div class="grid-3 omega">
    <?php if($my_groups_block_title): ?>
      <h2 class="block-title"><?php print $my_groups_block_title; ?></h2>
    <?php endif; ?>
    <?php print $my_groups_block; ?>

    <?php if($my_projects_block_title): ?>
      <h2 class="block-title"><?php print $my_projects_block_title; ?></h2>
    <?php endif; ?>
    <?php print $my_projects_block; ?>
  </div>
</div>