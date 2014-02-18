<?php
/**
 * @file
 * apaja_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function apaja_rules_default_rules_configuration() {
  $items = array();
  $items['rules_course_expire'] = entity_import('rules_config', '{ "rules_course_expire" : {
      "LABEL" : "Course expire",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "php", "rules" ],
      "ON" : [ "cron" ],
      "DO" : [
        { "php_eval" : { "code" : "\\u003C?php \\r\\n$query = new EntityFieldQuery();\\r\\n$query\\r\\n  -\\u003EentityCondition(\\u0027entity_type\\u0027, \\u0027node\\u0027)\\r\\n  -\\u003EentityCondition(\\u0027bundle\\u0027, \\u0027kurssi\\u0027)\\r\\n  -\\u003EfieldCondition(\\u0027field_kurssi_loppuu\\u0027, \\u0027value\\u0027, date(\\u0022Y-m-d 00:00:00\\u0022), \\u0027\\u003C\\u0027)\\r\\n  -\\u003EfieldCondition(\\u0027field_kurssin_tila\\u0027, \\u0027value\\u0027, \\u00272\\u0027, \\u0027=\\u0027)\\r\\n  -\\u003EpropertyCondition(\\u0027status\\u0027, 1);\\r\\n\\r\\n$result = $query-\\u003Eexecute();\\r\\n$nids = array_keys($result[\\u0027node\\u0027]);\\r\\n\\r\\n\\/\\/ Load all nodes in one go for better performance.\\r\\n$nodes = node_load_multiple($nids);\\r\\nforeach ($nodes as $node) {\\r\\n  if(isset($node-\\u003Efield_kurssi_loppuu[LANGUAGE_NONE][0][\\u0027value\\u0027])){\\r\\n    $node-\\u003Efield_kurssin_tila[LANGUAGE_NONE][0][\\u0027value\\u0027] = \\u00273\\u0027;\\r\\n    node_save($node);\\r\\n  }\\r\\n}\\r\\n?\\u003E" } }
      ]
    }
  }');
  return $items;
}
