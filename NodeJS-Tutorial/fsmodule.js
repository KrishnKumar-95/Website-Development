// File System Module
const fs = require("fs");


// fs.readFile( <path-of-file> , <encoding-type> , <call-back-function> )

// fs.readFile("file.txt", "utf8", (err, data) => {
//     console.log(err, data);
// });

// 1. This message will show first and after that the file will be displayed
// 2. because the process is based on Non-Blocking IO model
// 3. It dont block the process and make multiple processes in the Single Thread
// 4. it continue executing code while the << fs >> module reading the file and making call-back-function
// 5. This is known as Asynchronous process

// console.log("Finished Reading File.")

// 1. If we want to intentionally block the process and dont want to execute the code further until the process will be completed we use << fs.readFileSync >>

// fs.readFileSync( <path-of-file> ).toString() -> is to convert the file content into string
const a = fs.readFileSync("file.txt").toString();
console.log(a);

console.log("File Read Successful....");

// fs.writeFile(<path of the file>,<content>, <Call-Back-Function>)
// This is also a Asynchronous Process and wont block further processes
fs.writeFile("file.txt", "This file is modified using fs.writeFile module", () => {
    console.log("File has been modified...");
});

// This is Synchronous Process and blocks the further processes to execute
fs.writeFileSync("file.txt", "This file is modified using fs.writeFileSync module");