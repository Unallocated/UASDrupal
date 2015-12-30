<?php
//Container Declaration, for easy adjustment. Change details here, not in main file.

$third = '"one-third columns"';
$fullWidth = '"sixteen columns"';
$fullWidthNav = '"nav sixteen columns"';
$ColumnAWidth = '"five columns alpha"';
$ColumnBWidth = '"eleven columns omega"';
$ColumnBottomWidth ='"four columns"';

?>

<?php if ($page['user_bar_first']): ?>
  <div id ='user-bar' class='container'>
    <div class="row">
      <?php print render($page['user_bar_first']); ?>
    </div>
  </div>
<?php endif; ?>

<div id="top_zone" class="container sixteen columns">
  <div class="row">
    <div id="banner" class="twelve columns">
    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php  print t('Home'); ?>" rel="home" id="logo">
        <img id="logoImg" src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>
    </div>

    <?php if($page['search']): ?>
      <div id="search" class="four columns">
        <?php print render($page['search']); ?>
      </div>
    <?php endif; ?>
  </div>
  <div class="row">
    <div id="main-nav" class="nav">
      <?php print render($page['main_nav']); ?>
    </div>

  </div>
</div>

<?php if($messages): ?>
  <div id="messages" class="container">
    <div class="row"><?php print $messages; ?></div>
  </div>
<?php endif; ?>

<?php
  if(in_array('authenticated user', $user->roles)) {
    include_once("front-page-authenticated.tpl.php");
  } else {
    include_once("front-page-anonymous.tpl.php");
  }
?>