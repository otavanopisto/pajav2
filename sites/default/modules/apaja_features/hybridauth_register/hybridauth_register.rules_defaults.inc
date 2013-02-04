<?php
/**
 * @file
 * hybridauth_register.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hybridauth_register_default_rules_configuration() {
  $items = array();
  $items['rules_hybridauth_register'] = entity_import('rules_config', '{ "rules_hybridauth_register" : {
      "LABEL" : "HybridAuth register",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "hybridauth", "rules", "path" ],
      "ON" : [ "hybridauth_user_insert" ],
      "IF" : [
        { "hybridauth_user_created_hybridauth" : { "account" : [ "hybridauth-user" ] } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "hybridauth-user:field-account-etunimi" ],
            "value" : "[hybridauth:firstName]"
          }
        },
        { "data_set" : {
            "data" : [ "hybridauth-user:field-account-sukunimi" ],
            "value" : "[hybridauth:lastName]"
          }
        },
        { "path_alias" : {
            "source" : "user\\/[hybridauth-user:uid]",
            "alias" : "users\\/[hybridauth:firstName].[hybridauth:lastName]"
          }
        }
      ]
    }
  }');
  return $items;
}
