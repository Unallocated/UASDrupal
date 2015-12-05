<?php
/**
 * @file
 * uas_contact_form.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function uas_contact_form_default_entityform_type() {
  $items = array();
  $items['contact_form'] = entity_import('entityform_type', '{
    "type" : "contact_form",
    "label" : "Contact Form",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3" },
      "resubmit_action" : "disallow",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "This isn\\u0027t like other contact forms. This doesn\\u0027t disappear into a convenient black hole, to be ignored for the remainder of history. We actually read these. It can be a real pain in the ass - lots of spam and silly questions. You know what though? We care. That\\u0027s right. We care about our members and our community that darn much. Let us know what\\u0027s on your mind.",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/contact-form",
        "alias" : "contact",
        "language" : "und"
      }
    }
  }');
  return $items;
}
