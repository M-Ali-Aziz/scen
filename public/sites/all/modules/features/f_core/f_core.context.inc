<?php
/**
 * @file
 * f_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page';
  $context->description = 'One page\'s blockes';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'theme' => array(
      'values' => array(
        'scen' => 'scen',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'header',
          'weight' => '-18',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-17',
        ),
        'date_generator-date_generator' => array(
          'module' => 'date_generator',
          'delta' => 'date_generator',
          'region' => 'content-top',
          'weight' => '-10',
        ),
        'date_generator_result-date_generator_result' => array(
          'module' => 'date_generator_result',
          'delta' => 'date_generator_result',
          'region' => 'content',
          'weight' => '-10',
        ),
        'footer_block-footer_block' => array(
          'module' => 'footer_block',
          'delta' => 'footer_block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('One page\'s blockes');
  t('page');
  $export['page'] = $context;

  return $export;
}
