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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
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
    $pane = new stdClass();
    $pane->pid = 'new-4f9acbea-21dd-43f2-ad3e-af972668a5e1';
    $pane->panel = 'amc';
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
    $pane->uuid = '4f9acbea-21dd-43f2-ad3e-af972668a5e1';
    $display->content['new-4f9acbea-21dd-43f2-ad3e-af972668a5e1'] = $pane;
    $display->panels['amc'][0] = 'new-4f9acbea-21dd-43f2-ad3e-af972668a5e1';
    $pane = new stdClass();
    $pane->pid = 'new-246b6317-00eb-4e3b-b174-5bc70c521707';
    $pane->panel = 'flex';
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
    $pane->uuid = '246b6317-00eb-4e3b-b174-5bc70c521707';
    $display->content['new-246b6317-00eb-4e3b-b174-5bc70c521707'] = $pane;
    $display->panels['flex'][0] = 'new-246b6317-00eb-4e3b-b174-5bc70c521707';
    $pane = new stdClass();
    $pane->pid = 'new-d6340e08-44a8-42d0-a1ba-8c8918f7f399';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6340e08-44a8-42d0-a1ba-8c8918f7f399';
    $display->content['new-d6340e08-44a8-42d0-a1ba-8c8918f7f399'] = $pane;
    $display->panels['sidebar'][0] = 'new-d6340e08-44a8-42d0-a1ba-8c8918f7f399';
    $pane = new stdClass();
    $pane->pid = 'new-223a0eb2-0bc1-4c6b-b1f6-2e731e6ba00b';
    $pane->panel = 'sponsored_projects';
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
    $pane->uuid = '223a0eb2-0bc1-4c6b-b1f6-2e731e6ba00b';
    $display->content['new-223a0eb2-0bc1-4c6b-b1f6-2e731e6ba00b'] = $pane;
    $display->panels['sponsored_projects'][0] = 'new-223a0eb2-0bc1-4c6b-b1f6-2e731e6ba00b';
    $pane = new stdClass();
    $pane->pid = 'new-01472b94-df9f-4481-8035-afe61e90ce28';
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
    $pane->uuid = '01472b94-df9f-4481-8035-afe61e90ce28';
    $display->content['new-01472b94-df9f-4481-8035-afe61e90ce28'] = $pane;
    $display->panels['store_item_1'][0] = 'new-01472b94-df9f-4481-8035-afe61e90ce28';
    $pane = new stdClass();
    $pane->pid = 'new-e4102493-cbea-4a28-84c1-88483ca5a1af';
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
    $pane->uuid = 'e4102493-cbea-4a28-84c1-88483ca5a1af';
    $display->content['new-e4102493-cbea-4a28-84c1-88483ca5a1af'] = $pane;
    $display->panels['store_item_2'][0] = 'new-e4102493-cbea-4a28-84c1-88483ca5a1af';
    $pane = new stdClass();
    $pane->pid = 'new-fb846096-5a24-47c2-aa13-a81b447f4fc7';
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
    $pane->uuid = 'fb846096-5a24-47c2-aa13-a81b447f4fc7';
    $display->content['new-fb846096-5a24-47c2-aa13-a81b447f4fc7'] = $pane;
    $display->panels['store_item_3'][0] = 'new-fb846096-5a24-47c2-aa13-a81b447f4fc7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
