const mongoose = require("mongoose");

// LINK OF THE DATABASE MongoDB
const uri = "mongodb://localhost:27017/krishndynamic";

//  [[ PROMISE ]]
// .connect -> is returning PROMISE which we have to handle using << .then & .catch >>
// .then > IF PROMISE ACCOMPLISH THEN THE WHAT HAVE TO BE DONE
// .catch > IF ANY ERROR HAPPEN THEN THE CATCH FUNCTION CATCHES THE ERROR

mongoose.connect(uri, {

    useNewUrlParser: true,
    useUnifiedTopology: true

}).then(() => {
    console.log("Promise Accomplish :- Connection is Successful.");
}).catch((err) => {
    console.log("Promise Aborted :-", err);
})