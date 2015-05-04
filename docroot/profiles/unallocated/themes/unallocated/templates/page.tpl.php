<?php
//Container Declaration, for easy adjustment. Change details here, not in main file.

$third = '"one-third columns"';
$fullWidth = '"sixteen columns"';
$fullWidthNav = '"nav sixteen columns"';
$ColumnAWidth = '"five columns alpha"';
$ColumnBWidth = '"eleven columns omega"';
$ColumnBottomWidth ='"four columns"';

//Prints Heading based on Values
print ("<div id= 'top_zone'>");
print ("<div class= 'container'>");
if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php  print t('Home'); ?>" rel="home" id="logo">
        <img id="logoImg", src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>
    
 <?php
print ("</div>");
print ("</div>");
print ("<div class= 'nav container'>");


//Special div for Navigation elements
	print render($page['menu']);

print ("</div>");

/*Main Content section, with Sidebar relivence check

Breaks into one or two blocks, depending on circumstances*/
print ("<div id= 'core' , class= $fullWidth>");
print ("<div class= container>");

 if($page['sidebar_first']) {
	print ("<div class= $ColumnAWidth>");  
	print render($page['sidebar_first']);
	print ("</div>");
	
	print ("<div class= $ColumnBWidth>");  	
	print render($page['content']);	
	print ("</div>");
 }
 
 else
 	{ 	
	print render($page['content']);	
	}
	
print ("</div>");
print ("</div>");
    
//Bottom Section Devided between 4 zones. The Logo is temporarily hardwired, prior to discussion about how to handle 2nd logo management.

print ("<div id= 'bottom_zone'>");
	print ("<div class= 'container'>");


		print ("<div class= $ColumnBottomWidth>");
	    	print ("<div id='boxes-box-uas_address_box'>
					</div>");	
		print ("</div>");


		print ("<div class= $ColumnBottomWidth>");	
			print render($page['postscript_first']);	
		print ("</div>");


		print ("<div class= $ColumnBottomWidth>");
			print render($page['post_postscript']);		
		print ("</div>");


		print ("<div class= $ColumnBottomWidth>");
			print render($page['post_post_postscript']);
		print ("</div>");
	
	print ("</div>");
print ("</div>");
?>  