<?php
/**
 * @file
 * Views hooks implemented for the Webform Toggle Status module.
 */

/**
 * Implements hook_views_data_alter().
 */
function webform_toggle_status_views_data_alter(&$data) {
  // Link for toggling the Webform status from open to closed and vice-versa.
  $data['node']['webform_toggle_status'] = array(
    'group' => t('Webform'),
    'field' => array(
      'title' => t('Webform toggle status link'),
      'help' => t('Provide a link to toggle the status of a webform.'),
      'handler' => 'webform_toggle_status_handler_field_node_link',
    ),
  );
}
