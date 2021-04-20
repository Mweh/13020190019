<?php
require_once 'koneksi.php';
$sql = "SELECT * FROM toko";
if($connection->query($sql)) {
echo "<script>alert('Query Sukses');</script>";
} else {
echo "<script>alert('Query Gagal!');</script>";
}