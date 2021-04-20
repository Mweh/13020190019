<?php
$servername = "localhost";
$username = "root";
$password = "";//diisi bila ada
// Membuat/membuka Koneksi
$conn = mysqli_connect($servername, $username, $password);
// Memeriksa Koneksi
if (!$conn) {
die("Koneksi gagal: " . mysqli_connect_error());
}
echo "Koneksi sukses";
?>