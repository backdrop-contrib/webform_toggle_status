<?php
/**
 * Views handler to display a toggle status link for Webforms.
 *
 * Field handler to present a toggle status link.
 */
class webform_toggle_status_handler_field_node_link extends views_handler_field_node_link {

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    unset($options['text']);
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    unset($form['text']);
  }

  /**
   * {@inheritdoc}
   */
  public function render_link($node, $values) {
    // Ensure node is webform-enabled and the user has access to edit the node.
    if (!in_array($node->type, webform_node_types()) || !webform_node_update_access($node)) {
      return;
    }

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "node/$node->nid/webform/toggle-status";

    $text = $node->webform['status'] ? t('Close') : t('Open');
    return $text;
  }

}
