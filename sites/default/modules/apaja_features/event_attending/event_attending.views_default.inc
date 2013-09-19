<?php
/**
 * @file
 * event_attending.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function event_attending_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tapahtuman_osallistuja_listaus';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Tapahtuman osallistuja listaus';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tapahtuman osallistujat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Merkintöjä sivua kohti';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kaikki -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Suhde: Flags: User's flagged content */
  $handler->display->display_options['relationships']['flag_user_content_rel']['id'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['flag_user_content_rel']['field'] = 'flag_user_content_rel';
  $handler->display->display_options['relationships']['flag_user_content_rel']['flag'] = 'event_attend';
  /* Kenttä: Käyttäjä: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Kenttä: Käyttäjä: Kuva */
  $handler->display->display_options['fields']['field_account_kuva']['id'] = 'field_account_kuva';
  $handler->display->display_options['fields']['field_account_kuva']['table'] = 'field_data_field_account_kuva';
  $handler->display->display_options['fields']['field_account_kuva']['field'] = 'field_account_kuva';
  $handler->display->display_options['fields']['field_account_kuva']['label'] = '';
  $handler->display->display_options['fields']['field_account_kuva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_kuva']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_account_kuva']['settings'] = array(
    'image_style' => 'avatar_normal',
    'image_link' => '',
  );
  /* Kenttä: Käyttäjä: Etunimi */
  $handler->display->display_options['fields']['field_account_etunimi']['id'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['table'] = 'field_data_field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['field'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_etunimi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_account_etunimi']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_account_etunimi']['element_label_colon'] = FALSE;
  /* Kenttä: Käyttäjä: Sukunimi */
  $handler->display->display_options['fields']['field_account_sukunimi']['id'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['table'] = 'field_data_field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['field'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['text'] = '[field_account_etunimi] [field_account_sukunimi]';
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_account_sukunimi']['element_label_colon'] = FALSE;
  /* Kenttä: Käyttäjä: Lähiosoite */
  $handler->display->display_options['fields']['field_account_lahiosoite']['id'] = 'field_account_lahiosoite';
  $handler->display->display_options['fields']['field_account_lahiosoite']['table'] = 'field_data_field_account_lahiosoite';
  $handler->display->display_options['fields']['field_account_lahiosoite']['field'] = 'field_account_lahiosoite';
  $handler->display->display_options['fields']['field_account_lahiosoite']['label'] = '';
  $handler->display->display_options['fields']['field_account_lahiosoite']['element_label_colon'] = FALSE;
  /* Kenttä: Käyttäjä: Postinumero */
  $handler->display->display_options['fields']['field_account_postinumero']['id'] = 'field_account_postinumero';
  $handler->display->display_options['fields']['field_account_postinumero']['table'] = 'field_data_field_account_postinumero';
  $handler->display->display_options['fields']['field_account_postinumero']['field'] = 'field_account_postinumero';
  $handler->display->display_options['fields']['field_account_postinumero']['label'] = '';
  $handler->display->display_options['fields']['field_account_postinumero']['element_label_colon'] = FALSE;
  /* Kenttä: Käyttäjä: Postitoimipaikka */
  $handler->display->display_options['fields']['field_account_postitoimipaikka']['id'] = 'field_account_postitoimipaikka';
  $handler->display->display_options['fields']['field_account_postitoimipaikka']['table'] = 'field_data_field_account_postitoimipaikka';
  $handler->display->display_options['fields']['field_account_postitoimipaikka']['field'] = 'field_account_postitoimipaikka';
  $handler->display->display_options['fields']['field_account_postitoimipaikka']['label'] = '';
  $handler->display->display_options['fields']['field_account_postitoimipaikka']['element_label_colon'] = FALSE;
  /* Sisältöriippuvanen suodatin: Flags: Sisällön ID */
  $handler->display->display_options['arguments']['content_id']['id'] = 'content_id';
  $handler->display->display_options['arguments']['content_id']['table'] = 'flag_content';
  $handler->display->display_options['arguments']['content_id']['field'] = 'content_id';
  $handler->display->display_options['arguments']['content_id']['relationship'] = 'flag_user_content_rel';
  $handler->display->display_options['arguments']['content_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['content_id']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['content_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['content_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['content_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['content_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['content_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['content_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['content_id']['validate_options']['types'] = array(
    'tapahtuma' => 'tapahtuma',
  );
  /* Suodatinkriteeri: Käyttäjä: Toiminnassa */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/osallistujat';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Osallistujat';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Osallistujat';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'field_account_etunimi' => 'field_account_etunimi',
    'field_account_sukunimi' => 'field_account_sukunimi',
    'mail' => 'mail',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_account_sukunimi';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_etunimi' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_sukunimi' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Otsikko: Yleinen: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
$node = node_load(arg(1));
echo \'<h3>\'. $node->title. \' osallistujat</h3>\';
?>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Käyttäjä: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Kenttä: Käyttäjä: Etunimi */
  $handler->display->display_options['fields']['field_account_etunimi']['id'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['table'] = 'field_data_field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['field'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_etunimi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_account_etunimi']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_account_etunimi']['element_label_colon'] = FALSE;
  /* Kenttä: Käyttäjä: Sukunimi */
  $handler->display->display_options['fields']['field_account_sukunimi']['id'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['table'] = 'field_data_field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['field'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['label'] = 'Nimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['text'] = '[field_account_etunimi] [field_account_sukunimi]';
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_account_sukunimi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_sukunimi']['element_default_classes'] = FALSE;
  /* Kenttä: Käyttäjä: Sähköposti */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Allekirjoitus';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/osallistujaprint';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Osallistujat printti';
  $handler->display->display_options['menu']['weight'] = '9';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['tapahtuman_osallistuja_listaus'] = array(
    t('Master'),
    t('Tapahtuman osallistujat'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Merkintöjä sivua kohti'),
    t('- Kaikki -'),
    t('Offset'),
    t('« ensimmäinen'),
    t('‹ edellinen'),
    t('seuraava ›'),
    t('viimeinen »'),
    t('user flagged content'),
    t('[field_account_etunimi] [field_account_sukunimi]'),
    t('Kaikki'),
    t('Page'),
    t('Nimi'),
    t('Sähköposti'),
    t('Allekirjoitus'),
  );
  $export['tapahtuman_osallistuja_listaus'] = $view;

  $view = new view();
  $view->name = 'tulevat_kurssin_tapahtumat';
  $view->description = 'Show all content (nodes) of a group.';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'Tulevat kurssin tapahtumat';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Kurssin tapahtumat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Merkintöjä sivua kohti';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kaikki -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
  $handler->display->display_options['pager']['options']['tags']['next'] = ' ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Toiminta jos tuloksia ei löydy: Yleinen: Tekstialue */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There is no content in this group.';
  /* Suhde: OG jäsenyys: OG membership from Solmu */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Suhde: Flags: event_attend */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'event_attend';
  /* Kenttä: Sisältö: Tapahtuman aika */
  $handler->display->display_options['fields']['field_tapahtuman_aika']['id'] = 'field_tapahtuman_aika';
  $handler->display->display_options['fields']['field_tapahtuman_aika']['table'] = 'field_data_field_tapahtuman_aika';
  $handler->display->display_options['fields']['field_tapahtuman_aika']['field'] = 'field_tapahtuman_aika';
  $handler->display->display_options['fields']['field_tapahtuman_aika']['label'] = '';
  $handler->display->display_options['fields']['field_tapahtuman_aika']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tapahtuman_aika']['settings'] = array(
    'format_type' => 'super_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Lajittelukriteeri: Sisältö: Lähetetty */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sisältöriippuvanen suodatin: OG jäsenyys: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['exception']['title'] = 'Kaikki';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Suodatinkriteeri: OG jäsenyys: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tapahtuma' => 'tapahtuma',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'gid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'OG membership: Group ID',
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['tulevat_kurssin_tapahtumat'] = array(
    t('Defaults'),
    t('Kurssin tapahtumat'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Merkintöjä sivua kohti'),
    t('- Kaikki -'),
    t('Offset'),
    t('« ensimmäinen'),
    t('‹ '),
    t(' ›'),
    t('viimeinen »'),
    t('There is no content in this group.'),
    t('OG membership from node'),
    t('flag'),
    t('Kaikki'),
    t('Content pane'),
    t('View panes'),
    t('Block'),
  );
  $export['tulevat_kurssin_tapahtumat'] = $view;

  return $export;
}
