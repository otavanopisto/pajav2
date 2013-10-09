<?php
/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
  $members = filter_xss($row->views_php_12);
  $min_members = 0;
  if(isset($row->field_field_hintalaskuri[0]))
    $min_members = filter_xss($row->field_field_hintalaskuri[0]['rendered']['#markup']);
  $attendance = 0;
  if($min_members != 0)
    $attendance = round(min(array(($members/$min_members) * 100, 100)),0);
  $output = '<div class="attendancies-indicator-wrapper"><div style="width:'.$attendance.'%;" class="attendancies-indicator"><div class="attendancies-percent">'.$attendance.'%</div></div></div>';
  print $output;
?>

