<?php
/**
 * @file
 * added_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function added_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'apaja_user_list';
  $view->description = 'Lists all users';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Apaja user list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Apaja user list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_account_kuva' => 'field_account_kuva',
    'field_account_etunimi' => 'field_account_etunimi',
    'field_account_sukunimi' => 'field_account_etunimi',
    'mail' => 'mail',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_account_kuva' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_etunimi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_account_sukunimi' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: User: Kuva */
  $handler->display->display_options['fields']['field_account_kuva']['id'] = 'field_account_kuva';
  $handler->display->display_options['fields']['field_account_kuva']['table'] = 'field_data_field_account_kuva';
  $handler->display->display_options['fields']['field_account_kuva']['field'] = 'field_account_kuva';
  $handler->display->display_options['fields']['field_account_kuva']['label'] = '';
  $handler->display->display_options['fields']['field_account_kuva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_kuva']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_account_kuva']['settings'] = array(
    'image_style' => 'avatar_thumbnail',
    'image_link' => '',
  );
  /* Field: User: Etunimi */
  $handler->display->display_options['fields']['field_account_etunimi']['id'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['table'] = 'field_data_field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['field'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['label'] = 'Nimi';
  $handler->display->display_options['fields']['field_account_etunimi']['element_label_colon'] = FALSE;
  /* Field: User: Sukunimi */
  $handler->display->display_options['fields']['field_account_sukunimi']['id'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['table'] = 'field_data_field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['field'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_sukunimi']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Sähköpostiosoite';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Käyttäjänimi';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: User list page */
  $handler = $view->new_display('page', 'User list page', 'page');
  $handler->display->display_options['path'] = 'admin/people/user-list';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Apaja kayttajalistaus';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'apaja_kayttajat.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 0;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 0;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/user-list/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['apaja_user_list'] = array(
    t('Master'),
    t('Apaja user list'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Nimi'),
    t('Sähköpostiosoite'),
    t('Käyttäjänimi'),
    t('User list page'),
    t('Data export'),
  );
  $export['apaja_user_list'] = $view;

  $view = new view();
  $view->name = 'kurssitarjontasivu';
  $view->description = 'Courses that are started. Necessary blocks and pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'kurssitarjontasivu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kurssitarjonta';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '20';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = '200';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: aPajan kuva */
  $handler->display->display_options['fields']['field_kurssin_kuva']['id'] = 'field_kurssin_kuva';
  $handler->display->display_options['fields']['field_kurssin_kuva']['table'] = 'field_data_field_kurssin_kuva';
  $handler->display->display_options['fields']['field_kurssin_kuva']['field'] = 'field_kurssin_kuva';
  $handler->display->display_options['fields']['field_kurssin_kuva']['label'] = '';
  $handler->display->display_options['fields']['field_kurssin_kuva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_kuva']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_kurssin_kuva']['settings'] = array(
    'image_style' => 'group-thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Yhteenveto */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['alter']['text'] = '<div class="field-content">[field_summary]</div>';
  $handler->display->display_options['fields']['field_summary']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['max_length'] = '290';
  $handler->display->display_options['fields']['field_summary']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Field: Content: aPajan vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Field: Content: aPaja alkaa */
  $handler->display->display_options['fields']['field_kurssi_alkaa']['id'] = 'field_kurssi_alkaa';
  $handler->display->display_options['fields']['field_kurssi_alkaa']['table'] = 'field_data_field_kurssi_alkaa';
  $handler->display->display_options['fields']['field_kurssi_alkaa']['field'] = 'field_kurssi_alkaa';
  $handler->display->display_options['fields']['field_kurssi_alkaa']['label'] = '';
  $handler->display->display_options['fields']['field_kurssi_alkaa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssi_alkaa']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssi_alkaa']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: aPaja loppuu */
  $handler->display->display_options['fields']['field_kurssi_loppuu']['id'] = 'field_kurssi_loppuu';
  $handler->display->display_options['fields']['field_kurssi_loppuu']['table'] = 'field_data_field_kurssi_loppuu';
  $handler->display->display_options['fields']['field_kurssi_loppuu']['field'] = 'field_kurssi_loppuu';
  $handler->display->display_options['fields']['field_kurssi_loppuu']['label'] = '';
  $handler->display->display_options['fields']['field_kurssi_loppuu']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssi_loppuu']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssi_loppuu']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: aPajan tila */
  $handler->display->display_options['fields']['field_kurssin_tila']['id'] = 'field_kurssin_tila';
  $handler->display->display_options['fields']['field_kurssin_tila']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['fields']['field_kurssin_tila']['field'] = 'field_kurssin_tila';
  $handler->display->display_options['fields']['field_kurssin_tila']['label'] = 'Kurssin tila';
  $handler->display->display_options['fields']['field_kurssin_tila']['exclude'] = TRUE;
  /* Field: Content: Hintalaskuri */
  $handler->display->display_options['fields']['field_hintalaskuri']['id'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['table'] = 'field_data_field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['field'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['label'] = '';
  $handler->display->display_options['fields']['field_hintalaskuri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hintalaskuri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hintalaskuri']['click_sort_column'] = 'profit_margin';
  $handler->display->display_options['fields']['field_hintalaskuri']['type'] = 'paja_course_price_attendees_min';
  /* Field: Content: Hintalaskuri */
  $handler->display->display_options['fields']['field_hintalaskuri_1']['id'] = 'field_hintalaskuri_1';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['table'] = 'field_data_field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['field'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['label'] = '';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hintalaskuri_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hintalaskuri_1']['click_sort_column'] = 'profit_margin';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['type'] = 'paja_course_price_attendees_max';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Member count';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$query1 = db_select(\'users\', \'u\');
$query1
  ->condition(\'u.uid\', 0, \'<>\')
  ->condition(\'u.status\', 1, \'=\')
  ->condition(\'our.gid\', $row->nid, \'=\')
  ->fields(\'u\', array(\'uid\'))
  ->distinct(TRUE)
  ->join(\'og_users_roles\', \'our\', "our.rid = :rid AND u.uid = our.uid", array(\':rid\' => 3));
$result1 = $query1->execute();
$admin_count = $result1->rowCount();

$query = db_select(\'users\', \'u\');
$query
  ->condition(\'u.uid\', 0, \'<>\')
  ->condition(\'u.status\', 1, \'=\')
  ->fields(\'u\', array(\'uid\', \'name\'))
  ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
  $result = $query->execute();
$value = $result->rowCount() - $admin_count;
return max(array($value,0));';
  $handler->display->display_options['fields']['php']['php_output'] = '';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="views-label">Ilmoittautuneita [php] / [field_hintalaskuri] (enintään [field_hintalaskuri_1])</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="views-label">Ilmoittautuneita [php] / [field_hintalaskuri] (enintään [field_hintalaskuri_1])</span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Hintalaskuri */
  $handler->display->display_options['fields']['field_hintalaskuri_2']['id'] = 'field_hintalaskuri_2';
  $handler->display->display_options['fields']['field_hintalaskuri_2']['table'] = 'field_data_field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri_2']['field'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri_2']['label'] = '';
  $handler->display->display_options['fields']['field_hintalaskuri_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hintalaskuri_2']['click_sort_column'] = 'profit_margin';
  $handler->display->display_options['fields']['field_hintalaskuri_2']['type'] = 'paja_course_price_mini_panel';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kurssi' => 'kurssi',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: aPajan tila (field_kurssin_tila) */
  $handler->display->display_options['filters']['field_kurssin_tila_value']['id'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['field'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_kurssin_tila_value']['group'] = 1;
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['operator_id'] = 'field_kurssin_tila_value_op';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['label'] = 'Kurssin tila (field_kurssin_tila)';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['operator'] = 'field_kurssin_tila_value_op';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['identifier'] = 'field_kurssin_tila_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Kurssitarjonta sivulla voit tutustua ja ilmoittautua aPajiin. Jos itseä innostavaa ja kiinnostavaa aPajaa ei löydy, luo oma unelmien aPaja.</p>
<p></p>
<p>Käytä alla olevia valikkoja eri vaiheessa olevien aPajien etsimiseen. Valmisteilla olevia aPajia suunnitellaan yhteisöllisesti ja olet tervetullut mukaan alusta alkaen! Valmisteilla olevaan aPajaan sitovan ilmoittautumisen voit tehdä vasta myöhemmin. Tarjolla olevat kurssit ovat valmiita aPajia, joille voit ilmoittautua sitovasti.</p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: aPaja alkaa (field_kurssi_alkaa) */
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['id'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['table'] = 'field_data_field_kurssi_alkaa';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['field'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['expose']['label'] = 'Kurssin alkamispäivämäärä';
  /* Sort criterion: Content: Hintalaskuri (field_hintalaskuri:price) */
  $handler->display->display_options['sorts']['field_hintalaskuri_price']['id'] = 'field_hintalaskuri_price';
  $handler->display->display_options['sorts']['field_hintalaskuri_price']['table'] = 'field_data_field_hintalaskuri';
  $handler->display->display_options['sorts']['field_hintalaskuri_price']['field'] = 'field_hintalaskuri_price';
  $handler->display->display_options['sorts']['field_hintalaskuri_price']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_hintalaskuri_price']['expose']['label'] = 'Hinta';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kurssi' => 'kurssi',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: aPajan tila (field_kurssin_tila) */
  $handler->display->display_options['filters']['field_kurssin_tila_value']['id'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['field'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['value'] = array(
    'all' => 'all',
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_kurssin_tila_value']['group'] = 1;
  $handler->display->display_options['filters']['field_kurssin_tila_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['operator_id'] = 'field_kurssin_tila_value_op';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['label'] = 'aPajan tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['operator'] = 'field_kurssin_tila_value_op';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['identifier'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_kurssin_tila_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_kurssin_tila_value']['group_info']['label'] = 'aPajan tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['group_info']['identifier'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['group_info']['default_group'] = '2';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'aPajaa valmistellaan',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
    2 => array(
      'title' => 'aPaja on tarjolla',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    3 => array(
      'title' => 'aPaja on käynnissä',
      'operator' => 'or',
      'value' => array(
        2 => '2',
      ),
    ),
    4 => array(
      'title' => 'aPaja on päättynyt',
      'operator' => 'or',
      'value' => array(
        3 => '3',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'kurssit/kurssitarjonta';
  $translatables['kurssitarjontasivu'] = array(
    t('Master'),
    t('Kurssitarjonta'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('[title]'),
    t('<div class="field-content">[field_summary]</div>'),
    t('aPajan vetäjä'),
    t('Kurssin ajankohta'),
    t('[field_kurssi_alkaa] - [field_kurssi_loppuu]'),
    t('Kurssin tila'),
    t('Member count'),
    t('<span class="views-label">Ilmoittautuneita [php] / [field_hintalaskuri] (enintään [field_hintalaskuri_1])</span>'),
    t('Kurssin tila (field_kurssin_tila)'),
    t('Page'),
    t('more'),
    t('<p>Kurssitarjonta sivulla voit tutustua ja ilmoittautua aPajiin. Jos itseä innostavaa ja kiinnostavaa aPajaa ei löydy, luo oma unelmien aPaja.</p>
<p></p>
<p>Käytä alla olevia valikkoja eri vaiheessa olevien aPajien etsimiseen. Valmisteilla olevia aPajia suunnitellaan yhteisöllisesti ja olet tervetullut mukaan alusta alkaen! Valmisteilla olevaan aPajaan sitovan ilmoittautumisen voit tehdä vasta myöhemmin. Tarjolla olevat kurssit ovat valmiita aPajia, joille voit ilmoittautua sitovasti.</p>'),
    t('Kurssin alkamispäivämäärä'),
    t('Hinta'),
    t('aPajan tila'),
  );
  $export['kurssitarjontasivu'] = $view;

  return $export;
}
