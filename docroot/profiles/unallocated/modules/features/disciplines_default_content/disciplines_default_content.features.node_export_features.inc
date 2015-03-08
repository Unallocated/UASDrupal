<?php
/**
 * @file
 * disciplines_default_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function disciplines_default_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Gaming Icon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bdf381ff-1ce4-49a5-8806-28709b0f4890\',
      \'nid\' => \'8\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425813036\',
      \'changed\' => \'1425813036\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0d0a2b34-5789-4bed-b01f-3cecc68b1a0c\',
      \'revision_timestamp\' => \'1425813036\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'a8\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>a8</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'8\',
            \'uid\' => \'1\',
            \'filename\' => \'IconsGames.png\',
            \'uri\' => \'public://IconsGames.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9271\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425813036\',
            \'type\' => \'image\',
            \'uuid\' => \'ff0a9d95-fae8-4016-b08d-554c77fb418b\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'256\',
              \'height\' => \'169\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'169\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425813036\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Toools Icon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'90fa504e-ebcc-4a86-a7b3-c552f464ff4d\',
      \'nid\' => \'1\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425812576\',
      \'changed\' => \'1425812576\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1741faa0-0409-42dc-ba30-1a6851354b3b\',
      \'revision_timestamp\' => \'1425812576\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'A1\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A1</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'uid\' => \'1\',
            \'filename\' => \'IconsToool_logo.png\',
            \'uri\' => \'public://IconsToool_logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'10938\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425812576\',
            \'type\' => \'image\',
            \'uuid\' => \'60ee45d0-59d8-4337-b703-7a752c46f62a\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'440\',
              \'height\' => \'160\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'440\',
            \'height\' => \'160\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425812576\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'3D Printer Icon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3c7dda68-8b40-4e9c-9eab-0bfed1e8acd8\',
      \'nid\' => \'7\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425812982\',
      \'changed\' => \'1425812982\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'316c38ad-e344-452b-9ece-3d002ab81d60\',
      \'revision_timestamp\' => \'1425812982\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'A7\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A7</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'7\',
            \'uid\' => \'1\',
            \'filename\' => \'Icons3dPrinting.png\',
            \'uri\' => \'public://Icons3dPrinting.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'19207\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425812982\',
            \'type\' => \'image\',
            \'uuid\' => \'eb75ea3c-f074-4548-8118-86440eabe017\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'256\',
              \'height\' => \'256\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'256\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425812982\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Minicon Icon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2c67ba61-950d-4739-999c-7655e6d00b8b\',
      \'nid\' => \'5\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425812825\',
      \'changed\' => \'1425812825\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4c43336a-bded-4012-9bc2-fc54081eae2e\',
      \'revision_timestamp\' => \'1425812825\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'a5\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>a5</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'uid\' => \'1\',
            \'filename\' => \'IconsMiniCon.png\',
            \'uri\' => \'public://IconsMiniCon.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'18616\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425812825\',
            \'type\' => \'image\',
            \'uuid\' => \'73714c63-747f-4ecb-827a-5e798b145276\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'256\',
              \'height\' => \'256\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'256\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425812825\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Network Icon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'00c9c1b9-309c-4a1e-8c0b-1bbc2f89e6a1\',
      \'nid\' => \'2\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425812640\',
      \'changed\' => \'1425812640\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'68fb6f63-5926-4e35-944d-985652335d5b\',
      \'revision_timestamp\' => \'1425812640\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'A2\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A2</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'2\',
            \'uid\' => \'1\',
            \'filename\' => \'IconsNetworking.png\',
            \'uri\' => \'public://IconsNetworking.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'20531\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425812640\',
            \'type\' => \'image\',
            \'uuid\' => \'40894930-6e4e-4430-aae6-4000f9926c5a\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'256\',
              \'height\' => \'256\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'256\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425812640\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Web Design Icon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2066bb11-b5ed-472a-8e7b-dbe7847a562f\',
      \'nid\' => \'3\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425812715\',
      \'changed\' => \'1425812715\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'92d8d1c6-5a18-4ca6-84e5-1840ba1998da\',
      \'revision_timestamp\' => \'1425812715\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'A3\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A3</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'3\',
            \'uid\' => \'1\',
            \'filename\' => \'IconsWebDesign.png\',
            \'uri\' => \'public://IconsWebDesign.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'20546\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425812715\',
            \'type\' => \'image\',
            \'uuid\' => \'07c7152b-ac30-40de-a59a-6c432f48f02f\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'256\',
              \'height\' => \'256\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'256\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425812715\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Radio Icon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0508515c-beaf-4550-9052-2768a94bac03\',
      \'nid\' => \'6\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425812922\',
      \'changed\' => \'1425812922\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b1956b77-5c5c-485e-9cbf-8045ee5dcc93\',
      \'revision_timestamp\' => \'1425812922\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'A6\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A6</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'6\',
            \'uid\' => \'1\',
            \'filename\' => \'IconRadio.png\',
            \'uri\' => \'public://IconRadio.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'43175\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425812922\',
            \'type\' => \'image\',
            \'uuid\' => \'cdd60786-7430-4204-ba50-72587681d56d\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'256\',
              \'height\' => \'256\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'256\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425812922\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Security Icon\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ce538eb1-cdce-4fc1-9f0a-5d708fb4a941\',
      \'nid\' => \'4\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425812778\',
      \'changed\' => \'1425812778\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d0197312-6561-4a10-8543-a708f312ac93\',
      \'revision_timestamp\' => \'1425812778\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'a4\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>a4</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'4\',
            \'uid\' => \'1\',
            \'filename\' => \'IconsSecurity.png\',
            \'uri\' => \'public://IconsSecurity.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'30758\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425812778\',
            \'type\' => \'image\',
            \'uuid\' => \'cada227d-065b-47e9-95cb-688067f8d367\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'256\',
              \'height\' => \'256\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'256\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425812778\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Icon Lathe\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8b1b480a-83ff-438a-a9d5-858d1c47443d\',
      \'nid\' => \'9\',
      \'type\' => \'discipline\',
      \'language\' => \'und\',
      \'created\' => \'1425813098\',
      \'changed\' => \'1425813098\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e4924875-123f-42c3-b90f-b473ec3c7c87\',
      \'revision_timestamp\' => \'1425813098\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'A9\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>A9</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_icon\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'9\',
            \'uid\' => \'1\',
            \'filename\' => \'IconsLathe.png\',
            \'uri\' => \'public://IconsLathe.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'21655\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425813098\',
            \'type\' => \'image\',
            \'uuid\' => \'f9694760-e99a-463c-ae93-fc16e3ffe64d\',
            \'media_title\' => array(),
            \'media_description\' => array(),
            \'field_tags\' => array(),
            \'field_license\' => array(
              \'und\' => array(
                array(
                  \'value\' => \'nothing\',
                ),
              ),
            ),
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'256\',
              \'height\' => \'256\',
            ),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'256\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425813098\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'root\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
