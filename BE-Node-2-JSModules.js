// First include the Module of the NodeJs according to our respective work
// we use const because we dont want to change it.
const fs = require("fs");

// Using fs >> FileSystem and readFileSync function to read file 
// let text = fs.readFileSync("<<File Name>>", "<<encoding type>>");
let text = fs.readFileSync("readText.txt", "utf-8");

// Replacing the contents of the file using replace function
text = text.replace("NodeJS", "JavaScript")

// printing the contents of the file which is pre-mentioned in the text variable
console.log(text);

// printing a message
console.log("Creating a New File...");

// Using this we can create file and write the content to the file
fs.writeFileSync("krishn.txt", text);