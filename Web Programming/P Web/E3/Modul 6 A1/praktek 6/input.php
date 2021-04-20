<?php
include 'koneksi.php';//menyisipkan file koneksi.php
$sql = "INSERT INTO mhs
VALUE('$_POST[nim]','$_POST[nama]','$_POST[tgl]')";
if ($conn->query($sql)) {
echo "Record baru berhasil ditambahkan";
} else {
echo "Error: " . $sql . "<br>" . $conn->error;
}
$conn->close();
?>
