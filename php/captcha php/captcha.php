<?php  
session_start();

$random = substr(str_shuffle("0123456789qwertyuiopasdfghjklzxcvbnm"), 0,4);
//string yang diacak 4 karakter dari a-z dan 0 - 9

$_SESSION['captcha'] = $random;

$gambar = imagecreate(100, 30);
$bg = imagecolorallocate($gambar, 25, 60, 20);
$tulisan = imagecolorallocate($gambar, 255, 255, 255);

imagefilledrectangle($gambar, 0, 0, 50, 20, $bg);
imagestring($gambar, 10, 3, 3, $random, $tulisan);
imagepng($gambar);


?>

