// Using this we can import the code of the Module to this file to use the module.
const BENode6CustomModule = require('./BENode6CustomModule');

// Array which is used in the calculation of Average
avgNos = [3, 4, 7, 12];

// Variable which stores the calculated average.
avr = BENode6CustomModule.avg(avgNos);

// Printing the stored average.
console.log(avr);

console.log('This is index.js')