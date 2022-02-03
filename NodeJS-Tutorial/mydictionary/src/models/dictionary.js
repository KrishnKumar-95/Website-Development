const mongoose = require("mongoose");

const LearnerSchema = new mongoose.Schema({
    name:{
        type: String,
        required: true,
        minlength: 3
    },
    age:{
        type: Number,
        required: true,
        min: 5,
        max: 125
    },
    phone:{
        type: Number,
        required: true,
        min: 1000000000,
        max: 99999999999
    },
    email:{
        type: String,
        required: true,
        unique:[true,"Email-ID already Exists"],
        validate(value){
            if(!validator.isEmail(value)){
                throw new Error("Not a Valid Email-ID")
            }
        }
    }
});

const Learner = new mongoose.model("Learner",LearnerSchema);

module.exports = Learner;