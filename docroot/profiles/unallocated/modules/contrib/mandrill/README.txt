## SUMMARY

Integrates Drupal's mail system with Mandrill transactional emails, a service
by the folks behind MailChimp. Learn more about Mandrill and how to sign up on
[their website] (http://mandrill.com). (Or don't, but then this module isn't
terribly useful...)

## INSTALLATION NOTES

* If you previously installed version 1.3, you will get the following error
  message when enabling the mandrill_template module:

    DatabaseSchemaObjectExistsException:
    Table <em class="placeholder">mandrill_template_map</em> already exists.

  This is ugly but irrelevant, everything should function normally.

* If you are upgrading from one of many previous versions, You may also find
  an extra Mail System class in the Mail System configuration called "Mandrill
  module class". It's harmless, but feel free to delete it.

## CONFIGURATION

### Start by loading up the Mandrill admin page at Configuration -> Web
Services (or admin/config/services/mandrill) and adding your API key from
http://mandrillapp.com. Then you'll see more configuration options.

### Mandrill Mail interface is 'enabled' by using the [Mail System module]
(http://drupal.org/project/mailsystem). Go to the [Mail System configuration
page] (admin/config/system/mailsystem) to start sending emails through
Mandrill. Once you do this, you'll see a list of the module/key pairs that
are using Mandrill listed near the top of the Mandrill settings page.

### Email Options
* **From address:** The email address that emails should be sent from
* **From name:** The name to use for sending (optional)
* **_Input format_:** An optional input format to apply to the message body 
before sending emails

### Send Options
* **Track opens:** Toggles open tracking for messages
* **Track clicks:** Toggles click tracking for messages
* **Strip query string:** Strips the query string from URLs when aggregating
 tracked URL data
* **Log sends that are not registered in mailsystem:** Useful for configuring
Mail System and getting more granular control over emails coming from various
modules. Enable this and set the system default in Mail System to Mandrill,
then trigger emails from various modules and functions on your site. You'll
see Mandrill writing log messages identifying the modules and keys that are
triggering each email. Now you can add these keys in Mail System and control
each email-generating module/key pair specifically. WARNING: If you leave this
enabled, you may slow your site significantly and clog your log files. Use
only for configuration.

### Google Analytics
* **Domains:** One or more domains for which any matching URLs will
automatically have Google Analytics parameters appended to their query string.
Separate each domain with a comma.
* **Campaign:** The value to set for the utm_campaign tracking parameter. If
empty, the from address of the message will be used instead.

### Asynchronous Options
* **Queue Outgoing Messages** Drops all messages sent through Mandrill into a
queue without sending them. When Cron is triggered, a number of queued messages
are sent equal to the specified Batch Size.
* **Batch Size** The number of messages to send when Cron triggers. Must be
greater than 0.

## TEMPLATES

In order to use the mandrill_template module, start by creating some templates
in your Mandrill account. Once you do, you can add one or more Mandrill
Template Maps for that template, specifying where on the template to place
the email content and which module/key pair should be sent using the template.
If you want to send multiple module/key pairs through the same Template, you
can make Mandrill the default mail system and make that Template Map the
default template, or you can clone the Template Map for each module/key pair
and assign them individually.

You should also consider enabling the css-inline feature in your Mandrill account under Settings -> Sending Options. For more info, see "http://help.mandrill.com/entries/24460141-Does-Mandrill-inline-CSS-automatically-".

## REPORTS
The mandrill_reports sub-module provides reports on various metrics. It may
take a long time to load. This module is due for some attention.

### Dashboard
Displays charts that show volume and engagement, along with a tabular list of
URL interactions for the past 30 days.

### Account Summary
Shows account information, quotas, and all-time usage stats.

## Activity
The Mandrill Activity sub-modules allows users to view email activity for any
Drupal entity with a valid email address. Configuration and usage details are in
sub-module's README file.

## SEND TEST EMAIL

The Send Test Email function is pretty self-explanatory. The To: field will
accept multiple addresses formatted in any Drupal mail system approved way.
By configuring the Mandrill Test module/key pair in Mail System, you can
use this tool to test outgoing mail for any installed mailer.

## ADVANCED OPTIONS
If you would like to use additional template (or other) Mandrill API
variables not implemented in this module, set them in hook_mail_alter under:
$params['mandrill']. Have a look at mandrill.mail.inc to learn more.
(Search for "mandrill parameters".)
