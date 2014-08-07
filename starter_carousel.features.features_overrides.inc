<?php
/**
 * @file
 * starter_carousel.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function starter_carousel_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.frontpage.reactions|block"] = array(
    'blocks' => array(
      'views-frontpage_carousel-block' => array(
        'module' => 'views',
        'delta' => 'frontpage_carousel-block',
        'region' => 'content',
        'weight' => -10,
      ),
    ),
  );

  // Exported overrides for: views_view
  $overrides["views_view.frontpage.display|default|display_options|row_options"]["DELETED"] = TRUE;
  $overrides["views_view.frontpage.display|default|display_options|use_more_always"] = FALSE;

 return $overrides;
}
