<?php
//Container Declaration, for easy adjustment. Change details here, not in main file.

$third = '"one-third columns"';
$fullWidth = '"sixteen columns"';
$fullWidthNav = '"nav sixteen columns"';
$ColumnAWidth = '"five columns alpha"';
$ColumnBWidth = '"eleven columns omega"';
$ColumnBottomWidth ='"four columns"';

?>

<div id= 'top_zone'>
  <div class= 'container'>
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php  print t('Home'); ?>" rel="home" id="logo">
        <img id="logoImg" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>

  </div>
  <div class= 'nav container'>
    <?php print render($page['main_nav']); ?>
  </div>
</div>

<div id='core' class="<?php print $fullWidth; ?>">
  <div class="container">
    <div id="front-core-left" class="eight columns"><?php print render($page['front_core_left']); ?></div>
    <div id="front-core-right" class="eight columns"><?php print render($page['front_core_right']); ?></div>
  </div>
</div>

<div id="dashboard-groups" class="sixteen columns">
  <div class="container">
    <div id="dashboard-groups-left" class="eight columns"><?php print render($page['dashboard_groups_left']); ?></div>
    <div id="dashboard-groups-right" class="eight columns"><?php print render($page['dashboard_groups_right']); ?></div>
  </div>
</div>

<div id="dashboard-projects" class="sixteen columns">
  <div class="container">
    <div id="dashboard-projects-left" class="eight columns"><?php print render($page['dashboard_projects_left']); ?></div>
    <div id="dashboard-projects-right" class="eight columns"><?php print render($page['dashboard_projects_right']); ?></div>
  </div>
</div>

<div id= 'bottom_zone'>
  <div class= 'container'>

    <div class="<?php print $ColumnBottomWidth; ?>">
      <div id='boxes-box-uas_address_box'>
      </div>
    </div>


    <div class="<?php print $ColumnBottomWidth; ?>">
      <?php print render($page['postscript_first']); ?>
    </div>


    <div class="<?php print $ColumnBottomWidth; ?>">
      <?php print render($page['post_postscript']); ?>
    </div>


    <div class="<?php print $ColumnBottomWidth; ?>">
      <?php print render($page['post_post_postscript']); ?>
    </div>

  </div>
</div>