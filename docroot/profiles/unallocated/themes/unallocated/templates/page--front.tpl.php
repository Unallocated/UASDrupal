<?php
//Container Declaration, for easy adjustment. Change details here, not in main file.

$third = '"one-third columns"';
$fullWidth = '"sixteen columns"';
$fullWidthNav = '"nav sixteen columns"';
$ColumnAWidth = '"five columns alpha"';
$ColumnBWidth = '"eleven columns omega"';
$ColumnBottomWidth ='"four columns"';


//die('<pre>'.print_r(array_keys($page), TRUE).'</pre>');


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

    <div id="front-page-main" class="twelve columns alpha"><?php print render($page['front_slideshow']); ?></div>
    <div class="four columns omega" style="border: 1px solid green"><?php print render($page['front_slideshow_sidebar']); ?></div>

  </div>
</div>

<div id="first-break" class="sixteen columns">
  <div class="container">
    <div id="first-break-main" class="sixteen columns"><?php print render($page['first_break']); ?></div>
  </div>
</div>

<div id="second-break" class="sixteen columns">
  <div class="container">
    <div id="second-break-main" class="sixteen columns"><?php print render($page['second_break']); ?></div>
  </div>
</div>

<div id="front-page-secondary" class="sixteen columns">
  <div class="container">
    <div id="front-page-secondary-left" class="eight columns alpha"><?php print render($page['front_second_left']); ?></div>
    <div id="front-page-secondary-right" class="eight columns omega"><?php print render($page['front_second_right']); ?></div>
  </div>
</div>

<div id="third-break" class="sixteen columns">
  <div class="container">
    <div id="third-break-main" class="sixteen columns"><?php print render($page['third_break']); ?></div>
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

