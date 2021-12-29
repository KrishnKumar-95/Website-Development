// PATH MODULE CAN INTERACT WITH PATHS OF FILES AND DIRECTORIES
const path = require("path");

// It throws the path
const a1 = path.basename("C:\\temp\\myfile.html");
const a2 = path.dirname("C:\\temp\\myfile.html");
const a3 = path.extname(__filename)

console.log("basename :- ", a1);
console.log("dirname  :- ", a2);

/*      __filename -> is the same file in which we are working
        __dirname   -> is the same file directory in which we are working
*/
console.log("The file is :- ", __filename, "\n", "The same file extention :- ", a3);