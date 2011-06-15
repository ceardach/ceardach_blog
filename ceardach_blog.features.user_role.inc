<?php
/**
 * @file
 * ceardach_blog.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function ceardach_blog_user_default_roles() {
  $roles = array();

  // Exported role: blogger
  $roles['blogger'] = array(
    'name' => 'blogger',
    'weight' => '2',
  );

  return $roles;
}
