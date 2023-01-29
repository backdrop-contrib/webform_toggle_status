<?php
/**
 * @file
 * Admin function for module that provides an open/closed status toggle for
 * webforms.
 */

/**
 * Toggles the status of a webform node from open to closed and vice-versa.
 */
function webform_toggle_status_toggle_status($node) {
  // Ensure node is webform-enabled and the user has access to edit the node.
  if (!in_array($node->type, webform_node_types()) || !webform_node_update_access($node)) {
    backdrop_goto("node/$node->nid");
  }

  $node->webform['status'] = !$node->webform['status'];
  $node->save();
  if ($node->webform['status']) {
    backdrop_set_message(t('%title has been opened.', array('%title' => $node->title)));
  }
  else {
    backdrop_set_message(t('%title has been closed.', array('%title' => $node->title)));
  }

  $parms = backdrop_get_query_parameters();
  if (!empty($parms['destination'])) {
    backdrop_goto($parms['destination']);
  }
  else {
    backdrop_goto("node/$node->nid");
  }
}
