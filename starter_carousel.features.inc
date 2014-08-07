<?php
/**
 * @file
 * starter_carousel.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function starter_carousel_context_default_contexts_alter(&$data) {
  if (isset($data['frontpage'])) {
    $data['frontpage']->reactions['block'] = array(
      'blocks' => array(
        'views-frontpage_carousel-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_carousel-block',
          'region' => 'content',
          'weight' => -10,
        ),
      ),
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function starter_carousel_views_default_views_alter(&$data) {
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
}
