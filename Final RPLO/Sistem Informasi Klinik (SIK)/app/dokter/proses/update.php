<?php
session_start();
require_once '../../functions/MY_model.php';

$id = $_POST['id'];
$nama_dokter = $_POST['nama_dokter'];
$alamat = $_POST['alamat'];
$telephone = $_POST['telephone'];
$spesialis = $_POST['spesialis'];
$updated_at = date('Y-m-d H:i:s');
$updated_by = $_SESSION['user']['id'];
$query = "UPDATE dokter SET nama_dokter = '$nama_dokter', alamat = '$alamat', telephone = '$telephone', spesialis = '$spesialis', updated_at = '$updated_at', updated_by = '$updated_by' WHERE id = '$id'";
if (create($query) === 1) {
  echo '<script>document.location.href="../../../?page=dokter";</script>';
} else {
  echo mysqli_error($conn);
}
