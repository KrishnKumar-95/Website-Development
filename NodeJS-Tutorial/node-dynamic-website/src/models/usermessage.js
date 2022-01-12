const mongoose = require("mongoose");
// TO CHECK THE STRINGS LIKE :- EMAIL ETC
const validator = require("validator");

// SCHEMA :- SCHEMA HAS THE PROPERTIES OF THE INCOMIG DATA WHICH IS GOING TO BE STORED IN THE DATABASE.
const userSchema = mongoose.Schema({
    // WE MAKE SCHEMA IN FORM OF JAVASCRIPT OBJECT
    name: {
        type: String,
        required: true,
        minLength: 3
    },
    email: {
        type: String,
        required: true,
        validate(value) {
            // IF THE ENTERED STRING IS NOT A EMAIL THEN IT WILL SHOW BELOW ERROR
            if (!validator.isEmail(value)) {
                throw new Error("Invalid Email id")
            }
        }
    },
    phone: {
        // COMPULSARY DATA IS REQUIRED TRUE WITH MINIMUM LENGTH DATA WILL BE ACCEPTED IF THE DATA IS NOT OF THE MINIMUM LENGTH 
        type: Number,
        required: true,
        min: 10
    },
    message: {
        type: String,
        required: true,
        minLength: 5
    }
})

// COLLECTION
// MODEL :- PER DOCUMENT IS SAVED USING THIS MODEL AND THE MODEL HAS PROPERTIES OF THE SCHEMA ABOVE
const User = mongoose.model("User", userSchema);

// SINGLE DOCUMENT :- THIS TYPE THE DATA WILL BE STORED INTO THE DATABASE
// {"_id":{"$oid":"61d6982cde283cadc6641f05"},
// "name":"USER","email":"krishn180895@gmail.com",
// "phone":9518297071,
// "message":"hey there i am krishan kumar testing the database connected to my website is it working properly or not","__v":0}

module.exports = User;