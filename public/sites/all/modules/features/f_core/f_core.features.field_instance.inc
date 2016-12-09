<?php
/**
 * @file
 * f_core.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function f_core_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-about_malmoscenen-body'.
  $field_instances['node-about_malmoscenen-body'] = array(
    'bundle' => 'about_malmoscenen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-after_activity-body'.
  $field_instances['node-after_activity-body'] = array(
    'bundle' => 'after_activity',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'node-after_activity-field_after_activity_address'.
  $field_instances['node-after_activity-field_after_activity_address'] = array(
    'bundle' => 'after_activity',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The address where the activity will take place.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_after_activity_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-before_activity-body'.
  $field_instances['node-before_activity-body'] = array(
    'bundle' => 'before_activity',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'node-before_activity-field_before_activity_address'.
  $field_instances['node-before_activity-field_before_activity_address'] = array(
    'bundle' => 'before_activity',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The address where the activity will take place.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_before_activity_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_address'.
  $field_instances['node-malmo_opera-field_malmo_opera_address'] = array(
    'bundle' => 'malmo_opera',
    'default_value' => array(
      0 => array(
        'value' => 'Östra Rönneholmsväģen 20, 211 47 Malmö',
      ),
    ),
    'deleted' => 0,
    'description' => 'Where the performance will take place.
Ex. (Malmö Opera, Östra Rönneholmsvägen 20, 211 47 Malmö)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_artist'.
  $field_instances['node-malmo_opera-field_malmo_opera_artist'] = array(
    'bundle' => 'malmo_opera',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Artist\'s name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_artist',
    'label' => 'Artist',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_booking'.
  $field_instances['node-malmo_opera-field_malmo_opera_booking'] = array(
    'bundle' => 'malmo_opera',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a link to the site for booking.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_booking',
    'label' => 'Booking',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_date'.
  $field_instances['node-malmo_opera-field_malmo_opera_date'] = array(
    'bundle' => 'malmo_opera',
    'deleted' => 0,
    'description' => 'The date when the performance will take place.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_date',
    'label' => 'date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_facebook'.
  $field_instances['node-malmo_opera-field_malmo_opera_facebook'] = array(
    'bundle' => 'malmo_opera',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'https://www.facebook.com/malmoopera',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add the link to Malmö Opera Facebook page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_img'.
  $field_instances['node-malmo_opera-field_malmo_opera_img'] = array(
    'bundle' => 'malmo_opera',
    'deleted' => 0,
    'description' => 'Add an image for the performance.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'performances-img',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_img',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '280x400',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'performances-img',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_insta'.
  $field_instances['node-malmo_opera-field_malmo_opera_insta'] = array(
    'bundle' => 'malmo_opera',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'https://www.instagram.com/malmoopera/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add the link to Malmö Opera instagram page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_insta',
    'label' => 'Instagram',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_logo'.
  $field_instances['node-malmo_opera-field_malmo_opera_logo'] = array(
    'bundle' => 'malmo_opera',
    'deleted' => 0,
    'description' => 'Malmö Opera\'s logo. There is already a default logo image för Malmö Opera uploaded.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 25,
      'entity_translation_sync' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-malmo_opera-field_malmo_opera_time'.
  $field_instances['node-malmo_opera-field_malmo_opera_time'] = array(
    'bundle' => 'malmo_opera',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Start and End time for performance.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'timefield',
        'settings' => array(
          'display_format' => array(
            'hour' => 'g',
            'minute' => 'i',
            'period' => 'a',
            'period_separator' => '',
            'separator' => ':',
          ),
        ),
        'type' => 'timefield_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'timefield',
        'settings' => array(
          'display_format' => array(
            'hour' => 'g',
            'minute' => 'i',
            'period' => 'a',
            'period_separator' => '',
            'separator' => ':',
          ),
        ),
        'type' => 'timefield_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_opera_time',
    'label' => 'Time',
    'required' => 1,
    'settings' => array(
      'disable_plugin' => 0,
      'entity_translation_sync' => FALSE,
      'input_format' => array(
        'am_text' => '',
        'atPosition' => 'left bottom',
        'closeButtonText' => 'Done',
        'deselectButtonText' => 'Deselect',
        'myPosition' => 'left top',
        'nowButtonText' => 'Now',
        'periodSeparator' => '',
        'pm_text' => '',
        'separator' => '.',
        'showCloseButton' => 0,
        'showDeselectButton' => 0,
        'showLeadingZero' => 0,
        'showNowButton' => 0,
        'showPeriod' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'timefield',
      'settings' => array(
        'label_position' => 'above',
      ),
      'type' => 'timefield_standard',
      'weight' => 44,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_address'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_address'] = array(
    'bundle' => 'malmo_stadsteater',
    'default_value' => array(
      0 => array(
        'value' => 'Kalendegatan 12, 211 35 Malmö',
      ),
    ),
    'deleted' => 0,
    'description' => 'Where the performance will take place.
Ex. (Malmö Stadsteater, Kalendegatan 12, 211 35 Malmö)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_artist'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_artist'] = array(
    'bundle' => 'malmo_stadsteater',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Artist\'s name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_artist',
    'label' => 'Artist',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_booking'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_booking'] = array(
    'bundle' => 'malmo_stadsteater',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a link to the site for booking.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_booking',
    'label' => 'Booking',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_date'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_date'] = array(
    'bundle' => 'malmo_stadsteater',
    'deleted' => 0,
    'description' => 'The date when the performance will take place.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_facebook'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_facebook'] = array(
    'bundle' => 'malmo_stadsteater',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'https://www.facebook.com/MalmoStadsteater',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add the link to Malmö Stadsteater Facebook page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_img'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_img'] = array(
    'bundle' => 'malmo_stadsteater',
    'deleted' => 0,
    'description' => 'Add an image for the performance.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'performances-img',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_img',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '280x400',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_insta'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_insta'] = array(
    'bundle' => 'malmo_stadsteater',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'https://www.instagram.com/malmostadsteater/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add the instagram link to Malmö Stadsteater page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_insta',
    'label' => 'Instagram',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_logo'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_logo'] = array(
    'bundle' => 'malmo_stadsteater',
    'deleted' => 0,
    'description' => 'Malmö Stadsteater\'s logo. There is already a default logo image för Malmö Stadsteater uploaded.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 26,
      'entity_translation_sync' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-malmo_stadsteater-field_malmo_stadsteater_time'.
  $field_instances['node-malmo_stadsteater-field_malmo_stadsteater_time'] = array(
    'bundle' => 'malmo_stadsteater',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Start and End time for performance.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'timefield',
        'settings' => array(
          'display_format' => array(
            'hour' => 'g',
            'minute' => 'i',
            'period' => 'a',
            'period_separator' => '',
            'separator' => ':',
          ),
        ),
        'type' => 'timefield_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'timefield',
        'settings' => array(
          'display_format' => array(
            'hour' => 'g',
            'minute' => 'i',
            'period' => 'a',
            'period_separator' => '',
            'separator' => ':',
          ),
        ),
        'type' => 'timefield_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_malmo_stadsteater_time',
    'label' => 'Time',
    'required' => 1,
    'settings' => array(
      'disable_plugin' => 0,
      'entity_translation_sync' => FALSE,
      'input_format' => array(
        'am_text' => '',
        'atPosition' => 'left bottom',
        'closeButtonText' => 'Done',
        'deselectButtonText' => 'Deselect',
        'myPosition' => 'left top',
        'nowButtonText' => 'Now',
        'periodSeparator' => '',
        'pm_text' => '',
        'separator' => '.',
        'showCloseButton' => 0,
        'showDeselectButton' => 0,
        'showLeadingZero' => 0,
        'showNowButton' => 0,
        'showPeriod' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'timefield',
      'settings' => array(
        'label_position' => 'above',
      ),
      'type' => 'timefield_standard',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skane_dansteater_facebook'.
  $field_instances['node-skanes_dansteater-field_skane_dansteater_facebook'] = array(
    'bundle' => 'skanes_dansteater',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'https://www.facebook.com/skanesdansteater',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add the link to Malmö Opera Facebook page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skane_dansteater_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skane_dansteater_insta'.
  $field_instances['node-skanes_dansteater-field_skane_dansteater_insta'] = array(
    'bundle' => 'skanes_dansteater',
    'default_value' => array(
      0 => array(
        'title' => '',
        'url' => 'https://www.instagram.com/skanesdansteater/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Add the instagram link for Skånes Dansteater.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skane_dansteater_insta',
    'label' => 'Instagram',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skanes_dansteater_address'.
  $field_instances['node-skanes_dansteater-field_skanes_dansteater_address'] = array(
    'bundle' => 'skanes_dansteater',
    'default_value' => array(
      0 => array(
        'value' => 'Östra Varvsgatan 13, 211 73 Malmö',
      ),
    ),
    'deleted' => 0,
    'description' => 'Where the performance will take place.
Ex. (Skånes Dansteater AB, Östra Varvsgatan 13, 211 73 Malmö)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skanes_dansteater_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skanes_dansteater_artist'.
  $field_instances['node-skanes_dansteater-field_skanes_dansteater_artist'] = array(
    'bundle' => 'skanes_dansteater',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Artist\'s name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skanes_dansteater_artist',
    'label' => 'Artist',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skanes_dansteater_booking'.
  $field_instances['node-skanes_dansteater-field_skanes_dansteater_booking'] = array(
    'bundle' => 'skanes_dansteater',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a link to the site for booking.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_label',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skanes_dansteater_booking',
    'label' => 'Booking',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skanes_dansteater_date'.
  $field_instances['node-skanes_dansteater-field_skanes_dansteater_date'] = array(
    'bundle' => 'skanes_dansteater',
    'deleted' => 0,
    'description' => 'The date when the performance will take place.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skanes_dansteater_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skanes_dansteater_img'.
  $field_instances['node-skanes_dansteater-field_skanes_dansteater_img'] = array(
    'bundle' => 'skanes_dansteater',
    'deleted' => 0,
    'description' => 'Add an image for the performance.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'performances-img',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skanes_dansteater_img',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '280x400',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skanes_dansteater_logo'.
  $field_instances['node-skanes_dansteater-field_skanes_dansteater_logo'] = array(
    'bundle' => 'skanes_dansteater',
    'deleted' => 0,
    'description' => 'Skånes Dansteater\'s logo. There is already a default logo image för Skånes Dansteater uploaded.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skanes_dansteater_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 27,
      'entity_translation_sync' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-skanes_dansteater-field_skanes_dansteater_time'.
  $field_instances['node-skanes_dansteater-field_skanes_dansteater_time'] = array(
    'bundle' => 'skanes_dansteater',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Start and End time for performance.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'timefield',
        'settings' => array(
          'display_format' => array(
            'hour' => 'g',
            'minute' => 'i',
            'period' => 'a',
            'period_separator' => '',
            'separator' => ':',
          ),
        ),
        'type' => 'timefield_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'timefield',
        'settings' => array(
          'display_format' => array(
            'hour' => 'g',
            'minute' => 'i',
            'period' => 'a',
            'period_separator' => '',
            'separator' => ':',
          ),
        ),
        'type' => 'timefield_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skanes_dansteater_time',
    'label' => 'Time',
    'required' => 1,
    'settings' => array(
      'disable_plugin' => 0,
      'entity_translation_sync' => FALSE,
      'input_format' => array(
        'am_text' => '',
        'atPosition' => 'left bottom',
        'closeButtonText' => 'Done',
        'deselectButtonText' => 'Deselect',
        'myPosition' => 'left top',
        'nowButtonText' => 'Now',
        'periodSeparator' => '',
        'pm_text' => '',
        'separator' => '.',
        'showCloseButton' => 0,
        'showDeselectButton' => 0,
        'showLeadingZero' => 0,
        'showNowButton' => 0,
        'showPeriod' => 1,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'timefield',
      'settings' => array(
        'label_position' => 'above',
      ),
      'type' => 'timefield_standard',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add a link to the site for booking.');
  t('Add an image for the performance.');
  t('Add the instagram link for Skånes Dansteater.');
  t('Add the instagram link to Malmö Stadsteater page.');
  t('Add the link to Malmö Opera Facebook page.');
  t('Add the link to Malmö Opera instagram page.');
  t('Add the link to Malmö Stadsteater Facebook page.');
  t('Address');
  t('Artist');
  t('Artist\'s name.');
  t('Body');
  t('Booking');
  t('Date');
  t('Facebook');
  t('Image');
  t('Instagram');
  t('Logo');
  t('Malmö Opera\'s logo. There is already a default logo image för Malmö Opera uploaded.');
  t('Malmö Stadsteater\'s logo. There is already a default logo image för Malmö Stadsteater uploaded.');
  t('Skånes Dansteater\'s logo. There is already a default logo image för Skånes Dansteater uploaded.');
  t('Start and End time for performance.');
  t('The address where the activity will take place.');
  t('The date when the performance will take place.');
  t('Time');
  t('Where the performance will take place.
Ex. (Malmö Opera, Östra Rönneholmsvägen 20, 211 47 Malmö)');
  t('Where the performance will take place.
Ex. (Malmö Stadsteater, Kalendegatan 12, 211 35 Malmö)');
  t('Where the performance will take place.
Ex. (Skånes Dansteater AB, Östra Varvsgatan 13, 211 73 Malmö)');
  t('date');

  return $field_instances;
}
