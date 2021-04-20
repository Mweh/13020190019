<?php
require_once 'koneksi.php';
$sql = "SELECT * FROM toko";
if($result = $connection->query($sql)) { 
while($row = $reslut->fetch_object()) {
echo $row->col1."<br>"; 
echo $row->coln."<br>";
}
} else {
echo "<script>alert('Query Gagal!');</script>";
}
