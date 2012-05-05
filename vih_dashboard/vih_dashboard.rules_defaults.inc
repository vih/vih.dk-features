<?php
/**
 * @file
 * vih_dashboard.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function vih_dashboard_default_rules_configuration() {
  $items = array();
  $items['rules_30_days_after_last_login'] = entity_import('rules_config', '{ "rules_30_days_after_last_login" : {
      "LABEL" : "30 days after last login",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "user" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "rules_send_reminder_email",
            "date" : "+1 months",
            "identifier" : "Reminder to user [account:uid]",
            "param_account" : [ "account" ]
          }
        }
      ]
    }
  }');
  $items['rules_goto_workbench_after_login'] = entity_import('rules_config', '{ "rules_goto_workbench_after_login" : {
      "LABEL" : "Goto dashboard after login",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "user" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "5" : "5", "6" : "6", "7" : "7" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "admin\\/dashboard" } } ]
    }
  }');
  $items['rules_send_reminder_email'] = entity_import('rules_config', '{ "rules_send_reminder_email" : {
      "LABEL" : "Send reminder email",
      "PLUGIN" : "action set",
      "TAGS" : [ "user" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "USES VARIABLES" : { "account" : { "label" : "Account", "type" : "user" } },
      "ACTION SET" : [
        { "schedule_delete" : {
            "component" : "rules_send_reminder_email",
            "task" : "Reminder to login user [account:uid]"
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "Vi savner dig helt vildt",
            "message" : "Hej [account:name],\\r\\n\\r\\nVi savner dig rigtig meget p\\u00e5 vih.dk. Det er mere end en m\\u00e5ned siden, at vi har set dig. Det er vi rigtig kede af. Alts\\u00e5 s\\u00e5dan rigtig stortudende kede af. Vi h\\u00e5ber rigtig meget, at du snart kommer tilbage og logger din ind.\\r\\n\\r\\n- For at g\\u00f8re os glade\\r\\n- For at se om der er sket noget nyt\\r\\n- For at skrive en nyhed\\r\\n- For at f\\u00e5 en cyberkrammer\\r\\n\\r\\nMed venlig hilsen\\r\\nEn f\\u00f8lsom e-mail-robot\\r\\n[site:name]",
            "language" : [ "account:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
