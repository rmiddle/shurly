<?php
// $Id$

/**
 * @file Shurly Views handler for short URL
 */

/**
 * Field handler to present a link to the short URL entry.
 */
class shurly_handler_field_short_url extends views_handler_field {
  function construct() {
    parent::construct();
    $this->additional_fields['source'] = 'source';
  }

  function option_definition() {
    $options = parent::option_definition();

    $options['text'] = array('default' => '', 'translatable' => TRUE);

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Text to display'),
      '#default_value' => $this->options['text'],
    );
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    // rawurldecode() allows URLs to be shown with UTF8 characters
    // however, this could cause other problems...
    $text = !empty($this->options['text']) ? $this->options['text'] : rawurldecode(url($values->{$this->aliases['source']}, array('absolute' => TRUE)));
    return $text;
  }
}
