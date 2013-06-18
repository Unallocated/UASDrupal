CSS3PIE is a very simple Drupal module to implement the css3pie.com javascript functionality 
to your Drupal and make the css selectors configurable over user interface. This module creates 
a real css file on Drupal's files folder and adds them via drupal_add_css.

What does this module do for you ?
--------------------------------
The main feature of this module is to implement the css3pie.com library with your custom selected css classes by writing a seperate css file.

- Generate a CSS File
- Assign css3pie lib to a list of selectors

What does this module NOT do for you ?
--------------------------------
Its not part of this module to generate any css3 code for you. This is part of your Theme

- This module generates NO css3 code for you.

Dependencies / Requirements:
--------------
Drupal Modules:
- ctools http://drupal.org/projects/ctools
- libraries http://drupal.org/project/libraries

3rd party libraries:
- Latest version of PIE library from http://css3pie.com

Installation:
--------------
Download the module and install like other drupal modules.
Download the PIE Library from http://css3pie.com and extract the content to /sites/all/libraries/PIE.

You can also use Drush (since css3pie module version 2.1 or current dev version since 2012-02-17):

  Download css3pie module:
  drush dl css3pie

  Enables the module and download the css3lib
  drush en css3pie

  or:
  download the css3lib directly (only on enabled module)
  drush css3pie-download

Configuration:
--------------
Go to admin/config/user-interface/css3pie and configure as you want.

 Selector Textarea:
  In the textarea use one line for every selector (don't use a comma seperated list)
  that you have used in your theme with css3 code.

 CSS3PIE mode:
 The css3pie module supports currently two modes. CSS file or Javascript mode.

   CSS File:
   If you use the css file mode this module generates it's own css file. This is the recommended
   mode because it is the fastest delivery method (a real css file that can be cached).

   Javascript mode:
   In the javascript mode it will be use the new pie.js variant. In this mode the selectors will
   be attached to a javascript function. This is really slow and not recommended because the selectors
   will be processed in real time by the client.

 CSS Settings:
   Display namespace as comment in css file:
   If checked the module namespace will be displayed as comment in the css file. It makes only sense
   for debugging if you implement the hook_css3pie.

   Use PHP Wrapper:
   On some old webservers you run into problems with the file mimetype on .htc files.
   This option sets the mimetype header by using a php file as a wrapper.

Notice:
-------
- The CSS File will be rebuilt if you save the options or clear the cache.
- You don't need to load the PIE.htc file manually in your themes css file.
  If you have done it manually you dont need this module.

Developers:
-----------
If you have a module that uses css3 you can use the hook_css3pie to tell the module about your selectors.

  Example:
  --------
  hook_css3pie() {
    return array('yourmodulename' => array(
      '.class1', '.class2', '.class3',
    ));
  }

If you want to alteri the data from an existing css3pie_hook you can use hook_css3pie_alter() for it.
  hook_css3pie_alter(&$selectors, $mode = 'css') {}

Theme Developers:
-----------------
Instead of using selector configuration you can also add the selectors to your theme info file like this:

  Example:
  --------
  settings[css3pie][selectors][] = ".yourclass"
  settings[css3pie][selectors][] = "#yourid"
