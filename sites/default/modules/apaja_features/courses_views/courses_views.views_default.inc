<?php
/**
 * @file
 * courses_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function courses_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'courses_ended';
  $view->description = 'Courses that are ended';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses ended';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Menneet';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = '200';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Hinta */
  $handler->display->display_options['fields']['field_hinta']['id'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['table'] = 'field_data_field_hinta';
  $handler->display->display_options['fields']['field_hinta']['field'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['label'] = '';
  $handler->display->display_options['fields']['field_hinta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hinta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){ 
$query = db_select(\'users\', \'u\');
$query ->condition(\'u.uid\', 0, \'<>\')
 ->condition(\'u.status\', 1, \'=\')
 ->fields(\'u\', array(\'uid\', \'name\'))
 ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
 $result = $query->execute(); 
$memberCount = $result->rowCount(); 
if($memberCount != 0){ 
  if (($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0]  [\'raw\'][\'value\'])) { 
   $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount); 
  }else {
    $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']); }
   }
 }else{ $price = $data->field_field_hinta[0][\'raw\'][\'value\']; }


 echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Lajittelukriteeri: Sisältö: Päivitetty */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kurssi' => 'kurssi',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Suodatinkriteeri: Sisältö: Kurssin tila (field_kurssin_tila) */
  $handler->display->display_options['filters']['field_kurssin_tila_value']['id'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['field'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['value'] = array(
    2 => '2',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="/kurssit/menneet">Menneet</a>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Hinta */
  $handler->display->display_options['fields']['field_hinta']['id'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['table'] = 'field_data_field_hinta';
  $handler->display->display_options['fields']['field_hinta']['field'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['label'] = '';
  $handler->display->display_options['fields']['field_hinta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hinta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){ 
$query = db_select(\'users\', \'u\');
$query ->condition(\'u.uid\', 0, \'<>\')
 ->condition(\'u.status\', 1, \'=\')
 ->fields(\'u\', array(\'uid\', \'name\'))
 ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
 $result = $query->execute(); 
$memberCount = $result->rowCount(); 
if($memberCount != 0){ 
  if (($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0]  [\'raw\'][\'value\'])) { 
   $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount); 
  }else {
    $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']); }
   }
 }else{ $price = $data->field_field_hinta[0][\'raw\'][\'value\']; }


 echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_list_all');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'courses-ended-page-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Hinta */
  $handler->display->display_options['fields']['field_hinta']['id'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['table'] = 'field_data_field_hinta';
  $handler->display->display_options['fields']['field_hinta']['field'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['label'] = '';
  $handler->display->display_options['fields']['field_hinta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hinta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){ 
$query = db_select(\'users\', \'u\');
$query ->condition(\'u.uid\', 0, \'<>\')
 ->condition(\'u.status\', 1, \'=\')
 ->fields(\'u\', array(\'uid\', \'name\'))
 ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
 $result = $query->execute(); 
$memberCount = $result->rowCount(); 
if($memberCount != 0){ 
  if (($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0]  [\'raw\'][\'value\'])) { 
   $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount); 
  }else {
    $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']); }
   }
 }else{ $price = $data->field_field_hinta[0][\'raw\'][\'value\']; }


 echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'kurssit/menneet';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Menneet';
  $handler->display->display_options['menu']['description'] = 'Kurssit jotka ovat päättyneet';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['courses_ended'] = array(
    t('Master'),
    t('Menneet'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('[title]'),
    t('<div class="field-content">[field_summary]</div>'),
    t('Kurssin vetäjä'),
    t('Kurssin ajankohta'),
    t('[field_kurssi_alkaa] - [field_kurssi_loppuu]'),
    t('Minimi osallistujamäärä'),
    t('Maksimi osallistujamäärä'),
    t('Hinta'),
    t('Block'),
    t('<a href="/kurssit/menneet">Menneet</a>'),
    t('Page'),
  );
  $export['courses_ended'] = $view;

  $view = new view();
  $view->name = 'courses_not';
  $view->description = 'Courses that are started. Necessary blocks and pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses not started';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Valmisteltavat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = '200';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
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
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Hinta */
  $handler->display->display_options['fields']['field_hinta']['id'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['table'] = 'field_data_field_hinta';
  $handler->display->display_options['fields']['field_hinta']['field'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['label'] = '';
  $handler->display->display_options['fields']['field_hinta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hinta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){ 
$query = db_select(\'users\', \'u\');
$query ->condition(\'u.uid\', 0, \'<>\')
 ->condition(\'u.status\', 1, \'=\')
 ->fields(\'u\', array(\'uid\', \'name\'))
 ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
 $result = $query->execute(); 
$memberCount = $result->rowCount(); 
if($memberCount != 0){ 
  if (($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0]  [\'raw\'][\'value\'])) { 
   $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount); 
  }else {
    $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']); }
   }
 }else{ $price = $data->field_field_hinta[0][\'raw\'][\'value\']; }


 echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  /* Lajittelukriteeri: Sisältö: Päivitetty */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kurssi' => 'kurssi',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Suodatinkriteeri: Sisältö: Kurssin tila (field_kurssin_tila) */
  $handler->display->display_options['filters']['field_kurssin_tila_value']['id'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['field'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['value'] = array(
    0 => '0',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="/kurssit/valmisteltavat"> Valmisteltavat</a>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Hinta */
  $handler->display->display_options['fields']['field_hinta']['id'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['table'] = 'field_data_field_hinta';
  $handler->display->display_options['fields']['field_hinta']['field'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['label'] = '';
  $handler->display->display_options['fields']['field_hinta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hinta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Member count';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$query1 = db_select(\'users\', \'u\');
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
  $handler->display->display_options['fields']['php_1']['php_output'] = '';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<span class="views-label">Ilmoittautuneita [php_1] / [field_minimi_osallistujat] (enintään [field_maksimi_osallistujat])</span>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta / osallistuja';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){ 
$query = db_select(\'users\', \'u\');
$query ->condition(\'u.uid\', 0, \'<>\')
 ->condition(\'u.status\', 1, \'=\')
 ->fields(\'u\', array(\'uid\', \'name\'))
 ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
 $result = $query->execute(); 
$memberCount = $result->rowCount(); 
if($memberCount != 0){ 
  if (($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0]  [\'raw\'][\'value\'])) { 
   $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount); 
  }else {
    $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']); }
   }
 }else{ $price = $data->field_field_hinta[0][\'raw\'][\'value\']; }


 echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_list_all');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'courses-not-page-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
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
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Hinta */
  $handler->display->display_options['fields']['field_hinta']['id'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['table'] = 'field_data_field_hinta';
  $handler->display->display_options['fields']['field_hinta']['field'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['label'] = '';
  $handler->display->display_options['fields']['field_hinta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hinta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Member count';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$query1 = db_select(\'users\', \'u\');
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
  $handler->display->display_options['fields']['php_1']['php_output'] = '';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="views-label">Ilmoittautuneita [php_1] / [field_minimi_osallistujat] (enintään [field_maksimi_osallistujat])</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="views-label">Ilmoittautuneita [php_1] / [field_minimi_osallistujat] (enintään [field_maksimi_osallistujat])</span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta / osallistuja';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){ 
$query = db_select(\'users\', \'u\');
$query ->condition(\'u.uid\', 0, \'<>\')
 ->condition(\'u.status\', 1, \'=\')
 ->fields(\'u\', array(\'uid\', \'name\'))
 ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
 $result = $query->execute(); 
$memberCount = $result->rowCount(); 
if($memberCount != 0){ 
  if (($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0]  [\'raw\'][\'value\'])) { 
   $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount); 
  }else {
    $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']); }
   }
 }else{ $price = $data->field_field_hinta[0][\'raw\'][\'value\']; }


 echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'kurssit/valmisteltavat';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Valmisteltavat';
  $handler->display->display_options['menu']['description'] = 'Kurssit jotka ovat valmisteilla';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['courses_not'] = array(
    t('Master'),
    t('Valmisteltavat'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('[title]'),
    t('<div class="field-content">[field_summary]</div>'),
    t('Kurssin vetäjä'),
    t('Kurssin ajankohta'),
    t('[field_kurssi_alkaa] - [field_kurssi_loppuu]'),
    t('Minimi osallistujamäärä'),
    t('Maksimi osallistujamäärä'),
    t('Hinta'),
    t('PHP'),
    t('Block'),
    t('<a href="/kurssit/valmisteltavat"> Valmisteltavat</a>'),
    t('Member count'),
    t('<span class="views-label">Ilmoittautuneita [php_1] / [field_minimi_osallistujat] (enintään [field_maksimi_osallistujat])</span>'),
    t('Hinta / osallistuja'),
    t('Page'),
  );
  $export['courses_not'] = $view;

  $view = new view();
  $view->name = 'courses_started';
  $view->description = 'Courses that are started. Necessary blocks and pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses started';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Käynnistetyt';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = '200';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Hinta */
  $handler->display->display_options['fields']['field_hinta']['id'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['table'] = 'field_data_field_hinta';
  $handler->display->display_options['fields']['field_hinta']['field'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['label'] = '';
  $handler->display->display_options['fields']['field_hinta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hinta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){ 
$query = db_select(\'users\', \'u\');
$query ->condition(\'u.uid\', 0, \'<>\')
 ->condition(\'u.status\', 1, \'=\')
 ->fields(\'u\', array(\'uid\', \'name\'))
 ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
 $result = $query->execute(); 
$memberCount = $result->rowCount(); 
if($memberCount != 0){ 
  if (($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0]  [\'raw\'][\'value\'])) { 
   $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount); 
  }else {
    $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']); }
   }
 }else{ $price = $data->field_field_hinta[0][\'raw\'][\'value\']; }


 echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Lajittelukriteeri: Sisältö: Päivitetty */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kurssi' => 'kurssi',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Suodatinkriteeri: Sisältö: Kurssin tila (field_kurssin_tila) */
  $handler->display->display_options['filters']['field_kurssin_tila_value']['id'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['field'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="/kurssit/kaynnistetyt">Käynnistetyt</a>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_list_all');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'courses-started-page-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'kurssit/kaynnistetyt';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Käynnistetyt';
  $handler->display->display_options['menu']['description'] = 'Kurssit jotka ovat käynnissä';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['courses_started'] = array(
    t('Master'),
    t('Käynnistetyt'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('[title]'),
    t('<div class="field-content">[field_summary]</div>'),
    t('Kurssin vetäjä'),
    t('Kurssin ajankohta'),
    t('[field_kurssi_alkaa] - [field_kurssi_loppuu]'),
    t('Minimi osallistujamäärä'),
    t('Maksimi osallistujamäärä'),
    t('Hinta'),
    t('Block'),
    t('<a href="/kurssit/kaynnistetyt">Käynnistetyt</a>'),
    t('Page'),
  );
  $export['courses_started'] = $view;

  $view = new view();
  $view->name = 'editors_choise';
  $view->description = 'Front page Editors Choice';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Editors choice';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tuottajan valinnat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = '';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '15';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = '300';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['navigation'] = 'after';
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
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
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Sisältö: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Hinta */
  $handler->display->display_options['fields']['field_hinta']['id'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['table'] = 'field_data_field_hinta';
  $handler->display->display_options['fields']['field_hinta']['field'] = 'field_hinta';
  $handler->display->display_options['fields']['field_hinta']['label'] = '';
  $handler->display->display_options['fields']['field_hinta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hinta']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Kenttä: Yleinen: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){ 
$query = db_select(\'users\', \'u\');
$query ->condition(\'u.uid\', 0, \'<>\')
 ->condition(\'u.status\', 1, \'=\')
 ->fields(\'u\', array(\'uid\', \'name\'))
 ->join(\'og_membership\', \'ogm\', "ogm.gid = :gid AND u.uid = ogm.etid AND ogm.entity_type = \'user\'", array(\':gid\' => $row->nid));
 $result = $query->execute(); 
$memberCount = $result->rowCount(); 
if($memberCount != 0){ 
  if (($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0]  [\'raw\'][\'value\'])) { 
   $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$memberCount); 
  }else {
    $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']); }
   }
 }else{ $price = $data->field_field_hinta[0][\'raw\'][\'value\']; }


 echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\'; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Lajittelukriteeri: Sisältö: Kurssi alkaa (field_kurssi_alkaa) */
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['id'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['table'] = 'field_data_field_kurssi_alkaa';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['field'] = 'field_kurssi_alkaa_value';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kurssi' => 'kurssi',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Suodatinkriteeri: Sisältö: Tuottajan valinta (field_tuottajan_valinta) */
  $handler->display->display_options['filters']['field_tuottajan_valinta_value']['id'] = 'field_tuottajan_valinta_value';
  $handler->display->display_options['filters']['field_tuottajan_valinta_value']['table'] = 'field_data_field_tuottajan_valinta';
  $handler->display->display_options['filters']['field_tuottajan_valinta_value']['field'] = 'field_tuottajan_valinta_value';
  $handler->display->display_options['filters']['field_tuottajan_valinta_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="/kurssit/tuottajan-valinnat">Tuottajan valinnat</a>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Kenttä: Sisältö: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Polku */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Kurssin kuva */
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
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Kenttä: Sisältö: Summary */
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
  /* Kenttä: Sisältö: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_arvio']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_arvio']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/default/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Kenttä: Sisältö: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Kurssi alkaa */
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
  /* Kenttä: Sisältö: Kurssi loppuu */
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
  /* Kenttä: Yleinen: Muokattu teksti */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Kurssin ajankohta';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_list_all');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'editors-choise-page-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'kurssit/tuottajan-valinnat';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tuottajan valinnat';
  $handler->display->display_options['menu']['description'] = 'Kurssit jotka ovat tuottajan valintoja';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['editors_choise'] = array(
    t('Master'),
    t('Tuottajan valinnat'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('[title]'),
    t('<div class="field-content">[field_summary]</div>'),
    t('Kurssin vetäjä'),
    t('Kurssin ajankohta'),
    t('[field_kurssi_alkaa] - [field_kurssi_loppuu]'),
    t('Minimi osallistujamäärä'),
    t('Maksimi osallistujamäärä'),
    t('Hinta'),
    t('Block'),
    t('<a href="/kurssit/tuottajan-valinnat">Tuottajan valinnat</a>'),
    t('Page'),
  );
  $export['editors_choise'] = $view;

  $view = new view();
  $view->name = 'header_slogan';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header slogan';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Sisältö: Ylempi slogan */
  $handler->display->display_options['fields']['field_ylempi_slogan']['id'] = 'field_ylempi_slogan';
  $handler->display->display_options['fields']['field_ylempi_slogan']['table'] = 'field_data_field_ylempi_slogan';
  $handler->display->display_options['fields']['field_ylempi_slogan']['field'] = 'field_ylempi_slogan';
  $handler->display->display_options['fields']['field_ylempi_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_ylempi_slogan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ylempi_slogan']['type'] = 'text_plain';
  /* Kenttä: Sisältö: Alempi slogan */
  $handler->display->display_options['fields']['field_alempi_slogan']['id'] = 'field_alempi_slogan';
  $handler->display->display_options['fields']['field_alempi_slogan']['table'] = 'field_data_field_alempi_slogan';
  $handler->display->display_options['fields']['field_alempi_slogan']['field'] = 'field_alempi_slogan';
  $handler->display->display_options['fields']['field_alempi_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_alempi_slogan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alempi_slogan']['type'] = 'text_plain';
  /* Lajittelukriteeri: Sisältö: Päivitetty */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slogan' => 'slogan',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['header_slogan'] = array(
    t('Master'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['header_slogan'] = $view;

  $view = new view();
  $view->name = 'intro_video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Intro video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kenttä: Sisältö: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'video_style' => 'normal',
  );
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  /* Kenttä: Sisältö: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Lajittelukriteeri: Sisältö: Lähetetty */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intro_video' => 'intro_video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['intro_video'] = array(
    t('Master'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['intro_video'] = $view;

  return $export;
}
