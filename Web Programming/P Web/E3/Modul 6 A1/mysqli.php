<?php
class Halo { 
public $text;
public function hello() {
return "Hello World!";
}
}
$obj = new Halo();
$obj->text = 'PHP';
$obj->hello(); 
echo $obj->text;
