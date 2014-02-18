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
  $handler->display->display_options['title'] = 'Päättyneet';
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
  $handler->display->display_options['style_options']['auto'] = '20';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = '200';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Arvio */
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_minimi_osallistujat']['id'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['table'] = 'field_data_field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['field'] = 'field_minimi_osallistujat';
  $handler->display->display_options['fields']['field_minimi_osallistujat']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['id'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['table'] = 'field_data_field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['field'] = 'field_maksimi_osallistujat';
  $handler->display->display_options['fields']['field_maksimi_osallistujat']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Kurssin tila (field_kurssin_tila) */
  $handler->display->display_options['filters']['field_kurssin_tila_value']['id'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['field'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['value'] = array(
    3 => '3',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="/kurssit/paattyneet">Päättyneet</a>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['exclude'] = TRUE;
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
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

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
  /* Field: Content: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['exclude'] = TRUE;
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
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'kurssit/paattyneet';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Päättyneet';
  $handler->display->display_options['menu']['description'] = 'Kurssit jotka ovat päättyneet';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['courses_ended'] = array(
    t('Master'),
    t('Päättyneet'),
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
    t('Broken handler field_data_field_minimi_osallistujat.field_minimi_osallistujat'),
    t('Broken handler field_data_field_maksimi_osallistujat.field_maksimi_osallistujat'),
    t('Block'),
    t('<a href="/kurssit/paattyneet">Päättyneet</a>'),
    t('more'),
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
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
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
  /* Field: Content: Kurssin tila */
  $handler->display->display_options['fields']['field_kurssin_tila']['id'] = 'field_kurssin_tila';
  $handler->display->display_options['fields']['field_kurssin_tila']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['fields']['field_kurssin_tila']['field'] = 'field_kurssin_tila';
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
  /* Filter criterion: Content: Kurssin tila (field_kurssin_tila) */
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="/kurssit/kurssitarjonta">Kurssitarjonta</a>';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['exclude'] = TRUE;
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
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Attendees_min */
  $handler->display->display_options['fields']['field_hintalaskuri']['id'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['table'] = 'field_data_field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['field'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['ui_name'] = 'Attendees_min';
  $handler->display->display_options['fields']['field_hintalaskuri']['label'] = '';
  $handler->display->display_options['fields']['field_hintalaskuri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hintalaskuri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hintalaskuri']['click_sort_column'] = 'attendees_min';
  $handler->display->display_options['fields']['field_hintalaskuri']['type'] = 'paja_course_price_attendees_min';
  /* Field: Attendees_max */
  $handler->display->display_options['fields']['field_hintalaskuri_1']['id'] = 'field_hintalaskuri_1';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['table'] = 'field_data_field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['field'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['ui_name'] = 'Attendees_max';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['label'] = '';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hintalaskuri_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hintalaskuri_1']['click_sort_column'] = 'attendees_max';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['type'] = 'paja_course_price_attendees_max';
  /* Field: Member count */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Member count';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<span class="views-label">Ilmoittautuneita [php_1] / [field_hintalaskuri] (enintään [field_hintalaskuri_1])</span>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_list_all');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'courses-not-page-row';
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
  $handler->display->display_options['header']['area_text_custom']['content'] = '<span id="kurssitarjonta-link"><a href="/kurssit/kurssitarjonta">Kurssitarjonta</a></span><span id="kurssilistaus-link"><a href="/kurssit/kurssilistaus">Kurssilistaus</a></span>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['exclude'] = TRUE;
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
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Attendees_min */
  $handler->display->display_options['fields']['field_hintalaskuri']['id'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['table'] = 'field_data_field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['field'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri']['ui_name'] = 'Attendees_min';
  $handler->display->display_options['fields']['field_hintalaskuri']['label'] = '';
  $handler->display->display_options['fields']['field_hintalaskuri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hintalaskuri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hintalaskuri']['click_sort_column'] = 'attendees_min';
  $handler->display->display_options['fields']['field_hintalaskuri']['type'] = 'paja_course_price_attendees_min';
  /* Field: Attendees_max */
  $handler->display->display_options['fields']['field_hintalaskuri_1']['id'] = 'field_hintalaskuri_1';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['table'] = 'field_data_field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['field'] = 'field_hintalaskuri';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['ui_name'] = 'Attendees_max';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['label'] = '';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hintalaskuri_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hintalaskuri_1']['click_sort_column'] = 'attendees_max';
  $handler->display->display_options['fields']['field_hintalaskuri_1']['type'] = 'paja_course_price_attendees_max';
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
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="views-label">Ilmoittautuneita [php_1] / [field_hintalaskuri] (enintään [field_hintalaskuri_1])</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="views-label">Ilmoittautuneita [php_1] / [field_minimi_osallistujat] (enintään [field_maksimi_osallistujat])</span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'sadfasdfdasfasdfasd';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Kurssitarjonta';
  $handler->display->display_options['menu']['description'] = 'Kurssit jotka ovat valmisteilla';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Kurssi alkaa (field_kurssi_alkaa) */
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
  /* Filter criterion: Content: Kurssin tila (field_kurssin_tila) */
  $handler->display->display_options['filters']['field_kurssin_tila_value']['id'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['field'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_kurssin_tila_value']['group'] = 1;
  $handler->display->display_options['filters']['field_kurssin_tila_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['operator_id'] = 'field_kurssin_tila_value_op';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['label'] = 'Kurssin tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['operator'] = 'field_kurssin_tila_value_op';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['identifier'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'kurssit/kurssitarjonta';
  $translatables['courses_not'] = array(
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
    t('Kurssin vetäjä'),
    t('Kurssin ajankohta'),
    t('[field_kurssi_alkaa] - [field_kurssi_loppuu]'),
    t('Kurssin tila'),
    t('Member count'),
    t('<span class="views-label">Ilmoittautuneita [php] / [field_hintalaskuri] (enintään [field_hintalaskuri_1])</span>'),
    t('Kurssin tila (field_kurssin_tila)'),
    t('Block'),
    t('<a href="/kurssit/kurssitarjonta">Kurssitarjonta</a>'),
    t('more'),
    t('<span class="views-label">Ilmoittautuneita [php_1] / [field_hintalaskuri] (enintään [field_hintalaskuri_1])</span>'),
    t('Page'),
    t('<span id="kurssitarjonta-link"><a href="/kurssit/kurssitarjonta">Kurssitarjonta</a></span><span id="kurssilistaus-link"><a href="/kurssit/kurssilistaus">Kurssilistaus</a></span>'),
    t('<span class="views-label">Ilmoittautuneita [php_1] / [field_minimi_osallistujat] (enintään [field_maksimi_osallistujat])</span>'),
    t('Kurssin alkamispäivämäärä'),
    t('Hinta'),
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
  $handler->display->display_options['title'] = 'Käynnissä';
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
  $handler->display->display_options['style_options']['auto'] = '20';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = '200';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
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
  /* Field: Content: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['exclude'] = TRUE;
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
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Kurssin tila (field_kurssin_tila) */
  $handler->display->display_options['filters']['field_kurssin_tila_value']['id'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['table'] = 'field_data_field_kurssin_tila';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['field'] = 'field_kurssin_tila_value';
  $handler->display->display_options['filters']['field_kurssin_tila_value']['value'] = array(
    2 => '2',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_slider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<a href="/kurssit/kaynnissa">Käynnissä</a>';
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
  $handler->display->display_options['path'] = 'kurssit/kaynnissa';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Käynnissä';
  $handler->display->display_options['menu']['description'] = 'Kurssit jotka ovat käynnissä';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['courses_started'] = array(
    t('Master'),
    t('Käynnissä'),
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
    t('Block'),
    t('<a href="/kurssit/kaynnissa">Käynnissä</a>'),
    t('more'),
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
  /* Field: Content: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['exclude'] = TRUE;
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
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_kurssi_alkaa] - [field_kurssi_loppuu]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Tuottajan valinta (field_tuottajan_valinta) */
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
  /* Field: Content: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['label'] = '';
  $handler->display->display_options['fields']['field_arvio']['exclude'] = TRUE;
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
  /* Field: Content: Kurssin vetäjä */
  $handler->display->display_options['fields']['field_kurssin_vetaja']['id'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['table'] = 'field_data_field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['field'] = 'field_kurssin_vetaja';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
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
    t('Block'),
    t('<a href="/kurssit/tuottajan-valinnat">Tuottajan valinnat</a>'),
    t('more'),
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
  /* Field: Content: Ylempi slogan */
  $handler->display->display_options['fields']['field_ylempi_slogan']['id'] = 'field_ylempi_slogan';
  $handler->display->display_options['fields']['field_ylempi_slogan']['table'] = 'field_data_field_ylempi_slogan';
  $handler->display->display_options['fields']['field_ylempi_slogan']['field'] = 'field_ylempi_slogan';
  $handler->display->display_options['fields']['field_ylempi_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_ylempi_slogan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ylempi_slogan']['type'] = 'text_plain';
  /* Field: Content: Alempi slogan */
  $handler->display->display_options['fields']['field_alempi_slogan']['id'] = 'field_alempi_slogan';
  $handler->display->display_options['fields']['field_alempi_slogan']['table'] = 'field_data_field_alempi_slogan';
  $handler->display->display_options['fields']['field_alempi_slogan']['field'] = 'field_alempi_slogan';
  $handler->display->display_options['fields']['field_alempi_slogan']['label'] = '';
  $handler->display->display_options['fields']['field_alempi_slogan']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alempi_slogan']['type'] = 'text_plain';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
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
    t('more'),
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
  /* Field: Content: Video */
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
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    t('more'),
  );
  $export['intro_video'] = $view;

  $view = new view();
  $view->name = 'omat_kurssit';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Omat kurssit';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Omat kurssit';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Käytä';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Merkintöjä sivua kohti';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kaikki -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ensimmäinen';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ edellinen';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seuraava ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimeinen »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'status' => 'status',
    'edit_node' => 'delete_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'medium';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Tila';
  $handler->display->display_options['fields']['status']['alter']['text'] = '[status] julkaistu';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Toimenpiteet';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'kurssi' => 'kurssi',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'omat-kurssit';
  $translatables['omat_kurssit'] = array(
    t('Master'),
    t('Omat kurssit'),
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
    t('author'),
    t('Title'),
    t('Updated date'),
    t('Tila'),
    t('[status] julkaistu'),
    t('Toimenpiteet'),
    t('Page'),
    t('more'),
  );
  $export['omat_kurssit'] = $view;

  return $export;
}
