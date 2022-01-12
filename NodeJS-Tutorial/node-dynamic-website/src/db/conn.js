const mongoose = require("mongoose");

// CONNECTING TO MONGODB AND CREATING DATABASE
mongoose.connect("mongodb://localhost:27017/krishndynamic", {
    // useCreateIndex: true,
    useNewUrlParser: true,
    useUnifiedTopology: true
}).then(() => {

    // THIS MSG WILL BE SHOWN IF THE PROMISE WILL BE ACCOMPLISH AND CONNECTION IS BUILD
    console.log("connection successful.");
}).catch((Error) => {

    // IN CASE PROMISE IS REJECTED THEN THIS MSG WILL BE PRINTED
    console.log(Error);
});