<?php

function is_active($menu = '')
{
  if (isset($_GET['page'])) {

    if ($_GET['page'] === $menu || $_GET['page'] === 'tambah-' . $menu || $_GET['page'] === 'edit-' . $menu) {
      return  'active';
    }
  } else {
    if ($menu === '') {
      return 'active';
    }
  }
}
