<?php
/**
 * @file
 * ceardach_blog.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function ceardach_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ceardach_blog';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_relatedfields-block' => array(
          'module' => 'views',
          'delta' => 'blog_relatedfields-block',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-blog_relatedfields-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_relatedfields-block_1',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'views-blog_relatedfields-block_2' => array(
          'module' => 'views',
          'delta' => 'blog_relatedfields-block_2',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
      ),
    ),
    'menu' => 'blog',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['ceardach_blog'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ceardach_blog_view';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'tagadelic-1' => array(
          'module' => 'tagadelic',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-blog_comments-block' => array(
          'module' => 'views',
          'delta' => 'blog_comments-block',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['ceardach_blog_view'] = $context;

  return $export;
}
