// Object
const krishn = {
    name: "Krishn-Kumar",
    favNum: 3,
    developer: true,
};

// Module-Wrapper-Function
// (function(exports, module, require, __filename, __dirname, __express){ <Whole program will be automatically covered in this function by nodejs during export> })


// using this we can export this content which can be imported by anyone
module.exports = krishn;