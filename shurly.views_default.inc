<?php


/**
 * Implementation of hook_views_default_views().
 */
function shurly_views_default_views() {
  /*
   * View 'shurly_admin'
   */
  $view = new view;
  $view->name = 'shurly_admin';
  $view->description = 'Shurly administration';
  $view->tag = 'shurly';
  $view->view_php = '';
  $view->base_table = 'shurly';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'source' => array(
      'label' => 'Short URL',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'source',
      'table' => 'shurly',
      'field' => 'source',
      'relationship' => 'none',
    ),
    'custom' => array(
      'label' => 'Custom',
      'alter' => array(
        'alter_text' => 0,
        'text' => '✓',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 1,
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 0,
      'id' => 'custom',
      'table' => 'shurly',
      'field' => 'custom',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'destination' => array(
      'label' => 'Long URL',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'destination',
      'table' => 'shurly',
      'field' => 'destination',
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => 'User',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Created date',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'shurly',
      'field' => 'created',
      'relationship' => 'none',
    ),
    'last_used' => array(
      'label' => 'Last used date',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'date_format' => 'time ago',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'last_used',
      'table' => 'shurly',
      'field' => 'last_used',
      'relationship' => 'none',
    ),
    'count' => array(
      'label' => 'Count',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'count',
      'table' => 'shurly',
      'field' => 'count',
      'relationship' => 'none',
    ),
    'link_delete' => array(
      'id' => 'link_delete',
      'table' => 'shurly',
      'field' => 'link_delete',
    ),
    'link_test' => array(
      'id' => 'link_test',
      'table' => 'shurly',
      'field' => 'link_test',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'id' => 'created',
      'table' => 'shurly',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'Administer short URLs',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Short URLs');
  $handler->override_option('items_per_page', 100);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'source' => 'source',
      'custom' => 'custom',
      'destination' => 'destination',
      'name' => 'name',
      'created' => 'created',
      'last_used' => 'last_used',
      'count' => 'count',
    ),
    'info' => array(
      'source' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'custom' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'destination' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'last_used' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'count' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'created',
  ));
  $handler = $view->new_display('page', 'Administer short URLs', 'page_1');
  $handler->override_option('path', 'admin/build/shurly');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Short URLs',
    'description' => 'List, sort, and edit Shurly short URLs',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $views[$view->name] = $view;

  return $views;
}


