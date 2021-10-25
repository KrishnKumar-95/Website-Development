<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>View Database</title>
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
		<h1 class="text-center text-white bg-dark">Register Name with Profie </h1>
		<br>
		<div class="table-responsive">
		<table class="table table-bordered table-striped table-hover text-center">
			<thead class="bg-dark text-white">
				<th> Id </th>
				<th> Candidate Name </th>
				<th> father Name </th>
				<th> Mother Name </th>
				<th> DOB </th>
				<th> Gender </th>
				<th> Caste Category </th>
				<th> Whatsapp No </th>
				<th> Email </th>
				<th> Address </th>
				<th> 10th Board Name </th>
				<th> 10th Roll No </th>
				<th> 10th Passing Year </th>
				<th> 10th Obtained Marks </th>
				<th> 10th Total Marks </th>
				<th> 12th Board Name </th>
				<th> 12th Roll No </th>
				<th> 12th Passing Year </th>
				<th> 12th Obtained Marks </th>
				<th> 12th Total Marks </th>
				<th> UG Course</th>
				<th> UG University Name </th>
				<th> UG University Roll No</th>
				<th> UG Passing Year </th>
				<th> UG Obtained Marks </th>
				<th> UG Total Marks </th>
				<th> UG CGPA</th>
				<th> PG Course</th>
				<th> PG University Name </th>
				<th> PG University Roll No</th>
				<th> PG Passing Year </th>
				<th> PG Obtained Marks </th>
				<th> PG Total Marks </th>
				<th> PG CGPA</th>
				<th> Photo </th>
				<th> Sign </th>
				<th> Docs-PDF </th>
			</thead>
			
			<tbody>
		<?php
		
		$con = mysqli_connect('localhost','indiand1_krishn','951829_Krishn');
		mysqli_select_db($con,'indiand1_beddata202123');
		
		if(isset($_POST['submit'])) {
		    
			$username =         $_POST['username'];
			$fathername =       $_POST['fathername'];
			$mothername =       $_POST['mothername'];
			$dob =              $_POST['dob'];
			$gender =           $_POST['gender'];
			$castecategory =    $_POST['castecategory'];
			$whatsappno =       $_POST['whatsappno'];
			$email =            $_POST['email'];
			$address =          $_POST['address'];
			$sboard =           $_POST['sboard'];
			$sroll =            $_POST['sroll'];
			$spassyear =        $_POST['spassyear'];
			$sobtain =          $_POST['sobtain'];
			$stotal =           $_POST['stotal'];
			$ssboard =          $_POST['ssboard'];
			$ssroll =           $_POST['ssroll'];
			$sspassyear =       $_POST['sspassyear'];
			$ssobtain =         $_POST['ssobtain'];
			$sstotal =          $_POST['sstotal'];
			$ugcourse =         $_POST['ugcourse'];
			$uguniversity =     $_POST['uguniversity'];
			$ugroll =           $_POST['ugroll'];
			$ugpassyear =       $_POST['ugpassyear'];
			$ugobtain =         $_POST['ugobtain'];
			$ugtotal =          $_POST['ugtotal'];
			$ugcgpa =           $_POST['ugcgpa'];
			$pgcourse =         $_POST['pgcourse'];
			$pguniversity =     $_POST['pguniversity'];
			$pgroll =           $_POST['pgroll'];
			$pgpassyear =       $_POST['pgpassyear'];
			$pgobtain =         $_POST['pgobtain'];
			$pgtotal =          $_POST['pgtotal'];
			$pgcgpa =           $_POST['pgcgpa'];
			$files =            $_FILES['file'];
			$sfiles =           $_FILES['sfile'];
			$pdffiles =         $_FILES['pdffile'];
			echo "Hello, ";
			print_r($username);
			echo "<br>";
			
			//print_r($files);
			
			$filename = $files['name'];
			$sfilename = $sfiles['name'];
			$pdffilename = $pdffiles['name'];
			
			$fileerror = $files['error'];
			$sfileerror = $sfiles['error'];
			$pdffileerror = $pdffiles['error'];
			
			$filetmp = $files['tmp_name'];
			$sfiletmp = $sfiles['tmp_name'];
			$pdffiletmp = $pdffiles['tmp_name'];
			
 			//explode photo extention
			$fileext = explode('.',$filename);
			$filecheck = strtolower(end($fileext));
			$fileextstored = array('png', 'jpg', 'jpeg');
			
			//explode sign extention
			$sfileext = explode('.',$sfilename);
			$sfilecheck = strtolower(end($sfileext));
			$sfileextstored = array('png', 'jpg', 'jpeg');
			
			//explode pdf document extention
			$pdffileext = explode('.',$pdffilename);
			$pdffilecheck = strtolower(end($pdffileext));
			$pdffileextstored = array('pdf');
			
			if(in_array($filecheck,$fileextstored)) {
				$destinationfile = 'photoupload/'.$filename;
				$sdestinationfile = 'signupload/'.$sfilename;
				$pdfdestinationfile = 'pdfupload/'.$pdffilename;
				
 				move_uploaded_file($sfiletmp,$sdestinationfile);
				move_uploaded_file($filetmp,$destinationfile);
				move_uploaded_file($pdffiletmp,$pdfdestinationfile);
				
// 			if(in_array($sfilecheck,$sfileextstored)) {
// 				$sdestinationfile = 'signupload/'.$sfilename;
// 				move_uploaded_file($sfiletmp,$sdestinationfile);
				
// 			if(in_array($pdffilecheck,$pdffileextstored)) {
// 				$pdfdestinationfile = 'pdfupload/'.$pdffilename;
// 				move_uploaded_file($pdffiletmp,$pdfdestinationfile);
				
				$q = "INSERT INTO `imgupload`(`username`, `fathername`, `mothername`, `dob`, `gender`, `castecategory`, `whatsappno`, `email`, `address`, `sboard`, `sroll`, `spassyear`, `sobtain`, `stotal`, `ssboard`, `ssroll`, `sspassyear`, `ssobtain`, `sstotal`, `ugcourse`, `uguniversity`, `ugroll`, `ugpassyear`, `ugobtain`, `ugtotal`, `ugcgpa`, `pgcourse`, `pguniversity`, `pgroll`, `pgpassyear`, `pgobtain`, `pgtotal`, `pgcgpa`, `image`, `sign`, `pdf`)
				                      VALUES ('$username',
				                              '$fathername',
				                              '$mothername',
				                              '$dob',
				                              '$gender',
				                              '$castecategory',
				                              '$whatsappno',
				                              '$email',
				                              '$address',
				                              '$sboard',
				                              '$sroll',
				                              '$spassyear',
				                              '$sobtain',
				                              '$stotal',
				                              '$ssboard',
				                              '$ssroll',
				                              '$sspassyear',
				                              '$ssobtain',
				                              '$sstotal',
				                              '$ugcourse',
				                              '$uguniversity',
				                              '$ugroll',
				                              '$ugpassyear',
				                              '$ugobtain',
				                              '$ugtotal',
				                              '$ugcgpa',
				                              '$pgcourse',
				                              '$pguniversity',
				                              '$pgroll',
				                              '$pgpassyear',
				                              '$pgobtain',
				                              '$pgtotal',
				                              '$pgcgpa',
				                              '$destinationfile', '$sdestinationfile', '$pdfdestinationfile')";
				
				$query = mysqli_query($con, $q);
				
				$displayquery = " select * from imgupload " ;
				$querydisplay = mysqli_query($con, $displayquery);
				
				//$row = mysqli_num_rows($querydisplay);
				
				while($result = mysqli_fetch_array($querydisplay)) {
					?>
					
					<tr>
						<td> <?php echo $result['id']; ?> </td>
						<td> <?php echo $result['username']; ?> </td>
						<td> <?php echo $result['fathername']; ?> </td>
						<td> <?php echo $result['mothername']; ?> </td>
						<td> <?php echo $result['dob']; ?> </td>
					    <td> <?php echo $result['gender']; ?> </td>
						<td> <?php echo $result['castecategory']; ?> </td>
						<td> <?php echo $result['whatsappno']; ?> </td>
						<td> <?php echo $result['email']; ?> </td>		
						<td> <?php echo $result['address']; ?> </td>
						<td> <?php echo $result['sboard']; ?> </td>
						<td> <?php echo $result['sroll']; ?> </td>
						<td> <?php echo $result['spassyear']; ?> </td>
						<td> <?php echo $result['sobtain']; ?> </td>
						<td> <?php echo $result['stotal']; ?> </td>
						<td> <?php echo $result['ssboard']; ?> </td>
						<td> <?php echo $result['ssroll']; ?> </td>				
						<td> <?php echo $result['sspassyear']; ?> </td>
						<td> <?php echo $result['ssobtain']; ?> </td>
						<td> <?php echo $result['sstotal']; ?> </td>
						<td> <?php echo $result['ugcourse']; ?> </td>
						<td> <?php echo $result['uguniversity']; ?> </td>
						<td> <?php echo $result['ugroll']; ?> </td>
						<td> <?php echo $result['ugpassyear']; ?> </td>
						<td> <?php echo $result['ugobtain']; ?> </td>
						<td> <?php echo $result['ugtotal']; ?> </td>
						<td> <?php echo $result['ugcgpa']; ?> </td>
						<td> <?php echo $result['pgcourse']; ?> </td>
						<td> <?php echo $result['pguniversity']; ?> </td>
						<td> <?php echo $result['pgroll']; ?> </td>
						<td> <?php echo $result['pgpassyear']; ?> </td>			
						<td> <?php echo $result['pgobtain']; ?> </td>
						<td> <?php echo $result['pgtotal']; ?> </td>
						<td> <?php echo $result['pgcgpa']; ?> </td>
						<td> <img src="<?php echo $result['image']; ?>" height="100px" width="100px"> </td>
						<td> <img src="<?php echo $result['sign']; ?>" height="100px" width="100px"> </td>
						<td> <embed src="<?php echo $result['pdf']; ?>" type="application/pdf" width="100px" height="150px" /> </td>
					</tr>
					
					<?php
				}
			}
			
			else{
				echo "Extention not matching chose files of given extention.";
			}
		
		}
		
		
		?>
			</tbody>
		</table>
	</div>
	</div>
</body>
</html>