// MongooseJs to Connect with Database

const mongoose = require('mongoose');

mongoose.connect('mongodb://localhost/krishnKart', { useNewUrlParser: true, useUnifiedTopology: true });

var db = mongoose.connection;

// db.on('error', console.error.bind(console, 'connecction error:'));
// db.once('open', function() {
//     console.log('We are connected...')
// })


// first we make the schema for Mongoose we named that schema as -- << kittySchema >>
// the data will be saved according to this schema
// which has name of string type
const kittySchema = new mongoose.Schema({ name: String });

kittySchema.methods.speak = function() {
    const greeting = "My name is " + this.name;
    // console.log(greeting);
};


// collection will be made by the system itself using the plural of the name given below
// here krishnkitty >> krishnkitties
const Kitten = mongoose.model('krishnKitty', kittySchema);

const krishnKitty = new Kitten({ name: 'krishnKitty' });
// console.log(krishnKitty.name);
// krishnKitty.speak();


// this will generate new collection in the database << krishnKart >> which is have mentioned above
krishnKitty.save(function(err, krishnKitty) {
    if (err) return console.error(err);
    // krishnKitty.speak();
});

Kitten.find({ name: "krishnKitty" }, function(err, kittens) {
    if (err) return console.error(err);
    console.log(kittens);
})