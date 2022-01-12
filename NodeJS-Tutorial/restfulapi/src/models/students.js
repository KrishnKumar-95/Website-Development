const mongoose = require("mongoose");
const validator = require("validator");

const studentScema = new mongoose.Schema({
    name: {
        type: String,
        required: true,
        minlength: 3
    },
    email: {
        // THIS CHECKS THE TYPE OF THE VALUE ENTERED IN EMAIL
        type: String,

        // THIS TELLS US THIS FIELD IS REQUIRED
        required: true,

        // THIS CHECKS WHETHER THE EMAIL ID IS UNIQUE FOR EVERYONE OR NOT
        unique: [true, "Email Id already exists"],

        // THIS CHECKS WHETHER THE EMAIL ID IS APPROPRIATE OR NOT
        validate(value) {
            if (!validator.isEmail(value)) {
                throw new Error("Invalid Email ID");
            }
        }
    },
    phone: {
        type: Number,
        required: true,
        // MINIMUM LENGTH OF PHONE NUMBER
        min: 1000000000,
        // MAXIMUM LENGTH OF PHONE NUMBER WHICH IS GOING TO BE ENTRED
        max: 99999999999,
        // PHONE NUMBER MUST BE UNIQUE
        unique: [true, "Phone no already exists"]
    },
    address: {
        type: String,
        required: true
    }
});

const Student = new mongoose.model("Student", studentScema);

module.exports = Student;