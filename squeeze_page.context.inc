<?php
/**
 * @file
 * squeeze_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function squeeze_page_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'asp_context';
  $context->description = 'Context for Advanced Squeeze Page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'advanced_squeeze_page' => 'advanced_squeeze_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'advanced_squeeze_page_delta',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Advanced Squeeze Page');
  $export['asp_context'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bsp_context';
  $context->description = 'Context for Basic Squeeze Page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'basic_squeeze_page' => 'basic_squeeze_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'basic_squeeze_page_delta',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for Basic Squeeze Page');
  $export['bsp_context'] = $context;

  return $export;
}
