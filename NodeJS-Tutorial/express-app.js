const express = require("express");
const res = require("express/lib/response");
const app = express();
const port = 3000;


app.get("/", (req, res) => {
    res.send('Hello World')
})
app.get("/about", (req, res) => {
    res.send("This is About Page");
})
app.get("/service", (req, res) => {
    res.send("This is Services Page");
})


app.listen(port, () => {
    console.log(`Server is listning at ${port}`);
});