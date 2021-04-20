

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
    echo "<table border=1 style='border-collapse: 
    collapse;'><tr><th>Id Barang</th><th>Nama
    Barang</th><th>Tanggal Masuk</th><th>Harga</th></tr>";
    while($row = $result->fetch_assoc()) {
    echo 
    "<tr><td>$row[id_barang]</td><td>$row[nama_barang]</td><td>
    $row[tgl_masuk]</td><td>$row[harga]</td></tr>";
    }
    echo "</table>";
    } else {
    echo "0 results";
    }
$conn->close();
?>