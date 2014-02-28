<?php

/**
 * @file
 * Implements Mandrill as a Drupal MailSystemInterface
 */

/**
 * Modify the drupal mail system to use Mandrill when sending emails.
 */
class MandrillMailSystem implements MailSystemInterface {

  /**
   * Concatenate and wrap the email body for either plain-text or HTML emails.
   *
   * @param array $message
   *   A message array, as described in hook_mail_alter().
   *
   * @return array
   *   The formatted $message.
   */
  public function format(array $message) {
    // Join the body array into one string.
    if (is_array($message['body'])) {
      $message['body'] = implode("\n\n", $message['body']);
    }
    return $message;
  }

  /**
   * Send the email message.
   *
   * @see drupal_mail()
   *
   * @param array $message
   *   A message array, as described in hook_mail_alter().
   *
   * @return bool
   *   TRUE if the mail was successfully accepted, otherwise FALSE.
   */
  public function mail(array $message) {
    // Optionally log mail keys not using Mandrill already. Helpful in
    // configuring Mandrill.
    if (variable_get('mandrill_log_defaulted_sends')) {
      $systems = mailsystem_get();
      $registered = FALSE;
      foreach ($systems as $key => $system) {
        if ($message['id'] == $key) {
          $registered = TRUE;
        }
        if (!$registered) {
          watchdog(
            'mandrill',
            "Module: %module Key: %key invoked Mandrill to send email because Mandrill is configured as the default mail system. Specify alternate configuration for this module & key in !mailsystem if this is not desirable.",
            array(
              '%module' => $message['module'],
              '%key' => $message['key'],
              '!mailsystem' => l(t('Mail System'), 'admin/config/system/mailsystem'),
            ),
            WATCHDOG_INFO
          );
        }
      }
    }

    $mailer = mandrill_get_api_object();

    // Apply input format to body.
    $format = variable_get('mandrill_filter_format', '');
    if (!empty($format)) {
      $message['body'] = check_markup($message['body'], $format);
    }

    // Extract an array of recipients.
    $to = mandrill_get_to($message['to']);

    // Prepare headers, defaulting the reply-to to the from address since
    // Mandrill needs the from address to be configured separately.
    // Note that only Reply-To and X-* headers are allowed.
    $headers = isset($message['headers']) ? $message['headers'] : array();
    if (!empty($message['from']) && empty($headers['Reply-To'])) {
      $headers['Reply-To'] = $message['from'];
    }

    // Prepare attachments.
    $attachments = array();
    if (isset($message['attachments']) && !empty($message['attachments'])) {
      foreach ($message['attachments'] as $attachment) {
        if (is_file($attachment)) {
          $attachments[] = $mailer->getAttachmentStruct($attachment);
        }
      }
    }

    // Determine if content should be available for this message.
    $blacklisted_keys = explode(',', mandrill_mail_key_blacklist());
    $view_content = TRUE;
    foreach ($blacklisted_keys as $key) {
      if ($message['id'] == drupal_strtolower(trim($key))) {
        $view_content = FALSE;
        break;
      }
    }

    // Account for the plaintext parameter provided by the mimemail module.
    $plain_text = empty($message['params']['plaintext']) ? drupal_html_to_text($message['body']) : $message['params']['plaintext'];

    // Get metadata.
    $metadata = isset($message['metadata']) ? $message['metadata'] : array();

    $from = mandrill_from();
    $mandrill_message = array(
      'html' => $message['body'],
      'text' => $plain_text,
      'subject' => $message['subject'],
      'from_email' => $from['email'],
      'from_name' => $from['name'],
      'to' => $to,
      'headers' => $headers,
      'track_opens' => variable_get('mandrill_track_opens', TRUE),
      'track_clicks' => variable_get('mandrill_track_clicks', TRUE),
      // We're handling this with drupal_html_to_text().
      'auto_text' => FALSE,
      'url_strip_qs' => variable_get('mandrill_url_strip_qs', FALSE),
      'bcc_address' => isset($message['bcc_email']) ? $message['bcc_email'] : NULL,
      'tags' => array($message['id']),
      'google_analytics_domains' => (variable_get('mandrill_analytics_domains', NULL)) ? explode(',', variable_get('mandrill_analytics_domains')) : array(),
      'google_analytics_campaign' => variable_get('mandrill_analytics_campaign', ''),
      'attachments' => $attachments,
      'view_content_link' => $view_content,
      'metadata' => $metadata,
    );

    // Allow other modules to alter the Mandrill message, and sender/args.
    $mandrill_params = array(
      'message' => $mandrill_message,
      'function' => 'mandrill_sender_plain',
      'args' => array(),
    );
    drupal_alter('mandrill_mail', $mandrill_params, $message);

    // Queue for processing during cron or send immediately.
    $status = NULL;
    if (mandrill_process_async()) {
      $queue = DrupalQueue::get(MANDRILL_QUEUE, TRUE);
      $queue->createItem($mandrill_params);
      if (variable_get('mandrill_batch_log_queued', TRUE)) {
        watchdog('mandrill', 'Message from %from to %to queued for delivery.',
          array(
            '%from' => $from['email'],
            '%to' => $to[0]['email'],
          ), WATCHDOG_NOTICE);
      }
      return TRUE;
    }
    else {
      return mandrill_mailsend($mandrill_params['message'], $mandrill_params['function'], $mandrill_params['args']);
    }
  }
}
