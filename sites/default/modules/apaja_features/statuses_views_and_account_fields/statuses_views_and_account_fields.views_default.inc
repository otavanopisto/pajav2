<?php
/**
 * @file
 * statuses_views_and_account_fields.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function statuses_views_and_account_fields_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'statuses_conversation_profile';
  $view->description = 'Displays the conversation in status messages between two users.';
  $view->tag = 'Statuses';
  $view->base_table = 'statuses';
  $view->human_name = 'Statuses Conversation Profile';
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="statuses-item-[sid]" class="[classes]">
    [sender_custom_pic]
    <div class="content">
      <div class="statuses-participants">[user_contextual] [private] [private] [private]</div>
      [message]
      <div class="statuses-details">
        <div class="statuses-links">[edit] [delete] [repost]</div> [created]
      </div>
      <!-- meta -->[comment-box][comment-box][comment-box]
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
  $translatables['statuses_conversation_profile'] = array(
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
    t('<span class="statuses-sender">[name]</span>'),
    t('<div id="statuses-item-[sid]" class="[classes]">
    [sender_custom_pic]
    <div class="content">
      <div class="statuses-participants">[user_contextual] [private] [private] [private]</div>
      [message]
      <div class="statuses-details">
        <div class="statuses-links">[edit] [delete] [repost]</div> [created]
      </div>
      <!-- meta -->[comment-box][comment-box][comment-box]
    </div>
  </div>'),
    t('All'),
    t('Block'),
  );
  $export['statuses_conversation_profile'] = $view;

  $view = new view();
  $view->name = 'statuses_stream_custom';
  $view->description = 'Displays status updates that match the current recipient context.';
  $view->tag = 'Statuses';
  $view->base_table = 'statuses';
  $view->human_name = 'statuses_stream_custom';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view all statuses';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<div class="generic-empty-text-wrapper">
  <span class="generic-empty-text"><?php echo t(\'Yhtään kommenttia ei ole vielä kirjoitettu.\'); ?></span>
  <?php global $user; if($user->uid == 0) { ?>
    <span class="generic-empty-text"><?php echo l(t(\'Kirjaudu sisään\'), \'login\'); ?></span>
    <span class="generic-empty-text"><?php echo t(\'tai\'); ?></span>
   <span class="generic-empty-text"><?php echo l(t(\'Luo tunnukset\'), \'signup\'); ?></span>
    <span class="generic-empty-text"><?php echo t(\'kirjoittaaksesi kommentin.\'); ?></span>
  <?php } ?> 
</div>
';
  /* Field: Statuses: Sender custom picture */
  $handler->display->display_options['fields']['sender_custom_pic']['id'] = 'sender_custom_pic';
  $handler->display->display_options['fields']['sender_custom_pic']['table'] = 'statuses';
  $handler->display->display_options['fields']['sender_custom_pic']['field'] = 'sender_custom_pic';
  $handler->display->display_options['fields']['sender_custom_pic']['exclude'] = TRUE;
  /* Field: Statuses: Status ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'statuses';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['exclude'] = TRUE;
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
  /* Field: Statuses: Re-post */
  $handler->display->display_options['fields']['repost']['id'] = 'repost';
  $handler->display->display_options['fields']['repost']['table'] = 'statuses';
  $handler->display->display_options['fields']['repost']['field'] = 'repost';
  $handler->display->display_options['fields']['repost']['label'] = '';
  $handler->display->display_options['fields']['repost']['exclude'] = TRUE;
  /* Field: Statuses: Created time */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'statuses';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'statuses/[sid]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="statuses-item-[sid]" class="[classes]">
  [sender_custom_pic]
  <div class="content">
    <div class="statuses-participants">[name] [private] [private]</div>
    [message]
    <div class="statuses-details">
      <div class="statuses-links">[edit] [delete]</div> [created]
    </div>
    <!-- meta -->[comment-box][comment-box]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Statuses: Status ID */
  $handler->display->display_options['sorts']['sid']['id'] = 'sid';
  $handler->display->display_options['sorts']['sid']['table'] = 'statuses';
  $handler->display->display_options['sorts']['sid']['field'] = 'sid';
  $handler->display->display_options['sorts']['sid']['order'] = 'DESC';
  /* Filter criterion: Statuses: Status message */
  $handler->display->display_options['filters']['message']['id'] = 'message';
  $handler->display->display_options['filters']['message']['table'] = 'statuses';
  $handler->display->display_options['filters']['message']['field'] = 'message';
  $handler->display->display_options['filters']['message']['operator'] = '!=';
  $handler->display->display_options['filters']['message']['group'] = '0';
  $handler->display->display_options['filters']['message']['expose']['operator'] = FALSE;
  /* Filter criterion: Statuses: Use current context */
  $handler->display->display_options['filters']['auto-type']['id'] = 'auto-type';
  $handler->display->display_options['filters']['auto-type']['table'] = 'statuses';
  $handler->display->display_options['filters']['auto-type']['field'] = 'auto-type';
  $handler->display->display_options['filters']['auto-type']['group'] = '0';
  $handler->display->display_options['filters']['auto-type']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Statuses: Context-sensitive stream';
  $translatables['statuses_stream_custom'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sender custom picture'),
    t('<span class="statuses-sender">[name]</span>'),
    t('Share'),
    t('<div id="statuses-item-[sid]" class="[classes]">
  [sender_custom_pic]
  <div class="content">
    <div class="statuses-participants">[name] [private] [private]</div>
    [message]
    <div class="statuses-details">
      <div class="statuses-links">[edit] [delete]</div> [created]
    </div>
    <!-- meta -->[comment-box][comment-box]
  </div>
</div>'),
    t('Block'),
    t('Statuses: Context-sensitive stream'),
  );
  $export['statuses_stream_custom'] = $view;

  $view = new view();
  $view->name = 'user_profile_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Käyttäjän tiedot';
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
  $handler->display->display_options['fields']['field_account_etunimi']['element_label_colon'] = FALSE;
  /* Field: User: Sukunimi */
  $handler->display->display_options['fields']['field_account_sukunimi']['id'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['table'] = 'field_data_field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['field'] = 'field_account_sukunimi';
  $handler->display->display_options['fields']['field_account_sukunimi']['label'] = '';
  $handler->display->display_options['fields']['field_account_sukunimi']['element_label_colon'] = FALSE;
  /* Field: User: Kuvaus */
  $handler->display->display_options['fields']['field_account_kuvaus']['id'] = 'field_account_kuvaus';
  $handler->display->display_options['fields']['field_account_kuvaus']['table'] = 'field_data_field_account_kuvaus';
  $handler->display->display_options['fields']['field_account_kuvaus']['field'] = 'field_account_kuvaus';
  $handler->display->display_options['fields']['field_account_kuvaus']['label'] = '';
  $handler->display->display_options['fields']['field_account_kuvaus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_account_kuvaus']['alter']['text'] = '<div class="user-description-label">Kuvaus</div>
<div class="user-description">[field_account_kuvaus-value]</div>';
  $handler->display->display_options['fields']['field_account_kuvaus']['element_label_colon'] = FALSE;
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
  $translatables['user_profile_block'] = array(
    t('Master'),
    t('Käyttäjän tiedot'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="user-description-label">Kuvaus</div>
<div class="user-description">[field_account_kuvaus-value]</div>'),
    t('All'),
    t('Block'),
  );
  $export['user_profile_block'] = $view;

  return $export;
}
