const mongoose = require("mongoose");
const uri = `mongodb://localhost:27017/krishndynamic`;
mongoose.connect(uri,{
    useUnifiedTopology: true,
    useNewUrlParser: true
}).then(()=>{
    console.log("Connection Successful....");
}).catch((err)=>{
    console.log(err);
})