// const sim = require("./moduleFirst");

// import krishn from "./moduleFirst.mjs"
// import { krishnfun as krishn } from "./moduleFirst.mjs"  < export must not be default >

// using this we import all functions/content from the exported file
import * as kk from "./moduleFirst.mjs"


// this way we can access the content of the File
// sim();

console.log(kk.krishnfun2());

// if we want to use ES6 module
// 1. "author" : "<name of author>"
//       "type" : "module",

// 2. now we can't use << module.exports >> to export now
// export function,object or what we have

// 3. the File which is going to be export is of << .mjs >> extention
// now another file of << .js >> file which is importing that file.

// 4. the function or object etc is of same name which will be imported

// 5. we can export and import multiple functions and objects as we want using ES6 module

// 6. but we can't export or import multiple functions using << module.exports >> approach

// 7. we can import any function as another name

//     import { krishnfun as krishn } from "./moduleFirst.mjs"

// But using this approach we can't export that function by default