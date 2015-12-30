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
  <div id ='user-bar' class= 'container'>
      <?php print render($page['user_bar_first']); ?>
  </div>
  
  </div>
  <div id ='main-nav' class= 'nav container'>
    <?php print render($page['main_nav']); ?>
  </div>
</div>

<?php if($messages): ?>
  <div id="messages" class="container">
    <div class="row"><?php print $messages; ?></div>
  </div>
<?php endif; ?>

<div id='core' class="<?php print $fullWidth; ?>">
  <div class= container>

  <?php if($page['sidebar_first']): ?>
    <div class="<?php print $ColumnAWidth; ?>">
      <?php print render($page['sidebar_first']); ?>
    </div>

    <div class="<?php print $ColumnBWidth; ?>">
	<?php print render($page['content']); ?>
    </div>
   <?php else: ?>
      <?php print render($page['content']); ?>
   <?php endif; ?>
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

