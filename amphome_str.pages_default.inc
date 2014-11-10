<?php
/**
 * @file
 * amphome_str.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function amphome_str_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 18,
          1 => 17,
          2 => 'main',
          3 => 19,
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 6,
          1 => 7,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 4,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'amc',
        ),
        'parent' => '2',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sponsored_projects',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'amc' => array(
        'type' => 'region',
        'title' => 'AMC',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'sponsored_projects' => array(
        'type' => 'region',
        'title' => 'Sponsored projects',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      6 => array(
        'type' => 'column',
        'width' => '74.976541369984',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 8,
          1 => 10,
        ),
        'class' => 'Big Left',
      ),
      7 => array(
        'type' => 'column',
        'width' => '25.023458630016002',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 9,
        ),
        'class' => 'Lil Right',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'flex',
        ),
        'parent' => '6',
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar',
        ),
        'parent' => '7',
        'class' => '',
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 12,
          1 => 11,
          2 => 13,
        ),
        'parent' => '6',
        'class' => '',
      ),
      'flex' => array(
        'type' => 'region',
        'title' => 'Flex',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      11 => array(
        'type' => 'column',
        'width' => '33.85663135246755',
        'width_type' => '%',
        'parent' => '10',
        'children' => array(
          0 => 15,
        ),
        'class' => '',
      ),
      12 => array(
        'type' => 'column',
        'width' => '32.2853814464763',
        'width_type' => '%',
        'parent' => '10',
        'children' => array(
          0 => 14,
        ),
        'class' => '',
      ),
      13 => array(
        'type' => 'column',
        'width' => '33.85798720105614',
        'width_type' => '%',
        'parent' => '10',
        'children' => array(
          0 => 16,
        ),
        'class' => '',
      ),
      14 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'store_item_1',
        ),
        'parent' => '12',
        'class' => '',
      ),
      15 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'store_item_2',
        ),
        'parent' => '11',
        'class' => '',
      ),
      16 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'store_item_3',
        ),
        'parent' => '13',
        'class' => '',
      ),
      'store_item_1' => array(
        'type' => 'region',
        'title' => 'Store item 1',
        'width' => 100,
        'width_type' => '%',
        'parent' => '14',
        'class' => '',
      ),
      'store_item_2' => array(
        'type' => 'region',
        'title' => 'Store item 2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '15',
        'class' => '',
      ),
      'store_item_3' => array(
        'type' => 'region',
        'title' => 'Store item 3',
        'width' => 100,
        'width_type' => '%',
        'parent' => '16',
        'class' => '',
      ),
      17 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
        'bootstrap_class' => array(
          'xs' => 'col-xs-3',
          'sm' => 'col-sm-3',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
      ),
      18 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
        'bootstrap_class' => array(
          'xs' => 'col-xs-3',
          'sm' => 'col-sm-3',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
      ),
      19 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(),
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'amc' => NULL,
      'sponsored_projects' => NULL,
      'sidebar' => NULL,
      'flex' => NULL,
      'store_item_1' => NULL,
      'store_item_2' => NULL,
      'store_item_3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage Title';
  $display->uuid = '8bdaf314-6b04-495b-96a6-7832b293cfe4';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
