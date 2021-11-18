// MongooseJs to Connect with Database

const mongoose = require('mongoose');

// here we are going to connect the mongoose to our MongoDB Database    
mongoose.connect('mongodb://localhost/krishnKart', { useNewUrlParser: true, useUnifiedTopology: true });

var db = mongoose.connection;

// db.on('error', console.error.bind(console, 'connecction error:'));
// db.once('open', function() {
//     console.log('We are connected...')
// })

// SCHEMA TELLS US THAT WHICH TYPE OF DATA WE ARE GOING TO STORE
const kittySchema = new mongoose.Schema({ name: String, age: Intl });


// METHODS USING THIS WE CAN CALL THE VALUES OF THE OBJECT CREATED
kittySchema.methods.speak = function() {
    const greeting = "My name is " + this.name;
    console.log(greeting);
};


// MODEL >> COMPILED FORM OF SCHEMA PLURAL FORM OF ITS NAME WILL BE GIVEN TO COLLECTION IN DATABASE
// MODEL INHERITS THE RULES OF THE SCHEMA
// MODEL KE PLURAL FORM KA COLLECTION WO KHUD BANAYEGA OR KHUD USME DATA DALEGA

// << krishnKitty >> IS A New Kitten MODEL WHICH WILL BE CONVERTED TO << OBJECT >>
// THIS OBJECT WILL BE STORED IN THE << COLLECTION >> (WHICH IS AUTOMATICALLY CREATED BY MODEL) WHEN WE RUN SAVE FUNCTION AS BELOW
const Kitten = mongoose.model('krishnKitty', kittySchema);


// OBJECTS WHOSE VALUES WILL BE STORED IN THE DATABASE
const krishnKitty = new Kitten({ name: '9518297071' });
const krishnKitty2 = new Kitten({ name: 'krishnKitty2', age: 20 });
// console.log(krishnKitty.name);
// krishnKitty.speak();


// SAVE THE DATABASE USING SAVE() FUNCTION
krishnKitty.save(function(err, krishnKitty) {
    if (err) return console.error(err);
    // krishnKitty.speak();
});
krishnKitty2.save(function(err, krishnKitty2) {
    if (err) return console.error(err);
    // krishnKitty2.speak();
});


// DISPLAY THE DATA SAVE MESSAGE IN THE CONSOLE
Kitten.find({ name: "krishnKitty" }, function(err, kittens) {
    if (err) return console.error(err);
    console.log(kittens);
})


// |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

// MongooseJs to Connect with Database

// const mongoose = require('mongoose');

// // here we are going to connect the mongoose to our MongoDB Database    
// mongoose.connect('mongodb://localhost/krishnKart', { useNewUrlParser: true, useUnifiedTopology: true });

// var db = mongoose.connection;

// // db.on('error', console.error.bind(console, 'connecction error:'));
// // db.once('open', function() {
// //     console.log('We are connected...')
// // })


// // first we make the schema for Mongoose we named that schema as -- << kittySchema >>
// // the data will be saved according to this schema
// // which has name of string type
// // SCHEMA TELLS US THAT WHICH TYPE OF DATA WE ARE GOING TO STORE
// const kittySchema = new mongoose.Schema({ name: String, age: Intl });
// // NOW OUR SCHEMA IS GOING TO CONVERT INTO MODEL

// kittySchema.methods.speak = function() {
//     const greeting = "My name is " + this.name;
//     console.log(greeting);
// };

// // Schema is a normal restrictions of the DataType to the Document
// // Model is the compiled form of the Schema

// // collection will be made by the system itself using the plural of the name given below
// // here krishnkitty >> krishnkitties
// // here is the model name in qoutes which is compiled form of Schema.
// const Kitten = mongoose.model('krishnKitty', kittySchema);
// // this will generate new collection in the database << krishnKart >> which is have mentioned above

// // this is object made which will be stored in as document in MongoDB Database.
// const krishnKitty = new Kitten({ name: 'krishnKitty' });
// const krishnKitty2 = new Kitten({ name: 'krishnKitty2', age: 20 });
// // console.log(krishnKitty.name);
// // krishnKitty.speak();


// // Using this we can save the data in the DataBase of object variable >> krishnKitty
// krishnKitty.save(function(err, krishnKitty) {
//     if (err) return console.error(err);
//     // krishnKitty.speak();
// });

// // Using this we can save the data in the DataBase of object variable >> krishnKitty2
// krishnKitty2.save(function(err, krishnKitty2) {
//     if (err) return console.error(err);
//     // krishnKitty2.speak();
// });

// Kitten.find({ name: "krishnKitty" }, function(err, kittens) {
//     if (err) return console.error(err);
//     console.log(kittens);
// })