<?php
/**
 * @file
 * farm_soil_test.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_soil_test_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function farm_soil_test_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_log_type().
 */
function farm_soil_test_default_log_type() {
  $items = array();
  $items['farm_soil_test'] = entity_import('log_type', '{
    "type" : "farm_soil_test",
    "label" : "Soil Test",
    "weight" : 0,
    "name_pattern" : "Soil test: [log:field-farm-area]",
    "name_edit" : "1",
    "done" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
