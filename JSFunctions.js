console.log('This is JS Functions Tutorials');

// let name1 = "Krishan Kumar";
// let temp = ' is a good boy.';
// console.log(name1 + temp);

// We have functions in the JavaScript so we dont use previous actions
// In Function Value is a Default value which is used when no value assigned to functions parameter :)
function greet(name, greetText = "Greetings from JavaScript") {
    name = name.toUpperCase();
    console.log(greetText + " " + name);
    console.log(name + " is a good boy.");
}

// sum function is to perform sum function taking 3 values
function sum(a, b, c) {
    let d = a + b + c;
    return d;
    // Unreachable code
    // anything after return function will not be executed
    // console.log("this is mentioned after return function")
}

// function to find out greater or lesser.
function comparison(a, b) {
    if (a > b) {
        console.log(`${a} is greater than ${b}`);
    } else if (a == b) {
        console.log(`${a} is equal to ${b}`);
    } else if (a < b) {
        console.log(`${a} is less than ${b}`);
    } else {
        console.log("This operation can't be performed");
    }
}

// This will work only if function is returning any value
// In case printing any value using console.log this will return undefined
// Function printed value cant be directly stored in any variable
// In << Sum function >> there was no printed value
// let returnVal = sum(1, 2, 3);
// console.log(returnVal);

// name1 = "Krishan.Kumar";
// name2 = "indiandexter.com";
// greetText = "Good Morning";
// greet(name1, greetText);
// // Here we dont used the #greetText value so by default value of this parameter will Work.
// greet(name2);
let num1 = 25;
let num2 = 100;
comparison(num1, num2);