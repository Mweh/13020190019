<?php
require_once '../functions/MY_model.php';

if (register() > 0) {
  echo '<script>document.location.href="login.php"</script>';
} else {
  echo mysqli_error($conn);
}
