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
  $view->name = 'courses_not_started';
  $view->description = 'Courses that are not started yet. Necessary blocks and pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses not started';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Valmisteilla olevat kurssit';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_kurssin_kuva' => 0,
    'title' => 0,
    'body' => 0,
    'field_kurssin_vetaja' => 0,
    'field_kurssi_alkaa' => 0,
    'field_kurssi_loppuu' => 0,
    'nothing' => 0,
    'field_minimi_osallistujat' => 0,
    'field_maksimi_osallistujat' => 0,
    'field_hinnan_tyyppi' => 0,
    'field_hinta' => 0,
    'php_1' => 0,
    'nothing_2' => 0,
    'nothing_1' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_kurssin_kuva' => 0,
    'title' => 0,
    'body' => 0,
    'field_kurssin_vetaja' => 0,
    'field_kurssi_alkaa' => 0,
    'field_kurssi_loppuu' => 0,
    'nothing' => 0,
    'field_minimi_osallistujat' => 0,
    'field_maksimi_osallistujat' => 0,
    'field_hinnan_tyyppi' => 0,
    'field_hinta' => 0,
    'php_1' => 0,
    'nothing_2' => 0,
    'nothing_1' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Kurssin kuva */
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Field: Content: Kurssi alkaa */
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
  /* Field: Content: Kurssi loppuu */
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
  /* Field: Content: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Field: Content: Hinta */
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
  /* Field: Global: PHP */
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="views-label">Osallistujamäärä [php_1] / [field_minimi_osallistujat] (enintään [field_maksimi_osallistujat])</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Hinta / osallistuja';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
  if($data->field_field_hinnan_tyyppi[0][\'raw\'][\'value\'] == 0){
    if($row->php_1 != 0){
      if (($data->field_field_hinta[0][\'raw\'][\'value\']/$row->php_1) < ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\'])) {
        $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$row->php_1);
      }else {
        $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']);
      }
    }else{
      $price = ($data->field_field_hinta[0][\'raw\'][\'value\']/$data->field_field_minimi_osallistujat[0][\'raw\'][\'value\']);
    }
  }else{
    $price = $data->field_field_hinta[0][\'raw\'][\'value\'];
  }
  echo round($price, 2, PHP_ROUND_HALF_UP) . \'€\';
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Kurssi alkaa (field_kurssi_alkaa) */
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['id'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['table'] = 'field_data_field_kurssi_alkaa';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['field'] = 'field_kurssi_alkaa_value';
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
  /* Filter criterion: Content: Kurssi alkaa (field_kurssi_alkaa) */
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['id'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['table'] = 'field_data_field_kurssi_alkaa';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['field'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_kurssin_kuva' => 0,
    'title' => 0,
    'body' => 0,
    'field_kurssin_vetaja' => 0,
    'field_kurssi_alkaa' => 0,
    'field_kurssi_loppuu' => 0,
    'nothing' => 0,
    'field_minimi_osallistujat' => 0,
    'field_maksimi_osallistujat' => 0,
    'field_hinnan_tyyppi' => 0,
    'field_hinta' => 0,
    'php_1' => 0,
    'nothing_2' => 0,
    'nothing_1' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_kurssin_kuva' => 0,
    'title' => 0,
    'body' => 0,
    'field_kurssin_vetaja' => 0,
    'field_kurssi_alkaa' => 0,
    'field_kurssi_loppuu' => 0,
    'nothing' => 0,
    'field_minimi_osallistujat' => 0,
    'field_maksimi_osallistujat' => 0,
    'field_hinnan_tyyppi' => 0,
    'field_hinta' => 0,
    'php_1' => 0,
    'nothing_2' => 0,
    'nothing_1' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '15000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '500';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_when_hidden'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '4';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '15000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_caching'] = '-1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_list_all');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'courses-not-started-page-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'valmisteltavat-kurssit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Valmisteltavat kurssit';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['courses_not_started'] = $view;

  $view = new view();
  $view->name = 'courses_started';
  $view->description = 'Courses that are not started yet. Necessary blocks and pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courses - started';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Käynnissä olevat kurssit';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_kurssin_kuva' => 0,
    'title' => 0,
    'body' => 0,
    'field_kurssin_vetaja' => 0,
    'field_kurssi_alkaa' => 0,
    'field_kurssi_loppuu' => 0,
    'nothing' => 0,
    'field_minimi_osallistujat' => 0,
    'field_maksimi_osallistujat' => 0,
    'field_hinnan_tyyppi' => 0,
    'field_hinta' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '2';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_kurssin_kuva' => 0,
    'title' => 0,
    'body' => 0,
    'field_kurssin_vetaja' => 0,
    'field_kurssi_alkaa' => 0,
    'field_kurssi_loppuu' => 0,
    'nothing' => 0,
    'field_minimi_osallistujat' => 0,
    'field_maksimi_osallistujat' => 0,
    'field_hinnan_tyyppi' => 0,
    'field_hinta' => 0,
    'php' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '15000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_when_hidden'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '4';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '15000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Kurssin kuva */
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Field: Content: Kurssi alkaa */
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
  /* Field: Content: Kurssi loppuu */
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
  /* Field: Content: Minimi osallistujamäärä */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Maksimi osallistujamäärä */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hinnan tyyppi */
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['id'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['table'] = 'field_data_field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['field'] = 'field_hinnan_tyyppi';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['label'] = '';
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hinnan_tyyppi']['element_label_colon'] = FALSE;
  /* Field: Content: Hinta */
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
  /* Field: Global: PHP */
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
  /* Sort criterion: Content: Kurssi alkaa (field_kurssi_alkaa) */
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['id'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['table'] = 'field_data_field_kurssi_alkaa';
  $handler->display->display_options['sorts']['field_kurssi_alkaa_value']['field'] = 'field_kurssi_alkaa_value';
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
  /* Filter criterion: Content: Kurssi loppuu (field_kurssi_loppuu) */
  $handler->display->display_options['filters']['field_kurssi_loppuu_value']['id'] = 'field_kurssi_loppuu_value';
  $handler->display->display_options['filters']['field_kurssi_loppuu_value']['table'] = 'field_data_field_kurssi_loppuu';
  $handler->display->display_options['filters']['field_kurssi_loppuu_value']['field'] = 'field_kurssi_loppuu_value';
  $handler->display->display_options['filters']['field_kurssi_loppuu_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_kurssi_loppuu_value']['group'] = 1;
  $handler->display->display_options['filters']['field_kurssi_loppuu_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_kurssi_loppuu_value']['default_date'] = 'now';
  /* Filter criterion: Content: Kurssi alkaa (field_kurssi_alkaa) */
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['id'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['table'] = 'field_data_field_kurssi_alkaa';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['field'] = 'field_kurssi_alkaa_value';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_kurssi_alkaa_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
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
  $handler->display->display_options['path'] = 'kaynnistetyt-kurssit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Käynnistetyt kurssit';
  $handler->display->display_options['menu']['description'] = 'Kurssit jotka on käynnissä';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['courses_started'] = $view;

  return $export;
}
