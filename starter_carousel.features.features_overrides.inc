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
  $overrides["context.frontpage.reactions|block|blocks|views-carousel-block"] = array(
    'module' => 'views',
    'delta' => 'carousel-block',
    'region' => 'content',
    'weight' => -10,
  );
  $overrides["context.frontpage.reactions|block|blocks|views-frontpage_carousel-block"]["DELETED"] = TRUE;

 return $overrides;
}
