<?php
/**
 * @file
 * content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aikataulu|node|kurssi|form';
  $field_group->group_name = 'group_aikataulu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kurssi';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipage_container';
  $field_group->data = array(
    'label' => 'Aikataulu',
    'weight' => '26',
    'children' => array(
      0 => 'field_kurssi_alkaa',
      1 => 'field_kurssi_loppuu',
      2 => 'group_access',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Aikataulu',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_aikataulu|node|kurssi|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hintalaskuri|node|kurssi|form';
  $field_group->group_name = 'group_hintalaskuri';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kurssi';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipage_container';
  $field_group->data = array(
    'label' => 'Hintalaskuri',
    'weight' => '25',
    'children' => array(
      0 => 'field_hinnan_tyyppi',
      1 => 'field_hinta',
      2 => 'field_maksimi_osallistujat',
      3 => 'field_minimi_osallistujat',
      4 => 'field_hintalaskuri',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Hintalaskuri',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_hintalaskuri|node|kurssi|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lisatiedot|node|kurssi|form';
  $field_group->group_name = 'group_lisatiedot';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kurssi';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipage_container';
  $field_group->data = array(
    'label' => 'Lisätiedot',
    'weight' => '24',
    'children' => array(
      0 => 'field_kurssin_vetaja',
      1 => 'field_arvio',
      2 => 'field_kurssin_tila',
      3 => 'field_tuottajan_valinta',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Lisätiedot',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_lisatiedot|node|kurssi|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multipage_container|node|kurssi|form';
  $field_group->group_name = 'group_multipage_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kurssi';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multipage container',
    'weight' => '0',
    'children' => array(
      0 => 'group_aikataulu',
      1 => 'group_hintalaskuri',
      2 => 'group_lisatiedot',
      3 => 'group_sisalto',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_multipage_container|node|kurssi|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sisalto|node|kurssi|form';
  $field_group->group_name = 'group_sisalto';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'kurssi';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_multipage_container';
  $field_group->data = array(
    'label' => 'Sisältö',
    'weight' => '22',
    'children' => array(
      0 => 'body',
      1 => 'field_kurssin_kuva',
      2 => 'field_tagit',
      3 => 'field_summary',
      4 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Sisältö',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sisalto|node|kurssi|form'] = $field_group;

  return $export;
}
