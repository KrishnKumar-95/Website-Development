// Synchronous or Blocking
// Line by Line Execution

// Asynchronous or Non-Blocking Execution
// Line by Line Execution
// Callbacks will fire

// Inclding Module fs >> FileSystem.
const fs = require('fs');

// Content of this given file will be printed after the below message because we are using Asynchronous execution

// After completion of this read file function this will be printed in this time the remaining program will be executed
fs.readFile('krishn.txt', 'utf-8', (err, data) => {
    console.log(data);
})

// Just printing a message
console.log('This is a message by krishn to NodeJS Users.');