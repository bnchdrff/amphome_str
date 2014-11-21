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
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
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
  $display->layout = 'bootstrap:frontlayout';
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
      'left_side_thingie' => NULL,
      'right_side_thingie' => NULL,
      'flexible_graphic_area' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage Title';
  $display->uuid = '8bdaf314-6b04-495b-96a6-7832b293cfe4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6ee84144-ebe7-431a-8a9a-c1dc70d9a550';
    $pane->panel = 'flexible_graphic_area';
    $pane->type = 'block';
    $pane->subtype = 'boxes-flex_graphic_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ee84144-ebe7-431a-8a9a-c1dc70d9a550';
    $display->content['new-6ee84144-ebe7-431a-8a9a-c1dc70d9a550'] = $pane;
    $display->panels['flexible_graphic_area'][0] = 'new-6ee84144-ebe7-431a-8a9a-c1dc70d9a550';
    $pane = new stdClass();
    $pane->pid = 'new-a8c40e20-6212-47bf-908e-ece4e0350aaf';
    $pane->panel = 'left_side_thingie';
    $pane->type = 'block';
    $pane->subtype = 'boxes-amc_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a8c40e20-6212-47bf-908e-ece4e0350aaf';
    $display->content['new-a8c40e20-6212-47bf-908e-ece4e0350aaf'] = $pane;
    $display->panels['left_side_thingie'][0] = 'new-a8c40e20-6212-47bf-908e-ece4e0350aaf';
    $pane = new stdClass();
    $pane->pid = 'new-83951c9c-f344-4f42-8aad-1d304fb5e33b';
    $pane->panel = 'right_side_thingie';
    $pane->type = 'block';
    $pane->subtype = 'boxes-sponsored_projects_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '83951c9c-f344-4f42-8aad-1d304fb5e33b';
    $display->content['new-83951c9c-f344-4f42-8aad-1d304fb5e33b'] = $pane;
    $display->panels['right_side_thingie'][0] = 'new-83951c9c-f344-4f42-8aad-1d304fb5e33b';
    $pane = new stdClass();
    $pane->pid = 'new-40735c92-f5d7-40cd-b499-71fc4c78bfe6';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'mission statement',
      'title' => '',
      'body' => 'Media strategies for a more just, creative, and collaborative world.',
      'format' => 'unfiltered',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mission-statement',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '40735c92-f5d7-40cd-b499-71fc4c78bfe6';
    $display->content['new-40735c92-f5d7-40cd-b499-71fc4c78bfe6'] = $pane;
    $display->panels['sidebar'][0] = 'new-40735c92-f5d7-40cd-b499-71fc4c78bfe6';
    $pane = new stdClass();
    $pane->pid = 'new-4d8e53c4-2f10-48b5-b01e-ba373634d293';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'views-amp_news-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4d8e53c4-2f10-48b5-b01e-ba373634d293';
    $display->content['new-4d8e53c4-2f10-48b5-b01e-ba373634d293'] = $pane;
    $display->panels['sidebar'][1] = 'new-4d8e53c4-2f10-48b5-b01e-ba373634d293';
    $pane = new stdClass();
    $pane->pid = 'new-d4dfc265-587f-43b8-92bb-0e318f92817a';
    $pane->panel = 'store_item_1';
    $pane->type = 'block';
    $pane->subtype = 'boxes-storeitem1_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd4dfc265-587f-43b8-92bb-0e318f92817a';
    $display->content['new-d4dfc265-587f-43b8-92bb-0e318f92817a'] = $pane;
    $display->panels['store_item_1'][0] = 'new-d4dfc265-587f-43b8-92bb-0e318f92817a';
    $pane = new stdClass();
    $pane->pid = 'new-66d1bcdb-449a-42b3-96d5-6f17b7181ca1';
    $pane->panel = 'store_item_2';
    $pane->type = 'block';
    $pane->subtype = 'boxes-storeitem2_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '66d1bcdb-449a-42b3-96d5-6f17b7181ca1';
    $display->content['new-66d1bcdb-449a-42b3-96d5-6f17b7181ca1'] = $pane;
    $display->panels['store_item_2'][0] = 'new-66d1bcdb-449a-42b3-96d5-6f17b7181ca1';
    $pane = new stdClass();
    $pane->pid = 'new-0e0c7562-9e61-4cf4-8ebb-063cbf480a34';
    $pane->panel = 'store_item_3';
    $pane->type = 'block';
    $pane->subtype = 'boxes-storeitem3_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e0c7562-9e61-4cf4-8ebb-063cbf480a34';
    $display->content['new-0e0c7562-9e61-4cf4-8ebb-063cbf480a34'] = $pane;
    $display->panels['store_item_3'][0] = 'new-0e0c7562-9e61-4cf4-8ebb-063cbf480a34';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
