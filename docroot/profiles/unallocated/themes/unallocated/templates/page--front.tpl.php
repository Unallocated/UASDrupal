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
  <div id ='user-bar' class= 'container'>
      <?php print render($page['user_bar_first']); ?>
  </div>
  <div id ='branding' class= 'container'>
    <?php print render($page['branding']); ?>
  </div>
  
  </div>
  <div id ='main-nav' class= 'nav container'>
    <?php print render($page['main_nav']); ?>
  </div>
</div>

<div id='core' class="<?php print $fullWidth; ?>">
  <div class="container whiteShade">

    <div id="front-page-main" class="twelve columns alpha"><?php print render($page['front_slideshow']); ?></div>
    <div id ="front_slideshow" class="four columns omega"><?php print render($page['front_slideshow_sidebar']); ?></div>

  </div>
</div>

<div id="first-break" class="sixteen columns break">
  <div class="container">
    <div id="first-break-main" class="sixteen columns"><?php print render($page['first_break']); ?></div>
  </div>
</div>

<div id="second-break" class="sixteen columns break">
  <div class="container">
    <div id="second-break-main" class="sixteen columns"><?php print render($page['second_break']); ?></div>
  </div>
</div>

<div id="front-page-secondary" class="sixteen columns whiteShade">
  <div class="container">
    <div id="front-page-secondary-left" class="eight columns alpha"><?php print render($page['front_second_left']); ?></div>
    <div id="front-page-secondary-right" class="eight columns omega"><?php print render($page['front_second_right']); ?></div>
  </div>
</div>

<div id="third-break" class="sixteen columns break">
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


    <div id ='post-script' class="<?php print $ColumnBottomWidth; ?>">
      <?php print render($page['postscript_first']); ?>
    </div>


    <div id ="post-post-script" class="<?php print $ColumnBottomWidth; ?>">
      <?php print render($page['post_postscript']); ?>
    </div>


    <div id ="post-post-post-script" class="<?php print $ColumnBottomWidth; ?>">
      <?php print render($page['post_post_postscript']); ?>
    </div>

  </div>
</div>

