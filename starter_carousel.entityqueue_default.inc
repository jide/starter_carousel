<?php
/**
 * @file
 * starter_carousel.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function starter_carousel_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'carousel';
  $queue->label = 'Carousel';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 1,
  );
  $export['carousel'] = $queue;

  return $export;
}
