
<button><a href="form_input.php">Tambah Data</a></button>



<?php



include 'koneksi.php';
$sql = "SELECT * FROM mhs";
$result = $conn->query($sql);
if ($result->num_rows > 0) {
    echo "<table border=1 style='border-collapse:collapse;'>
    <tr><th>NIM</th><th>Nama Mahasiswa</th><th>Tanggal Lahir</th></tr>";
    while($row = $result->fetch_assoc()) {
    echo "<tr><td>$row[nim]</td><td>$row[nama]</td><td>$row[tgl_lahir]</td></tr>";
    }
    echo "</table>";
} else {
echo "0 results";
}
$conn->close();
?>
