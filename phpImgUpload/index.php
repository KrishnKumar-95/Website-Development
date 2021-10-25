<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <!-- Latest compiled and minified CSS -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">

<!-- jQuery library -->
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>

<!-- Popper JS -->
<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>

<!-- Latest compiled JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
</head>
<body>
	<div class="container">
		<h1 class="text-center text-white bg-dark">Register Name with Profile</h1>
		<br>
		<div class="table-responsive">
		<table class="table table-bordered table-striped table-hover">
			<thead>
				<th> Id </th>
				<th> Username </th>
				<th> Profile pic </th>
			</thead>
			
			<tbody>
		<?php
		
		$con = mysqli_connect('localhost','krishn','Krishn@951829');
		mysqli_select_db($con,'beddata202123');
		
		if(isset($_POST['submit'])) {
			$username = $_POST['username'];
			$files = $_FILES['file'];
			
			print_r($username);
			echo "<br>";
			//print_r($files);
			
			$filename = $files['name'];
			$fileerror = $files['error'];
			$filetmp = $files['temp_name'];
			
			$fileext = explode('.',$filename);
			$filecheck = strtolower(end($fileext));
			
			$fileextstored = array('png', 'jpg', 'jpeg');
			
			if(in_array($filecheck,$filecheckstored)) {
				$destinationfile = 'upload/'.$filename;
				move_uploaded_file($filetmp,$destinationfile);
			}
		}
		
		
		
		
		
		?>
			</tbody>
		</table>
	</div>
	</div>
</body>
</html>