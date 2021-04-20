<?php
$host = 'localhost';
$user = 'root';
$pass = '';
$dbnm = 'fahmi';
$connection = new 
mysqli($host,$user,$pass,$dbnm); if($connection->connect_errno > 0) {
die('Unable to Connect to Database ['.$connection->connect_error.']');
}
