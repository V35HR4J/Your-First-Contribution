<?php  

session_start();

if(isset($_POST['submit']) and $_SESSION['captcha'] == $_POST['text_captcha']){

	echo "<script> alert('Selamat, anda lolos captcha!') </script>";

}else{

	echo "<script> alert('Captcha salah, silahkan ulangi lagi') </script>";

}


?>

<form method="post">
	<h3>PHP Verification captcha</h3>
	 <p> Kode Captcha : </p>
	 <p> <img src="captcha.php"> </p> <br>
	 <input type="text" name="text_captcha" maxlength="6"> <br>
	 <input type="submit" name="submit" value="Submit">
</form>
