<?php
session_start();
require_once '../../functions/MY_model.php';

$id = $_POST['id'];
$nama_pasien = $_POST['nama_pasien'];
$nomor_identitas = $_POST['nomor_identitas'];
$alamat = $_POST['alamat'];
$telephone = $_POST['telephone'];
$jenis_kelamin = $_POST['jenis_kelamin'];
$updated_at = date('Y-m-d H:i:s');
$updated_by = $_SESSION['user']['id'];
$query = "UPDATE pasien SET nomor_identitas = '$nomor_identitas', nama_pasien = '$nama_pasien', alamat = '$alamat', telephone = '$telephone', jenis_kelamin = '$jenis_kelamin', updated_at = '$updated_at', updated_by = '$updated_by' WHERE id = '$id'";
if (create($query) === 1) {
  echo '<script>document.location.href="../../../?page=pasien";</script>';
} else {
  echo mysqli_error($conn);
}
