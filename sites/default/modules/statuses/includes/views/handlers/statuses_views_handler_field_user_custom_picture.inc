<?php

/**
 * @file
*   Handling for the sender's picture in Views.
*/

/**
 * Shows the profile picture for the user that sent the status.
*/
// TODO: Poista kovakoodaukset ja lisää image style optiot yms.
class statuses_views_handler_field_user_custom_picture extends views_handler_field {
  
  function option_definition() {
    $options = parent::option_definition();
    if (module_exists('image')) {
      $options['image_style'] = array(
          'default' => variable_get('user_picture_imagecache_profiles_default', ''),
          'translatable' => FALSE,
      );
    }
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    if (module_exists('image')) {
      $options = $this->options;
      $form['image_style'] = array(
          '#title' => t('Image style'),
          '#type'  => 'image',
          '#options' => image_style_options(TRUE),
          '#default_value' => $options['image_style'],
      );
    }
  }
  // TODO: Userit voisi cachettaa.
  function render($values) {
    $account = user_load($values->{$this->field_alias});
    $options = $this->options;
    $custom_image_field = field_view_field('user', $account, 'field_kuva', array(
        'type' => 'image',
        'label' => 'hidden',
        'settings' => array(
            'image_style' => 'avatar',
            'image_link' => 'none', // file or content.
          ),
        ));
    $preset = NULL;
    if (isset($options['image_style']) && $options['image_style']) {
      $preset = $options['image_style'];
    }
    
//     if(!$custom_image_field){
//       $custom_image_field['uri'] = 
//     }
//     $custom_image_field['height'] = '48px';
//     $custom_image_field['width'] = '48px';    
//     $picture = theme('image_formatter', array(
//         'item' => $custom_image_field,
// //         'image_style' => 'thumbnail',
//     ));
//     if (!empty($picture)) {
//       return '<div class="statuses-sender-picture user-picture">'. $picture .'</div>';
//     }
    return '<div class="statuses-sender-picture user-picture">'. drupal_render($custom_image_field) . '</div>';
  }
}
