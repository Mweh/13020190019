<?php
session_start();
require_once '../../functions/MY_model.php';
$nama_pasien = $_POST['nama_pasien'];
$nomor_identitas = $_POST['nomor_identitas'];
$alamat = $_POST['alamat'];
$telephone = $_POST['telephone'];
$jenis_kelamin = $_POST['jenis_kelamin'];
$created_at = date('Y-m-d H:i:s');
$created_by = $_SESSION['user']['id'];
$query = "INSERT INTO pasien VALUES('', '$nomor_identitas', '$nama_pasien', '$jenis_kelamin',  '$alamat', '$telephone', '$created_at', '', '', '$created_by', '', '')";
if (create($query) === 1) {
  echo '<script>document.location.href="../../../?page=pasien";</script>';
} else {
  echo mysqli_error($conn);
}
