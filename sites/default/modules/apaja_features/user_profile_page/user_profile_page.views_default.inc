<?php
/**
 * @file
 * user_profile_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_profile_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'statuses_conversation_user_profile';
  $view->description = 'Displays the conversation in status messages between two users.';
  $view->tag = 'Statuses';
  $view->base_table = 'statuses';
  $view->human_name = 'Statuses Conversation User Profile';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Statuses Conversation';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view all statuses';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Flags: like */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'statuses';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'like';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Statuses: Status ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'statuses';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
  /* Field: Statuses: Sender custom picture */
  $handler->display->display_options['fields']['sender_custom_pic']['id'] = 'sender_custom_pic';
  $handler->display->display_options['fields']['sender_custom_pic']['table'] = 'statuses';
  $handler->display->display_options['fields']['sender_custom_pic']['field'] = 'sender_custom_pic';
  $handler->display->display_options['fields']['sender_custom_pic']['label'] = '';
  $handler->display->display_options['fields']['sender_custom_pic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sender_custom_pic']['element_label_colon'] = FALSE;
  /* Field: Statuses: HTML classes */
  $handler->display->display_options['fields']['classes']['id'] = 'classes';
  $handler->display->display_options['fields']['classes']['table'] = 'statuses';
  $handler->display->display_options['fields']['classes']['field'] = 'classes';
  $handler->display->display_options['fields']['classes']['label'] = '';
  $handler->display->display_options['fields']['classes']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="statuses-sender">[name]</span>';
  /* Field: Statuses: Sender picture */
  $handler->display->display_options['fields']['sender_pic']['id'] = 'sender_pic';
  $handler->display->display_options['fields']['sender_pic']['table'] = 'statuses';
  $handler->display->display_options['fields']['sender_pic']['field'] = 'sender_pic';
  $handler->display->display_options['fields']['sender_pic']['label'] = '';
  $handler->display->display_options['fields']['sender_pic']['exclude'] = TRUE;
  /* Field: Statuses: Status message */
  $handler->display->display_options['fields']['message']['id'] = 'message';
  $handler->display->display_options['fields']['message']['table'] = 'statuses';
  $handler->display->display_options['fields']['message']['field'] = 'message';
  $handler->display->display_options['fields']['message']['label'] = '';
  $handler->display->display_options['fields']['message']['exclude'] = TRUE;
  /* Field: Statuses: Edit */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'statuses';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  $handler->display->display_options['fields']['edit']['label'] = '';
  $handler->display->display_options['fields']['edit']['exclude'] = TRUE;
  /* Field: Statuses: Delete */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'statuses';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['label'] = '';
  $handler->display->display_options['fields']['delete']['exclude'] = TRUE;
  /* Field: Statuses: Created time */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'statuses';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'statuses/[sid]';
  /* Field: Statuses: Status comment box */
  $handler->display->display_options['fields']['comment-box']['id'] = 'comment-box';
  $handler->display->display_options['fields']['comment-box']['table'] = 'statuses';
  $handler->display->display_options['fields']['comment-box']['field'] = 'comment-box';
  $handler->display->display_options['fields']['comment-box']['label'] = '';
  $handler->display->display_options['fields']['comment-box']['exclude'] = TRUE;
  /* Field: Statuses: The word "<em>(Private)</em>" if the status message is private */
  $handler->display->display_options['fields']['private']['id'] = 'private';
  $handler->display->display_options['fields']['private']['table'] = 'statuses';
  $handler->display->display_options['fields']['private']['field'] = 'private';
  $handler->display->display_options['fields']['private']['label'] = '';
  $handler->display->display_options['fields']['private']['exclude'] = TRUE;
  /* Field: Statuses: Usernames (context-aware) */
  $handler->display->display_options['fields']['user_contextual']['id'] = 'user_contextual';
  $handler->display->display_options['fields']['user_contextual']['table'] = 'statuses';
  $handler->display->display_options['fields']['user_contextual']['field'] = 'user_contextual';
  $handler->display->display_options['fields']['user_contextual']['label'] = '';
  $handler->display->display_options['fields']['user_contextual']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_contextual']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="statuses-item-[sid]" class="[classes]">
    [sender_custom_pic]
    <div class="content">
      <div class="statuses-participants">[user_contextual] [private] [private]</div>
      [message]
      <div class="statuses-details">
        <div class="statuses-links">[edit] [delete] [ops] [repost]</div> [created]
      </div>
      [comment-box]
    </div>
  </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Statuses: Status ID */
  $handler->display->display_options['sorts']['sid']['id'] = 'sid';
  $handler->display->display_options['sorts']['sid']['table'] = 'statuses';
  $handler->display->display_options['sorts']['sid']['field'] = 'sid';
  $handler->display->display_options['sorts']['sid']['order'] = 'DESC';
  /* Contextual filter: Statuses: User is sender or recipient */
  $handler->display->display_options['arguments']['participant']['id'] = 'participant';
  $handler->display->display_options['arguments']['participant']['table'] = 'statuses';
  $handler->display->display_options['arguments']['participant']['field'] = 'participant';
  $handler->display->display_options['arguments']['participant']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['participant']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['participant']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['participant']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['participant']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['participant']['validate']['type'] = 'user';
  /* Filter criterion: Statuses: Status message */
  $handler->display->display_options['filters']['message']['id'] = 'message';
  $handler->display->display_options['filters']['message']['table'] = 'statuses';
  $handler->display->display_options['filters']['message']['field'] = 'message';
  $handler->display->display_options['filters']['message']['operator'] = '!=';
  $handler->display->display_options['filters']['message']['group'] = '0';
  $handler->display->display_options['filters']['message']['expose']['operator'] = FALSE;
  /* Filter criterion: Statuses: Recipient type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'statuses';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'og' => 'og',
    'node' => 'node',
    'term' => 'term',
    'user' => 'user',
    'domain' => 'domain',
  );
  /* Filter criterion: Statuses: Show private status messages */
  $handler->display->display_options['filters']['private']['id'] = 'private';
  $handler->display->display_options['filters']['private']['table'] = 'statuses';
  $handler->display->display_options['filters']['private']['field'] = 'private';
  $handler->display->display_options['filters']['private']['value'] = 'all';
  $handler->display->display_options['filters']['private']['group'] = '0';
  $handler->display->display_options['filters']['private']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['statuses_conversation_user_profile'] = array(
    t('Defaults'),
    t('Statuses Conversation'),
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
    t('flag'),
    t('<span class="statuses-sender">[name]</span>'),
    t('<div id="statuses-item-[sid]" class="[classes]">
    [sender_custom_pic]
    <div class="content">
      <div class="statuses-participants">[user_contextual] [private] [private]</div>
      [message]
      <div class="statuses-details">
        <div class="statuses-links">[edit] [delete] [ops] [repost]</div> [created]
      </div>
      [comment-box]
    </div>
  </div>'),
    t('All'),
    t('Block'),
  );
  $export['statuses_conversation_user_profile'] = $view;

  $view = new view();
  $view->name = 'user_courses';
  $view->description = 'Show groups of a user.';
  $view->tag = 'og';
  $view->base_table = 'og_membership';
  $view->human_name = 'User courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Käyttäjän kurssit';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'User is not a member of any group.';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: Content: Kurssin kuva */
  $handler->display->display_options['fields']['field_kurssin_kuva']['id'] = 'field_kurssin_kuva';
  $handler->display->display_options['fields']['field_kurssin_kuva']['table'] = 'field_data_field_kurssin_kuva';
  $handler->display->display_options['fields']['field_kurssin_kuva']['field'] = 'field_kurssin_kuva';
  $handler->display->display_options['fields']['field_kurssin_kuva']['relationship'] = 'og_membership_related_node_group';
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
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Arvio */
  $handler->display->display_options['fields']['field_arvio']['id'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['table'] = 'field_data_field_arvio';
  $handler->display->display_options['fields']['field_arvio']['field'] = 'field_arvio';
  $handler->display->display_options['fields']['field_arvio']['relationship'] = 'og_membership_related_node_group';
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
  $handler->display->display_options['fields']['field_kurssin_vetaja']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_kurssin_vetaja']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kurssin_vetaja']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="generic-tooltip-wrapper">
  <div class="users-courses-tooltip-image">[field_kurssin_kuva]</div>
  <div class="users-courses-tooltip-title">[title]</div>
  <div class="users-courses-tooltip-desc">[body]</div>
  <div class="users-courses-tooltip-rating">[field_arvio]</div>
  <div class="users-courses-tooltip-admin">[field_kurssin_vetaja]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: We pass to the &quot;Entity ID&quot; the User ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass to the "Entity ID" the User ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['etid']['title'] = '%1 groups';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'etid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'We pass to the &quot;Entity ID&quot; the User ID.',
    ),
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['user_courses'] = array(
    t('Master'),
    t('Käyttäjän kurssit'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('User is not a member of any group.'),
    t('Group node from OG membership'),
    t('Kurssin vetäjä'),
    t('<div class="generic-tooltip-wrapper">
  <div class="users-courses-tooltip-image">[field_kurssin_kuva]</div>
  <div class="users-courses-tooltip-title">[title]</div>
  <div class="users-courses-tooltip-desc">[body]</div>
  <div class="users-courses-tooltip-rating">[field_arvio]</div>
  <div class="users-courses-tooltip-admin">[field_kurssin_vetaja]</div>
</div>'),
    t('All'),
    t('%1 groups'),
    t('Content pane'),
    t('View panes'),
    t('Block'),
  );
  $export['user_courses'] = $view;

  $view = new view();
  $view->name = 'user_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Käyttäjän tiedot';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Kuva */
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
  /* Field: User: Etunimi */
  $handler->display->display_options['fields']['field_account_etunimi']['id'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['table'] = 'field_data_field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['field'] = 'field_account_etunimi';
  $handler->display->display_options['fields']['field_account_etunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_etunimi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_account_etunimi']['element_label_colon'] = FALSE;
  /* Field: User: Sukunimi */
  $handler->display->display_options['fields']['field_account_sukunimi']['id'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['table'] = 'field_data_field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['field'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_account_sukunimi']['alter']['text'] = '[field_account_etunimi] [field_account_sukunimi]';
  $handler->display->display_options['fields']['field_account_sukunimi']['element_label_colon'] = FALSE;
  /* Field: User: Kuvaus */
  $handler->display->display_options['fields']['field_account_kuvaus']['id'] = 'field_account_kuvaus';
  $handler->display->display_options['fields']['field_account_kuvaus']['table'] = 'field_data_field_account_kuvaus';
  $handler->display->display_options['fields']['field_account_kuvaus']['field'] = 'field_account_kuvaus';
  $handler->display->display_options['fields']['field_account_kuvaus']['label'] = '';
  $handler->display->display_options['fields']['field_account_kuvaus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_account_kuvaus']['alter']['text'] = '<div class="user-description">[field_account_kuvaus-value]</div>';
  $handler->display->display_options['fields']['field_account_kuvaus']['element_label_colon'] = FALSE;
  /* Field: User: Tahdon oppia */
  $handler->display->display_options['fields']['field_account_tahdon_oppia']['id'] = 'field_account_tahdon_oppia';
  $handler->display->display_options['fields']['field_account_tahdon_oppia']['table'] = 'field_data_field_account_tahdon_oppia';
  $handler->display->display_options['fields']['field_account_tahdon_oppia']['field'] = 'field_account_tahdon_oppia';
  $handler->display->display_options['fields']['field_account_tahdon_oppia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_tahdon_oppia']['delta_offset'] = '0';
  /* Field: User: Taitoni */
  $handler->display->display_options['fields']['field_account_taitoni']['id'] = 'field_account_taitoni';
  $handler->display->display_options['fields']['field_account_taitoni']['table'] = 'field_data_field_account_taitoni';
  $handler->display->display_options['fields']['field_account_taitoni']['field'] = 'field_account_taitoni';
  $handler->display->display_options['fields']['field_account_taitoni']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_taitoni']['delta_offset'] = '0';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['user_information'] = array(
    t('Master'),
    t('Käyttäjän tiedot'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_account_etunimi] [field_account_sukunimi]'),
    t('<div class="user-description">[field_account_kuvaus-value]</div>'),
    t('Tahdon oppia'),
    t('Taitoni'),
    t('All'),
    t('Block'),
  );
  $export['user_information'] = $view;

  $view = new view();
  $view->name = 'users_events';
  $view->description = 'Provides a tab on all user\'s profile pages containing bookmarks for that user.';
  $view->tag = 'flag';
  $view->base_table = 'node';
  $view->human_name = 'users_events';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Käyttäjän tapahtumat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: event_attend */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'event_attend';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_tapahtuma_aika']['id'] = 'field_tapahtuma_aika';
  $handler->display->display_options['fields']['field_tapahtuma_aika']['table'] = 'field_data_field_tapahtuma_aika';
  $handler->display->display_options['fields']['field_tapahtuma_aika']['field'] = 'field_tapahtuma_aika';
  $handler->display->display_options['fields']['field_tapahtuma_aika']['label'] = '';
  $handler->display->display_options['fields']['field_tapahtuma_aika']['element_label_colon'] = FALSE;
  /* Contextual filter: Flags: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'flag_content';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/tapahtumat';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Tapahtumat';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $translatables['users_events'] = array(
    t('Defaults'),
    t('Käyttäjän tapahtumat'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('All'),
    t('Page'),
    t('Content pane'),
    t('View panes'),
  );
  $export['users_events'] = $view;

  return $export;
}
