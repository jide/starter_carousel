<?php
/**
 * @file
 * starter_carousel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function starter_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function starter_carousel_context_default_contexts_alter(&$data) {
  if (isset($data['frontpage'])) {
    $data['frontpage']->reactions['block']['blocks']['views-carousel-block'] = array(
      'module' => 'views',
      'delta' => 'carousel-block',
      'region' => 'content',
      'weight' => -10,
    ); /* WAS: '' */
    unset($data['frontpage']->reactions['block']['blocks']['views-frontpage_carousel-block']);
  }
}
