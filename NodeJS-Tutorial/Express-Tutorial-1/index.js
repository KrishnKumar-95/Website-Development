const express = require("express");
const path = require("path");
const app = express();
const port = 8000;

// Custom MiddleWare
// const krishnMiddleWare = (req, res, next) => {
//     console.log("This is request => ", req);
//     console.log("This is response => ", res);
//     console.log("This is next => ", next);
//     next() // This next function is used to call the next MiddleWare Function in the Stack
// }

// Serving static files > This is MiddleWare which holds both server request and response
app.use(express.static(path.join(__dirname, "public")));

// calling Custom MiddleWare
// app.use(krishnMiddleWare)

// SERVING MESSAGES
app.get("/home/:name", (req, res) => {
    res.send("Hello " + req.params.name + "! This is Home Page of the website");
}); //  (( /home/:name ))  => name given here will replace the << req.params.name >>
app.get("/about", (req, res) => {
    res.send("This is About Page of the Website");
});

// SERVING AN JSON FILE
app.get("/json", (req, res) => {
    res.json({ "krishn": 25 });
});

// SERVING AN HTML FILE USING NODEJS
app.get("/html", (req, res) => {
    res.sendFile(path.join(__dirname, "index.html"));
});

app.listen(port, () => {
    console.log(`Server is listning at http://localhost:${port}`);
});