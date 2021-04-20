<?php


$servername = "localhost";
$username = "root";
$password = "";
$dbname = "fahmi";
// Membuat koneksi ke database akademik
$conn = new mysqli($servername, $username, $password, $dbname);
// Cek Koneksi
if ($conn->connect_error) {
die("Koneksi gagal: " . $conn->connect_error);
} //bila tak ada pesan error muncul berarti berhasil konek
?>
