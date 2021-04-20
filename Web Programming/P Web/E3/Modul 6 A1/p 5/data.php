<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "fahmi";
// Membuat Koneksi ke database
// Tambahkan satu parameter untuk nama database
$conn = new mysqli($servername, $username, $password, $dbname);
// Cek Koneksi
if ($conn->connect_error) {
die("Koneksi gagal: " . $conn->connect_error);
}
$sql = "SELECT id_barang, nama_barang, tgl_masuk, harga FROM toko";
$result = $conn->query($sql);
if ($result->num_rows > 0) {
// output data tiap row/baris
while($row = $result->fetch_assoc()) {
echo "Data Id ".$row["id_barang"].": ".$row["nama_barang"]. ", 
".$row["tgl_masuk"].", ".$row["harga"]."<br>";
}
} else {
echo "0 hasil";
}
$conn->close();
?>