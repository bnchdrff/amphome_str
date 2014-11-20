<?php
/**
 * @file
 * amphome_str.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function amphome_str_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'amc';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/743' => 'node/743',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-project_news-amc' => array(
          'module' => 'views',
          'delta' => 'project_news-amc',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['amc'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'amp_contact';
  $context->description = 'Contact Quick Links';
  $context->tag = 'QuickLinks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-contact_quick_links' => array(
          'module' => 'boxes',
          'delta' => 'contact_quick_links',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Quick Links');
  t('QuickLinks');
  $export['amp_contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-amp_queue_intro-block' => array(
          'module' => 'views',
          'delta' => 'amp_queue_intro-block',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'landing-page',
    ),
  );
  $context->condition_mode = 1;
  $export['landing_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_post';
  $context->description = 'new (and news_archive) post pages';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news_archive_item' => 'news_archive_item',
        'news_item' => 'news_item',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-amp_news-block_4' => array(
          'module' => 'views',
          'delta' => 'amp_news-block_4',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('new (and news_archive) post pages');
  $export['news_post'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not_landing_pages';
  $context->description = 'everything but landing pages';
  $context->tag = '';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~landing_pages' => '~landing_pages',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-amp_queue_intro-block' => array(
          'module' => 'views',
          'delta' => 'amp_queue_intro-block',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'not-landing-page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('everything but landing pages');
  $export['not_landing_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page';
  $context->description = 'page with optional sidebar cck_block';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page with optional sidebar cck_block');
  $export['page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'project_dfs';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/738' => 'node/738',
        'node/739' => 'node/739',
        'node/740' => 'node/740',
        'node/741' => 'node/741',
        'node/768' => 'node/768',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-project_news-dfs' => array(
          'module' => 'views',
          'delta' => 'project_news-dfs',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['project_dfs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'secondarysidebar';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~sponsored-projects' => '~sponsored-projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-amp_list_signup' => array(
          'module' => 'boxes',
          'delta' => 'amp_list_signup',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'boxes-follow_facebook' => array(
          'module' => 'boxes',
          'delta' => 'follow_facebook',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'boxes-follow_twitter' => array(
          'module' => 'boxes',
          'delta' => 'follow_twitter',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'boxes-register_conference' => array(
          'module' => 'boxes',
          'delta' => 'register_conference',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['secondarysidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-sell_links' => array(
          'module' => 'boxes',
          'delta' => 'sell_links',
          'region' => 'header',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-8',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-impressum' => array(
          'module' => 'boxes',
          'delta' => 'impressum',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'boxes-footer_donatelink' => array(
          'module' => 'boxes',
          'delta' => 'footer_donatelink',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'boxes-footer_sociallinks' => array(
          'module' => 'boxes',
          'delta' => 'footer_sociallinks',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'small_right_sidebar_layout';
  $context->description = '';
  $context->tag = 'delta';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'small_right_sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('delta');
  $export['small_right_sidebar_layout'] = $context;

  return $export;
}
