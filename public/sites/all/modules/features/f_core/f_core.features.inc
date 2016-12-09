<?php
/**
 * @file
 * f_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function f_core_image_default_styles() {
  $styles = array();

  // Exported image style: performances-img.
  $styles['performances-img'] = array(
    'label' => 'performances-img',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 140,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function f_core_node_info() {
  $items = array(
    'about_malmoscenen' => array(
      'name' => t('About Malmoscenen'),
      'base' => 'node_content',
      'description' => t('Create a simple page about Malmöscenen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'after_activity' => array(
      'name' => t('After Activity'),
      'base' => 'node_content',
      'description' => t('A suggestion to do After the main activity(performance).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'before_activity' => array(
      'name' => t('Before Activity'),
      'base' => 'node_content',
      'description' => t('A suggestion to do before the main activity(performance).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'malmo_opera' => array(
      'name' => t('Malmö Opera'),
      'base' => 'node_content',
      'description' => t('Add a new performance for Malmö Opera.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'malmo_stadsteater' => array(
      'name' => t('Malmö Stadsteater'),
      'base' => 'node_content',
      'description' => t('Add a new performance for Malmö Stadsteater.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'skanes_dansteater' => array(
      'name' => t('Skånes Dansteater'),
      'base' => 'node_content',
      'description' => t('Add a new performance for Skånes Dansteater.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
