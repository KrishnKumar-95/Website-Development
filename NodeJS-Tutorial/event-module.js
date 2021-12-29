const EventEmitter = require('events');

class MyEmitter extends EventEmitter {}

const myEmitter = new MyEmitter();

myEmitter.on('WaterFull', () => {
    console.log("Turn off the Motor");
    setTimeout(() => {
        console.log("Plese Turn off the motor...! The Gentle Reminder after 3 sec");
    }, 3000);
});

myEmitter.emit('WaterFull');

// ========================================================================
// SUMMARY


// //file imported
// const EE = require("events");

// // make class and inherit the propertis from parent
// class myem extends EE {}

// // make object of our made class
// const myEm = new myem();

// // Condition with Action
// // on event << Call >> related call-back function will be called
// myEm.on('Call', () => {
//     console.log("Call the Police....");
//     setTimeout(() => {
//         console.log("this message is after 2sec..!");
//     }, 2000);
// });

// // here we emitting << Call >> event
// myEm.emit('Call');