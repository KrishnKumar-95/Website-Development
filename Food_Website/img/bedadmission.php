<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>B.Ed Admissions 2021-23</title>
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
    <div class="container"><br>
        <h1 class="text-white bg-dark text-center">
            B.Ed Admissions for 2021-23
        </h1>
        <div class="col-lg-8 m-auto d-block">
          <!-- PARAGRAPH -->
        <p>1. All Fields are required please fill carefully.<br>
           2. Data once submitted no need to fill the form again for same candidate.<br>
       <!--3. In case any query or <strong style="color: red;">Technical Issue</strong>directly chat us on Whatsapp by heading to the contact us page.-->
        </p>
        <hr>
    	<form action="upload.php" method="post" enctype="multipart/form-data">
    	
    	<!--1Candidate Name-->
    	<div class="form-group">
        	<label for="user">Candidate Name : </label>
        	<input type="text" name="username" id="user" class="form-control" placeholder="Enter your name" required>
        </div>
        
        <!--2Father Name-->
        <div class="form-group">
        	<label for="father">Father Name : </label>
        	<input type="text" name="fathername" id="father" class="form-control" placeholder="Enter father name" required>
        </div>
        
        <!--3Mother Name-->
        <div class="form-group">
        	<label for="mother">Mother Name : </label>
        	<input type="text" name="mothername" id="mother" class="form-control" placeholder="Enter mother name" required>
        </div>
        
        <!--4Date of Birth-->
        <div class="form-group">
        	<label for="dob">Date of Birth : </label>
        	<input type="date" name="dob" id="dob" class="form-control" placeholder="Enter Date of Birth" required>
        </div>
        
        <!--5Gender-->
        <div class="form-group">
            
        	<!--<label for="gender">Gender : </label>-->
        	<!--<input list="gen" name="gender" id="gender" class="form-control" required>-->
            <!--   <datalist id="gen">-->
            <!--       <option value="Male">-->
            <!--       <option value="Female">-->
            <!--       <option value="Other">-->
            <!--   </datalist>-->
            
             <label for="gender">Select Gender :</label>
                <select class="form-control" id="gender" name="gender" required>
                <option value="Male">Male</option>
                <option value="Female">Female</option>
                <option value="Cantsay">Other</option>
                </select>
            
        </div>
        
        <!--6Caste Category-->
        
        <div class="form-group">
        	<!--<label for="castecategory">Gender : </label>-->
        	<!--<input list="castecat" name="castecategory" id="castecategory" class="form-control" required>-->
  
         <!--   <datalist id="castecat">-->
         <!--       <option value="General">-->
         <!--       <option value="BC-A">-->
         <!--       <option value="BC-B">-->
         <!--       <option value="OBC">-->
         <!--       <option value="SC/ST">-->
         <!--   </datalist>-->
         
            <label for="castecategory">Caste Category :</label>
                <select class="form-control" id="castecategory" name="castecategory" required>
                <option value="General">General</option>
                <option value="BCA">BCA</option>
                <option value="BCB">BCB</option>
                <option value="SCorST">SC/ST</option>
                </select>
         
        </div>
        
        <!--7Whatsapp No-->
        <div class="form-group">
        	<label for="whatsappno">Whatsapp No : </label>
        	<input type="tel" name="whatsappno" id="whatsappno" class="form-control" placeholder="Enter active phone no" pattern="[0-9]{10}" title="Enter Ten Digit Mobile No" required>
        </div>
        
        <!--8Email-->
        <div class="form-group">
        	<label for="email">Email : </label>
        	<input type="email" name="email" id="email" class="form-control" placeholder="Enter correct email id" pattern="[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,4}$" required>
        </div>
        
        <!--9Address-->
        <div class="form-group">
        	<label for="address">Address : </label>
        	<input type="text" name="address" id="address" class="form-control" placeholder="Enter Communication Address" title="Enter correct Email ID" required>
        </div>
        <hr>
		<h3 class="text-white bg-dark text-center"> Enter your 10th/Secondary Class Details </h3>
        
        <!--10 10th Class/Secondary Board Name-->
        <div class="form-group">
        	<label for="sboard">10th Class / Secondary Board Name : </label>
        	<input type="text" name="sboard" id="sboard" class="form-control" placeholder="Enter 10th Class Board Name" required>
        </div>
        
        <!--11 10th Roll No-->
        <div class="form-group">
        	<label for="sroll">10th / Secondary Roll no : </label>
        	<input type="text" name="sroll" id="sroll" class="form-control" placeholder="Enter 10th/Secondary Roll no" required>
        </div>
        
        <!--12 10th Passing Year-->
        <div class="form-group">
        	<label for="spassyear">10th Passing Year : </label>
        	<input type="text" name="spassyear" id="spassyear" class="form-control" placeholder="Enter 10th class passing year" required>
        </div>
        
        <!--13 10th Class Obtained Marks-->
        <div class="form-group">
        	<label for="sobtain">10th Class Obtained Marks : </label>
        	<input type="text" name="sobtain" id="sobtain" class="form-control" placeholder="Enter 10th Obtained Marks" required>
        </div>
        
        <!--14 10th Class Total Marks-->
        <div class="form-group">
        	<label for="stotal">10th Class Total Marks : </label>
        	<input type="text" name="stotal" id="stotal" class="form-control" placeholder="Enter 10th Total Marks" required>
        </div>
        
        <h3 class="text-white bg-dark text-center"> Enter your 12th/Senior-Secondary Class Details </h3>
        
        <!--15 12th/Senior-Secondary Class Board Name-->
        <div class="form-group">
        	<label for="ssboard">12th/Senior-Secondary Class Board Name : </label>
        	<input type="text" name="ssboard" id="ssboard" class="form-control" placeholder="Enter 12th/Senior-Secondary Class Board" required>
        </div>
        
        <!--16 12th Roll No-->
        <div class="form-group">
        	<label for="ssroll">12th / Secondary Roll no : </label>
        	<input type="text" name="ssroll" id="ssroll" class="form-control" placeholder="Enter 12th/Senior-Secondary Class Roll no" required>
        </div>
        
        <!--17 12th Passing Year-->
        <div class="form-group">
        	<label for="sspassyear">12th Passing Year : </label>
        	<input type="text" name="sspassyear" id="sspassyear" class="form-control" placeholder="Enter 12th/Senior-Secondary class passing year" required>
        </div>
        
        <!--18 12th Class Obtained Marks-->
        <div class="form-group">
        	<label for="ssobtain">12th Class Obtained Marks : </label>
        	<input type="text" name="ssobtain" id="ssobtain" class="form-control" placeholder="Enter 12th/Senior-Secondary class Obtained Marks" required>
        </div>
        
        <!--19 12th Class Total Marks-->
        <div class="form-group">
        	<label for="sstotal">12th Class Total Marks : </label>
        	<input type="text" name="sstotal" id="sstotal" class="form-control" placeholder="Enter 12th/Senior-Secondary class Total Marks" required>
        </div>
                
        <hr>
		<h3 class="text-white bg-dark text-center"> Enter Graduation Details </h3>
		
		<!--20 Graduation Course Name-->
        <div class="form-group">
            <label for="ugcourse">Course Name :</label>
                <select id="ugcourse" name="ugcourse" class="form-control" placeholder="Enter Name of Graduation Course" required>
                    <option value="B.A.">B.A</option>
                    <option value="B.Com">B.Com</option>
                    <option value="B.Sc">B.Sc</option>
                    <option value="B.Tech">B.Tech</option>
                    <option value="BCA">BCA</option>
                    <option value="other">Other</option>
                </select>
                
        	<!--<input type="text" name="ugcourse" id="ugcourse" class="form-control" placeholder="Enter Name of Graduation Course" required>-->
        </div>
        
        <!--21 Graduation University Name-->
        <div class="form-group">
        	<label for="uguniversity">University Name : </label>
        	<input type="text" name="uguniversity" id="uguniversity" class="form-control" placeholder="Enter University Name of Graduation Course" required>
        </div>
        
        <!--22 Graduation University Roll No-->
        <div class="form-group">
        	<label for="ugroll">Graduation/University Roll no : </label>
        	<input type="text" name="ugroll" id="ugroll" class="form-control" placeholder="Enter Graduation University Roll no" required>
        </div>
        
        <!--23 Graduation Passing Year-->
        <div class="form-group">
        	<label for="ugpassyear">Graduation Passing Year : </label>
        	<input type="text" name="ugpassyear" id="ugpassyear" class="form-control" placeholder="Enter Graduation passing year" required>
        </div>
        
        <!--24 Graduation Obtained Marks-->
        <div class="form-group">
        	<label for="ugobtain">Graduation Obtained Marks : </label>
        	<input type="text" name="ugobtain" id="ugobtain" class="form-control" placeholder="Enter Graduation Obtained Marks">
        </div>
        
        <!--25 Graduation Total Marks-->
        <div class="form-group">
        	<label for="ugtotal">Graduation Total Marks : </label>
        	<input type="text" name="ugtotal" id="ugtotal" class="form-control" placeholder="Enter Graduation Total Marks">
        </div>
        
        <h6>Enter CGPA (as per your Graduation Course) in if available otherwise leave it blank.</h6>
        
        <!--26 Graduation CGPA-->
        <div class="form-group">
        	<label for="ugcgpa">Graduation CGPA : </label>
        	<input type="text" name="ugcgpa" id="ugcgpa" class="form-control" placeholder="Enter CGPA as per your Marksheet">
        </div>
        <hr>
        <h3 class="text-white bg-dark text-center"> Enter your Post-Graduation Details </h3>
        
        
        <!--27 Post-Graduation Course Name-->
        <div class="form-group">
            <label for="pgcourse">Post-Graduation Course Name :</label>
                <select id="pgcourse" name="pgcourse" class="form-control" placeholder="Enter Name of Graduation Course" required>
                    <option value="M.A.">M.A</option>
                    <option value="M.Com">M.Com</option>
                    <option value="M.Sc">M.Sc</option>
                    <option value="M.Tech">M.Tech</option>
                    <option value="MCA">MCA</option>
                    <option value="other">Other</option>
                </select>
            
            </div>
        
        <!--28 Post-Graduation University Name-->
        <div class="form-group">
        	<label for="pguniversity">Post-Graduation University Name : </label>
        	<input type="text" name="pguniversity" id="pguniversity" class="form-control" placeholder="Enter Post-Graduation University Name" required>
        </div>
        
        <!--29 Post-Graduation Roll No-->
        <div class="form-group">
        	<label for="pgroll">Post-Graduation University Roll no : </label>
        	<input type="text" name="pgroll" id="pgroll" class="form-control" placeholder="Enter Post-Graduation University Roll no">
        </div>
        
        <!--30Post-Graduation Passing Year-->
        <div class="form-group">
        	<label for="pgpassyear">Post-Graduation Passing Year : </label>
        	<input type="text" name="pgpassyear" id="pgpassyear" class="form-control" placeholder="Enter Post-Graduation Passing Year">
        </div>
        
        <!--31Post-Graduation Obtained Marks-->
        <div class="form-group">
        	<label for="pgobtain">Post-Graduation Obtained Marks : </label>
        	<input type="text" name="pgobtain" id="pgobtain" class="form-control" placeholder="Enter Post-Graduation Obtained Marks">
        </div>
        
        <!--32Post-Graduation Total Marks-->
        <div class="form-group">
        	<label for="pgtotal">Post-Graduation Total Marks : </label>
        	<input type="text" name="pgtotal" id="pgtotal" class="form-control" placeholder="Enter Post-Graduation Total Marks">
        </div>
        
        <h6>Enter CGPA (as per your Post-Graduation Course) in it if available otherwise leave it blank.</h6>
        
        <!--33Post-Graduation CGPA-->
        <div class="form-group">
        	<label for="pgcgpa">Post-Graduation CGPA : </label>
        	<input type="text" name="pgcgpa" id="pgcgpa" class="form-control" placeholder="Enter CGPA as per your Marksheet">
        </div>
        <hr>
        <h4 class="text-white bg-dark text-center"> This is Upload-Section here you have to Upload your Passport size Photo, Signature & PDF of Documents.</h4>
        <p class="bg-cream" style="color: red";><strong>
           1. Only (jpg, png, jpeg) files are accepted for Photo and Signature.<br>
           2. Make PDF file of your required documents and Upload.<br>
           3. Click Here to Download <a href="admission form 2021-22.pdf" download>Amission Form</a><br>
           4. (i)Download Admission form, (ii)Fill it properly, (iii)Attach with documents (iv)Make PDF and Upload.<br>
           5. All Documents in the PDF must be clear and visible.</strong></p><br>
           
        <p class="bg-cream" ><strong>
           1. Aadhar Card, PPP(Parivar Pehchan Patra), Caste Certificate (if Any), Domicile (If Haryana Resident) <br>
           2. 10th, 12th, Graduation, Post-Graduation(If Any)<br>
           3. Consolidated Marksheet of Graduation and Post-Graduation (If Any) <br>
           4. All Documents must be in the single PDF file and clear, visible.</strong></p><br>
        
        <!--34Passport Pic-->
        <div class="form-group">
        	<label for="file">Upload Passport Size Photo (Only jpg, jpeg, png files) : </label>
        	<input type="file" name="file"  accept=".png, .jpg, .jpeg" id="file" class="form-control" required>
        </div>
        
        <!--35Passport Pic-->
        <div class="form-group">
        	<label for="sfile">Upload Signature (Only jpg, jpeg, png files) : </label>
        	<input type="file" name="sfile"  accept=".png, .jpg, .jpeg" id="sfile" class="form-control" required>
        </div>
        
        <!--36Passport Pic-->
        <div class="form-group">
        	<label for="pdffile">Upload Single PDF file of Documents (Only PDF file with visible documents) : </label>
        	<input type="file" name="pdffile"  accept=".pdf" id="pdffile" class="form-control" required>
        	<br>
        </div>
        
        <input type="submit" name="submit" value="Submit" class="btn btn-success">
        <br><br><br>
        <h4 class="text-white bg-dark text-center"> Contact Us</h4>
        
        <style>
            a:link {
                background-color: LightGreen;
                text-decoration: none;
                border: 2px solid transparent;
                border-radius: 5px;
                font-weight: bold;
            }
            a:hover {
                color: white;
                background-color: ForestGreen;
            }
        </style>
        
        <span>
            You can Contact and directly chat us on Whatsapp by clicking any given Phone no :<br><br>
        <a class="btn" href="https://wa.me/919518297071">+91-9518297071</a> <br><br> <a class="btn" href="https://wa.me/918708759060">+91-8708759060</a></span>
        <hr><br>
        
    </form>
    </div>
    </div>
</body>
</html>
