<?php
/**
 * @file
 * amphome_str.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function amphome_str_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_2013:node/767
  $menu_links['main-menu_2013:node/767'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/767',
    'router_path' => 'node/%',
    'link_title' => 2013,
    'options' => array(
      'identifier' => 'main-menu_2013:node/767',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_previous-years:<nolink>',
  );
  // Exported menu link: main-menu_2014:node/766
  $menu_links['main-menu_2014:node/766'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/766',
    'router_path' => 'node/%',
    'link_title' => 2014,
    'options' => array(
      'identifier' => 'main-menu_2014:node/766',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_previous-years:<nolink>',
  );
  // Exported menu link: main-menu_about:<nolink>
  $menu_links['main-menu_about:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_about:node/735
  $menu_links['main-menu_about:node/735'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/735',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:node/735',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_accessibility:node/760
  $menu_links['main-menu_accessibility:node/760'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/760',
    'router_path' => 'node/%',
    'link_title' => 'Accessibility',
    'options' => array(
      'identifier' => 'main-menu_accessibility:node/760',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_attend:<nolink>',
  );
  // Exported menu link: main-menu_accomplishments:node/740
  $menu_links['main-menu_accomplishments:node/740'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/740',
    'router_path' => 'node/%',
    'link_title' => 'Accomplishments',
    'options' => array(
      'identifier' => 'main-menu_accomplishments:node/740',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_detroit-future-schools:node/738',
  );
  // Exported menu link: main-menu_allied-media-conference:node/743
  $menu_links['main-menu_allied-media-conference:node/743'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/743',
    'router_path' => 'node/%',
    'link_title' => 'Allied Media Conference',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_allied-media-conference:node/743',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_attend:<nolink>
  $menu_links['main-menu_attend:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Attend',
    'options' => array(
      'identifier' => 'main-menu_attend:<nolink>',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_allied-media-conference:node/743',
  );
  // Exported menu link: main-menu_blog:news
  $menu_links['main-menu_blog:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:news',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_childcare:node/759
  $menu_links['main-menu_childcare:node/759'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/759',
    'router_path' => 'node/%',
    'link_title' => 'Childcare',
    'options' => array(
      'identifier' => 'main-menu_childcare:node/759',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_attend:<nolink>',
  );
  // Exported menu link: main-menu_conference-mission:node/763
  $menu_links['main-menu_conference-mission:node/763'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/763',
    'router_path' => 'node/%',
    'link_title' => 'Conference Mission',
    'options' => array(
      'identifier' => 'main-menu_conference-mission:node/763',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:<nolink>',
  );
  // Exported menu link: main-menu_contact:node/532
  $menu_links['main-menu_contact:node/532'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/532',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:node/532',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:node/768
  $menu_links['main-menu_contact:node/768'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/768',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:node/768',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_detroit-future-schools:node/738',
  );
  // Exported menu link: main-menu_detroit-future-schools:node/738
  $menu_links['main-menu_detroit-future-schools:node/738'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/738',
    'router_path' => 'node/%',
    'link_title' => 'Detroit Future Schools',
    'options' => array(
      'identifier' => 'main-menu_detroit-future-schools:node/738',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_sponsored-projects:node/737',
  );
  // Exported menu link: main-menu_donate:node/741
  $menu_links['main-menu_donate:node/741'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/741',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
    'options' => array(
      'identifier' => 'main-menu_donate:node/741',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_detroit-future-schools:node/738',
  );
  // Exported menu link: main-menu_funding--financials:node/412
  $menu_links['main-menu_funding--financials:node/412'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/412',
    'router_path' => 'node/%',
    'link_title' => 'Funding & Financials',
    'options' => array(
      'identifier' => 'main-menu_funding--financials:node/412',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/735',
  );
  // Exported menu link: main-menu_fundraise:node/752
  $menu_links['main-menu_fundraise:node/752'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/752',
    'router_path' => 'node/%',
    'link_title' => 'Fundraise',
    'options' => array(
      'identifier' => 'main-menu_fundraise:node/752',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_participate:<nolink>',
  );
  // Exported menu link: main-menu_glossary:node/765
  $menu_links['main-menu_glossary:node/765'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/765',
    'router_path' => 'node/%',
    'link_title' => 'Glossary',
    'options' => array(
      'identifier' => 'main-menu_glossary:node/765',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:<nolink>',
  );
  // Exported menu link: main-menu_how-we-organize-the-amc:node/764
  $menu_links['main-menu_how-we-organize-the-amc:node/764'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/764',
    'router_path' => 'node/%',
    'link_title' => 'How We Organize the AMC',
    'options' => array(
      'identifier' => 'main-menu_how-we-organize-the-amc:node/764',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:<nolink>',
  );
  // Exported menu link: main-menu_how-we-organize:node/733
  $menu_links['main-menu_how-we-organize:node/733'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/733',
    'router_path' => 'node/%',
    'link_title' => 'How We Organize',
    'options' => array(
      'identifier' => 'main-menu_how-we-organize:node/733',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_participate:<nolink>',
  );
  // Exported menu link: main-menu_june-18-21:node/750
  $menu_links['main-menu_june-18-21:node/750'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/750',
    'router_path' => 'node/%',
    'link_title' => 'June 18-21',
    'options' => array(
      'identifier' => 'main-menu_june-18-21:node/750',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_register:<nolink>',
  );
  // Exported menu link: main-menu_maps--transportation:node/756
  $menu_links['main-menu_maps--transportation:node/756'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/756',
    'router_path' => 'node/%',
    'link_title' => 'Maps & Transportation',
    'options' => array(
      'identifier' => 'main-menu_maps--transportation:node/756',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_attend:<nolink>',
  );
  // Exported menu link: main-menu_mission--principles:node/410
  $menu_links['main-menu_mission--principles:node/410'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/410',
    'router_path' => 'node/%',
    'link_title' => 'Mission & Principles',
    'options' => array(
      'identifier' => 'main-menu_mission--principles:node/410',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/735',
  );
  // Exported menu link: main-menu_music:node/748
  $menu_links['main-menu_music:node/748'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/748',
    'router_path' => 'node/%',
    'link_title' => 'Music',
    'options' => array(
      'identifier' => 'main-menu_music:node/748',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:<nolink>',
  );
  // Exported menu link: main-menu_overview:node/769
  $menu_links['main-menu_overview:node/769'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/769',
    'router_path' => 'node/%',
    'link_title' => 'Overview',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_overview:node/769',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_complex-movements:node/769',
  );
  // Exported menu link: main-menu_participate:<nolink>
  $menu_links['main-menu_participate:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Participate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_participate:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_allied-media-conference:node/743',
  );
  // Exported menu link: main-menu_people:node/411
  $menu_links['main-menu_people:node/411'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/411',
    'router_path' => 'node/%',
    'link_title' => 'People',
    'options' => array(
      'identifier' => 'main-menu_people:node/411',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/735',
  );
  // Exported menu link: main-menu_places-to-eat:node/758
  $menu_links['main-menu_places-to-eat:node/758'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/758',
    'router_path' => 'node/%',
    'link_title' => 'Places to Eat',
    'options' => array(
      'identifier' => 'main-menu_places-to-eat:node/758',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_attend:<nolink>',
  );
  // Exported menu link: main-menu_places-to-stay:node/757
  $menu_links['main-menu_places-to-stay:node/757'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/757',
    'router_path' => 'node/%',
    'link_title' => 'Places to Stay',
    'options' => array(
      'identifier' => 'main-menu_places-to-stay:node/757',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_attend:<nolink>',
  );
  // Exported menu link: main-menu_previous-years:<nolink>
  $menu_links['main-menu_previous-years:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Previous Years',
    'options' => array(
      'identifier' => 'main-menu_previous-years:<nolink>',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_allied-media-conference:node/743',
  );
  // Exported menu link: main-menu_program:<nolink>
  $menu_links['main-menu_program:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Program',
    'options' => array(
      'identifier' => 'main-menu_program:<nolink>',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_allied-media-conference:node/743',
  );
  // Exported menu link: main-menu_promote:node/753
  $menu_links['main-menu_promote:node/753'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/753',
    'router_path' => 'node/%',
    'link_title' => 'Promote',
    'options' => array(
      'identifier' => 'main-menu_promote:node/753',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_participate:<nolink>',
  );
  // Exported menu link: main-menu_reports:node/746
  $menu_links['main-menu_reports:node/746'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/746',
    'router_path' => 'node/%',
    'link_title' => 'Reports',
    'options' => array(
      'identifier' => 'main-menu_reports:node/746',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/735',
  );
  // Exported menu link: main-menu_sessions:node/55
  $menu_links['main-menu_sessions:node/55'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'Sessions',
    'options' => array(
      'identifier' => 'main-menu_sessions:node/55',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:<nolink>',
  );
  // Exported menu link: main-menu_sponsor:node/745
  $menu_links['main-menu_sponsor:node/745'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/745',
    'router_path' => 'node/%',
    'link_title' => 'Sponsor',
    'options' => array(
      'identifier' => 'main-menu_sponsor:node/745',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_participate:<nolink>',
  );
  // Exported menu link: main-menu_sponsored-projects:node/737
  $menu_links['main-menu_sponsored-projects:node/737'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/737',
    'router_path' => 'node/%',
    'link_title' => 'Sponsored Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sponsored-projects:node/737',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_staff:node/739
  $menu_links['main-menu_staff:node/739'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/739',
    'router_path' => 'node/%',
    'link_title' => 'Staff',
    'options' => array(
      'identifier' => 'main-menu_staff:node/739',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_detroit-future-schools:node/738',
  );
  // Exported menu link: main-menu_table:node/755
  $menu_links['main-menu_table:node/755'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/755',
    'router_path' => 'node/%',
    'link_title' => 'Table',
    'options' => array(
      'identifier' => 'main-menu_table:node/755',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_participate:<nolink>',
  );
  // Exported menu link: main-menu_tools--resources:node/762
  $menu_links['main-menu_tools--resources:node/762'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/762',
    'router_path' => 'node/%',
    'link_title' => 'Tools & Resources',
    'options' => array(
      'identifier' => 'main-menu_tools--resources:node/762',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:<nolink>',
  );
  // Exported menu link: main-menu_tracks-practice-spaces-network-gatherings:node/747
  $menu_links['main-menu_tracks-practice-spaces-network-gatherings:node/747'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/747',
    'router_path' => 'node/%',
    'link_title' => 'Tracks, Practice Spaces, Network Gatherings',
    'options' => array(
      'identifier' => 'main-menu_tracks-practice-spaces-network-gatherings:node/747',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_program:<nolink>',
  );
  // Exported menu link: main-menu_volunteer:node/754
  $menu_links['main-menu_volunteer:node/754'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/754',
    'router_path' => 'node/%',
    'link_title' => 'Volunteer',
    'options' => array(
      'identifier' => 'main-menu_volunteer:node/754',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_participate:<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t(2013);
  t(2014);
  t('About');
  t('Accessibility');
  t('Accomplishments');
  t('Allied Media Conference');
  t('Attend');
  t('Blog');
  t('Childcare');
  t('Conference Mission');
  t('Contact');
  t('Detroit Future Schools');
  t('Donate');
  t('Funding & Financials');
  t('Fundraise');
  t('Glossary');
  t('How We Organize');
  t('How We Organize the AMC');
  t('June 18-21');
  t('Maps & Transportation');
  t('Mission & Principles');
  t('Music');
  t('Overview');
  t('Participate');
  t('People');
  t('Places to Eat');
  t('Places to Stay');
  t('Previous Years');
  t('Program');
  t('Promote');
  t('Reports');
  t('Sessions');
  t('Sponsor');
  t('Sponsored Projects');
  t('Staff');
  t('Table');
  t('Tools & Resources');
  t('Tracks, Practice Spaces, Network Gatherings');
  t('Volunteer');


  return $menu_links;
}
