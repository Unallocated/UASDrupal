<?php
/**
 * @file
 * uas_user.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function uas_user_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
