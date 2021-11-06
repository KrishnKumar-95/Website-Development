// Just a message
console.log('This is Module.');

// Made a function average that calculates average of the numbers entered in the array
function average(arr) {
    sum = 0;
    // forEach function is type of for loop which picks elements of array one by one
    // and perform operations.
    arr.forEach(element => {
        // here << sum = sum + element >> element stores the values picked one by one
        // from the array, adds into the sum variable and then updates the value of sum variable
        sum += element;
    });
    // this is return function which returns the division of sum of the all elements of the array with the length of the array.
    return sum / arr.length;
}

// This code exports the average function as a module which we can use in other files to calculate average by writing
// const average = require('./<< File Name in which average function is defined >>');
// This module imported as << average >> name

module.exports = {
    avg: average,
    name: 'krishn',
    repo: 'GitHub'
};