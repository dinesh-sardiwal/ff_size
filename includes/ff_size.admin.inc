<?php
function ff_size_admin_settings_form() {
  $form = array();
  
  $form['collect_file_field_key'] = array(
    '#type' => 'textfield',
    '#title' => t('File Field Machine Name'),
    '#default_value' => variable_get('collect_file_field_key') ? variable_get('collect_file_field_key') : '',
    '#description' => t('Please Enter File Filed Machine Name LIKE : field_attached:label,second_field_key:label'),
  );
  return system_settings_form($form);
}

