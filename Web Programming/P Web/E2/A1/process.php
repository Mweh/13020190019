<?php
// if(isset($_POST['username']) && isset($_POST['password'])) {
// if ($_POST['username'] == 'web' && $_POST['password'] == 'php') {
// $username = $_POST['username']; 
// echo "Selamat Datang ".$username;
// } else {
// echo "<script>alert('Username atau Password Salah!');</script>";
// }
// } else {
// echo "<script>alert('Username atau Password Kosong!');</script>";
// }

if(isset($_POST['username']) && isset($_POST['password'])) {
    if ($_POST['username'] == 'web' && $_POST['password'] == 'php') {
    $username = $_POST['username']; 
    echo "Selamat Datang ".$username;
    } else {
    echo "<script>alert('Username atau Password Salah!');</script>";
    }
    } else {
    echo "<script>alert('Username atau Password Kosong!');</script>";
    }
?>