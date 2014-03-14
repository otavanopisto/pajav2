<?php
/**
 * @file
 * apaja_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function apaja_blog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blogikirjoutukset';
  $view->description = 'Displays all blog entries written by users';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog entries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blogi';
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
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
global $user;
  if ($user->uid) {
?>
<div class="blog-new-entry">
   <span class="blog-new-entry-container"><a href="/node/add/blog-entry"><?php echo t(\'Lisää uusi blogikirjoitus\'); ?></a>
</div>
<?php }
?>';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
    'blog_entry' => 'blog_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_list_all');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog-listing-page-row';
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
  /* Field: Content: Blogin kuva */
  $handler->display->display_options['fields']['field_blogin_kuva']['id'] = 'field_blogin_kuva';
  $handler->display->display_options['fields']['field_blogin_kuva']['table'] = 'field_data_field_blogin_kuva';
  $handler->display->display_options['fields']['field_blogin_kuva']['field'] = 'field_blogin_kuva';
  $handler->display->display_options['fields']['field_blogin_kuva']['label'] = '';
  $handler->display->display_options['fields']['field_blogin_kuva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blogin_kuva']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blogin_kuva']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '290';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = 'div';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Etunimi */
  $handler->display->display_options['fields']['field_account_etunimi']['id'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['table'] = 'field_data_field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['field'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_account_etunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_etunimi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_account_etunimi']['element_label_colon'] = FALSE;
  /* Field: User: Sukunimi */
  $handler->display->display_options['fields']['field_account_sukunimi']['id'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['table'] = 'field_data_field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['field'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_account_sukunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['text'] = '<div class="view-field-postdate-wrapper"><a href="user/[uid]" class="view-field-authorlink">[field_account_etunimi] [field_account_sukunimi]</a></div>';
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_account_sukunimi']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'blog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blogi';
  $handler->display->display_options['menu']['description'] = 'aPajan blogi';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['blogikirjoutukset'] = array(
    t('Master'),
    t('Blogi'),
    t('lisää'),
    t('Käytä'),
    t('Palauta oletusarvoihin'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('author'),
    t('[title]'),
    t('<div class="field-content">[field_summary]</div>'),
    t('Kurssin vetäjä'),
    t('Kurssin ajankohta'),
    t('[field_kurssi_alkaa] - [field_kurssi_loppuu]'),
    t('Broken handler field_data_field_minimi_osallistujat.field_minimi_osallistujat'),
    t('Broken handler field_data_field_maksimi_osallistujat.field_maksimi_osallistujat'),
    t('Page'),
    t('more'),
    t('<div class="view-field-postdate-wrapper"><a href="user/[uid]" class="view-field-authorlink">[field_account_etunimi] [field_account_sukunimi]</a></div>'),
  );
  $export['blogikirjoutukset'] = $view;

  return $export;
}
