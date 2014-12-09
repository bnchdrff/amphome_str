<?php
/**
 * @file
 * amphome_str.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function amphome_str_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'amp_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'amp_news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AMP Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_news_lead_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  /* Relationship: Content: Lead Image (field_news_lead_image:fid) */
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['id'] = 'field_news_lead_image_fid';
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['field'] = 'field_news_lead_image_fid';
  /* Relationship: Content: Category (field_news_term) */
  $handler->display->display_options['relationships']['field_news_term_tid']['id'] = 'field_news_term_tid';
  $handler->display->display_options['relationships']['field_news_term_tid']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['relationships']['field_news_term_tid']['field'] = 'field_news_term_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <a> <ul> <li> <ol> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_news_lead_image']['id'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['field'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_lead_image']['settings'] = array(
    'image_style' => '230x230_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_lead_image']['group_column'] = 'fid';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_news_term']['id'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['fields']['field_news_term']['field'] = 'field_news_term';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_news_tags']['id'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['field'] = 'field_news_tags';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Sort criterion: sort by date field */
  $handler->display->display_options['sorts']['field_news_date_value']['id'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['sorts']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['ui_name'] = 'sort by date field';
  $handler->display->display_options['sorts']['field_news_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_news_date_value']['expose']['label'] = 'Date (field_news_date)';
  /* Contextual filter: Content: Category (field_news_term) */
  $handler->display->display_options['arguments']['field_news_term_tid']['id'] = 'field_news_term_tid';
  $handler->display->display_options['arguments']['field_news_term_tid']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['arguments']['field_news_term_tid']['field'] = 'field_news_term_tid';
  $handler->display->display_options['arguments']['field_news_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_news_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_archive_item' => 'news_archive_item',
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'amp-news-list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_news_lead_image']['id'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['field'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_lead_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_lead_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_lead_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_basic';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <a> <ul> <li> <ol> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'teaser';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['path'] = 'news/rss.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
    'block_3' => 0,
    'block_4' => 0,
    'page_1' => 0,
  );

  /* Display: Block - Tags & Categories */
  $handler = $view->new_display('block', 'Block - Tags & Categories', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_news_term' => array(
      'element_type' => 'div',
      'class' => 'news-terms',
      'label_element_type' => 'label',
      'label_class' => 'news-terms-label',
    ),
    'field_news_tags' => array(
      'element_type' => 'div',
      'class' => 'news-terms',
      'label_element_type' => 'label',
      'label_class' => 'news-terms-label',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_news_term']['id'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['fields']['field_news_term']['field'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['hide_empty'] = TRUE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_news_tags']['id'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['field'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_news_tags']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_archive_item' => 'news_archive_item',
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_news_tags) */
  $handler->display->display_options['filters']['field_news_tags_tid']['id'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['filters']['field_news_tags_tid']['field'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_tags_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_news_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_tags_tid']['vocabulary'] = 'news_tags';
  /* Filter criterion: Content: Category (field_news_term) */
  $handler->display->display_options['filters']['field_news_term_tid']['id'] = 'field_news_term_tid';
  $handler->display->display_options['filters']['field_news_term_tid']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['filters']['field_news_term_tid']['field'] = 'field_news_term_tid';
  $handler->display->display_options['filters']['field_news_term_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_term_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_news_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_term_tid']['vocabulary'] = 'news';

  /* Display: Block - Lead Image */
  $handler = $view->new_display('block', 'Block - Lead Image', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_news_lead_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_news_lead_image']['id'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['field'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_lead_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_lead_image']['alter']['text'] = '<div class="leadimage">
<img src="[field_news_lead_image]" alt="[field_news_lead_image-alt]" width="[field_news_lead_image-width]" height="[field_news_lead_image-height]" />
<div class="credit">[field_news_lead_image-alt]</div>
</div>';
  $handler->display->display_options['fields']['field_news_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_lead_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_news_lead_image']['settings'] = array(
    'image_style' => 'leadimage_505w',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_lead_image']['group_column'] = 'fid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_archive_item' => 'news_archive_item',
    'news_item' => 'news_item',
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block - Recent News */
  $handler = $view->new_display('block', 'Block - Recent News', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'amp-news-block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['row']['element_type'] = 'article';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'created' => array(
      'element_type' => 'time',
      'class' => 'date',
    ),
    'field_news_term' => array(
      'element_type' => 'span',
      'class' => 'category',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['text'] = '[created] <span class="category">[field_news_term]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_basic';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_news_term']['id'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['fields']['field_news_term']['field'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['label'] = '';
  $handler->display->display_options['fields']['field_news_term']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_news_term']['element_class'] = 'category';
  $handler->display->display_options['fields']['field_news_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_term']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_term']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <a> <ul> <li> <ol> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Block - Links */
  $handler = $view->new_display('block', 'Block - Links', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Links';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_news_links' => array(
      'element_type' => 'div',
      'class' => 'news-links',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_news_links']['id'] = 'field_news_links';
  $handler->display->display_options['fields']['field_news_links']['table'] = 'field_data_field_news_links';
  $handler->display->display_options['fields']['field_news_links']['field'] = 'field_news_links';
  $handler->display->display_options['fields']['field_news_links']['label'] = '';
  $handler->display->display_options['fields']['field_news_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_news_links']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_news_links']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_archive_item' => 'news_archive_item',
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Links (field_news_links:attributes) */
  $handler->display->display_options['filters']['field_news_links_attributes']['id'] = 'field_news_links_attributes';
  $handler->display->display_options['filters']['field_news_links_attributes']['table'] = 'field_data_field_news_links';
  $handler->display->display_options['filters']['field_news_links_attributes']['field'] = 'field_news_links_attributes';
  $handler->display->display_options['filters']['field_news_links_attributes']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_links_attributes']['group'] = 1;

  /* Display: jsonp */
  $handler = $view->new_display('page', 'jsonp', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'stories';
  $handler->display->display_options['style_options']['top_child_object'] = 'story';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = 'miraculateUnicorns';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: lead image */
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['id'] = 'field_news_lead_image_fid';
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['field'] = 'field_news_lead_image_fid';
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['ui_name'] = 'lead image';
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['label'] = 'lead image';
  /* Relationship: term from field_news_term */
  $handler->display->display_options['relationships']['field_news_term_tid']['id'] = 'field_news_term_tid';
  $handler->display->display_options['relationships']['field_news_term_tid']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['relationships']['field_news_term_tid']['field'] = 'field_news_term_tid';
  $handler->display->display_options['relationships']['field_news_term_tid']['ui_name'] = 'term from field_news_term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <a> <ul> <li> <ol> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = 'date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'date_basic',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_news_lead_image']['id'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['field'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['label'] = 'leadimage_med_sq';
  $handler->display->display_options['fields']['field_news_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_lead_image']['settings'] = array(
    'image_style' => 'medium_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_lead_image']['group_column'] = 'fid';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_news_term']['id'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['fields']['field_news_term']['field'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['label'] = 'category';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_news_tags']['id'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['field'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['label'] = 'tags';
  $handler->display->display_options['fields']['field_news_tags']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'path';
  /* Field: lead image caption */
  $handler->display->display_options['fields']['field_news_lead_image_1']['id'] = 'field_news_lead_image_1';
  $handler->display->display_options['fields']['field_news_lead_image_1']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image_1']['field'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image_1']['ui_name'] = 'lead image caption';
  $handler->display->display_options['fields']['field_news_lead_image_1']['label'] = 'leadimagecaption';
  $handler->display->display_options['fields']['field_news_lead_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_lead_image_1']['alter']['text'] = '[field_news_lead_image_1-alt]';
  $handler->display->display_options['fields']['field_news_lead_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_lead_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_lead_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_lead_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_lead_image_1']['group_column'] = 'fid';
  /* Field: url */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'url';
  $handler->display->display_options['fields']['nid']['label'] = 'url';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'http://alliedmedia.org/node/[nid]';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_news_term_1']['id'] = 'field_news_term_1';
  $handler->display->display_options['fields']['field_news_term_1']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['fields']['field_news_term_1']['field'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term_1']['label'] = 'categoryurl';
  $handler->display->display_options['fields']['field_news_term_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_term_1']['alter']['text'] = 'http://alliedmedia.org/taxonomy/term/[field_news_term_1-tid]';
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_news_lead_image_2']['id'] = 'field_news_lead_image_2';
  $handler->display->display_options['fields']['field_news_lead_image_2']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image_2']['field'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image_2']['label'] = 'leadimage_small_sq';
  $handler->display->display_options['fields']['field_news_lead_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_lead_image_2']['settings'] = array(
    'image_style' => 'small_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_news_lead_image_2']['group_column'] = 'fid';
  $handler->display->display_options['path'] = 'news/json';

  /* Display: by tag */
  $handler = $view->new_display('page', 'by tag', 'amp_news_byterms');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'amp-news-list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_news_lead_image']['id'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['field'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_lead_image']['settings'] = array(
    'image_style' => 'medium_thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_news_lead_image']['group_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_basic';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_news_term']['id'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['fields']['field_news_term']['field'] = 'field_news_term';
  $handler->display->display_options['fields']['field_news_term']['label'] = '';
  $handler->display->display_options['fields']['field_news_term']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_news_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_term']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_news_term']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_term']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <a> <ul> <li> <ol> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = 'AMP News: %1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary_options']['grouping'] = '';
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block - frontpage Recent News */
  $handler = $view->new_display('block', 'Block - frontpage Recent News', 'front_recent');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Allied Media Projects News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'amp-news-block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Lead Image */
  $handler->display->display_options['fields']['field_news_lead_image']['id'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['field'] = 'field_news_lead_image';
  $handler->display->display_options['fields']['field_news_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_news_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_lead_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term image */
  $handler->display->display_options['fields']['field_term_image']['id'] = 'field_term_image';
  $handler->display->display_options['fields']['field_term_image']['table'] = 'field_data_field_term_image';
  $handler->display->display_options['fields']['field_term_image']['field'] = 'field_term_image';
  $handler->display->display_options['fields']['field_term_image']['relationship'] = 'field_news_term_tid';
  $handler->display->display_options['fields']['field_term_image']['label'] = '';
  $handler->display->display_options['fields']['field_term_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_image']['settings'] = array(
    'image_style' => 'term_image_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['text'] = '[created] <span class="category">[field_news_term]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_basic';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <a> <ul> <li> <ol> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $translatables['amp_news'] = array(
    t('Master'),
    t('AMP Blog'),
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
    t('image from field_news_lead_image'),
    t('term from field_news_term'),
    t('Category'),
    t('Tags'),
    t('Link'),
    t('Date (field_news_date)'),
    t('All'),
    t('Page'),
    t('Feed'),
    t('Block - Tags & Categories'),
    t('Block - Lead Image'),
    t('<div class="leadimage">
<img src="[field_news_lead_image]" alt="[field_news_lead_image-alt]" width="[field_news_lead_image-width]" height="[field_news_lead_image-height]" />
<div class="credit">[field_news_lead_image-alt]</div>
</div>'),
    t('Block - Recent News'),
    t('Recent News'),
    t('[created] <span class="category">[field_news_term]</span>'),
    t('Block - Links'),
    t('Links'),
    t('jsonp'),
    t('lead image'),
    t('date'),
    t('leadimage_med_sq'),
    t('category'),
    t('tags'),
    t('path'),
    t('leadimagecaption'),
    t('[field_news_lead_image_1-alt]'),
    t('url'),
    t('http://alliedmedia.org/node/[nid]'),
    t('categoryurl'),
    t('http://alliedmedia.org/taxonomy/term/[field_news_term_1-tid]'),
    t('leadimage_small_sq'),
    t('by tag'),
    t('AMP News: %1'),
    t('Block - frontpage Recent News'),
    t('Recent Allied Media Projects News'),
  );
  $export['amp_news'] = $view;

  $view = new view();
  $view->name = 'project_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'project news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AMP Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = 'article';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_term_image' => array(
      'element_type' => 'figure',
      'class' => '',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'created' => array(
      'element_type' => 'time',
      'class' => 'date',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'body',
    ),
  );
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  /* Relationship: Content: Lead Image (field_news_lead_image:fid) */
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['id'] = 'field_news_lead_image_fid';
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['table'] = 'field_data_field_news_lead_image';
  $handler->display->display_options['relationships']['field_news_lead_image_fid']['field'] = 'field_news_lead_image_fid';
  /* Relationship: Content: Category (field_news_term) */
  $handler->display->display_options['relationships']['field_news_term_tid']['id'] = 'field_news_term_tid';
  $handler->display->display_options['relationships']['field_news_term_tid']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['relationships']['field_news_term_tid']['field'] = 'field_news_term_tid';
  /* Field: Taxonomy term: Term image */
  $handler->display->display_options['fields']['field_term_image']['id'] = 'field_term_image';
  $handler->display->display_options['fields']['field_term_image']['table'] = 'field_data_field_term_image';
  $handler->display->display_options['fields']['field_term_image']['field'] = 'field_term_image';
  $handler->display->display_options['fields']['field_term_image']['relationship'] = 'field_news_term_tid';
  $handler->display->display_options['fields']['field_term_image']['label'] = '';
  $handler->display->display_options['fields']['field_term_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_image']['settings'] = array(
    'image_style' => 'term_image_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_basic';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <a> <ul> <li> <ol> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: sort by date field */
  $handler->display->display_options['sorts']['field_news_date_value']['id'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['sorts']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['ui_name'] = 'sort by date field';
  $handler->display->display_options['sorts']['field_news_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_news_date_value']['expose']['label'] = 'Date (field_news_date)';
  /* Contextual filter: Content: Category (field_news_term) */
  $handler->display->display_options['arguments']['field_news_term_tid']['id'] = 'field_news_term_tid';
  $handler->display->display_options['arguments']['field_news_term_tid']['table'] = 'field_data_field_news_term';
  $handler->display->display_options['arguments']['field_news_term_tid']['field'] = 'field_news_term_tid';
  $handler->display->display_options['arguments']['field_news_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_news_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_archive_item' => 'news_archive_item',
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block - proj - DFS */
  $handler = $view->new_display('block', 'Block - proj - DFS', 'dfs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Detroit Future Schools News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'project-news-block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'read more DFS link';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/news/detroit-future-schools">More Detroit Future Schools News</a>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_archive_item' => 'news_archive_item',
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    817 => '817',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Block - AMC */
  $handler = $view->new_display('block', 'Block - AMC', 'amc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Allied Media Conference News';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'read more ';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/news/allied-media-conference">More Allied Media Conference news</a>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_archive_item' => 'news_archive_item',
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Block - proj - DFS */
  $handler = $view->new_display('block', 'Block - proj - DFS', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent DFS News &hearts;';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'project-news-block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'read more DFS link';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href="/news/detroit-future-schools">Read more</a>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_archive_item' => 'news_archive_item',
    'news_item' => 'news_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    817 => '817',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $translatables['project_news'] = array(
    t('Master'),
    t('AMP Blog'),
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
    t('image from field_news_lead_image'),
    t('term from field_news_term'),
    t('Date (field_news_date)'),
    t('All'),
    t('Block - proj - DFS'),
    t('Detroit Future Schools News'),
    t('read more DFS link'),
    t('<a href="/news/detroit-future-schools">More Detroit Future Schools News</a>'),
    t('Block - AMC'),
    t('Allied Media Conference News'),
    t('read more '),
    t('<a href="/news/allied-media-conference">More Allied Media Conference news</a>'),
    t('Recent DFS News &hearts;'),
    t('<a href="/news/detroit-future-schools">Read more</a>'),
  );
  $export['project_news'] = $view;

  return $export;
}
