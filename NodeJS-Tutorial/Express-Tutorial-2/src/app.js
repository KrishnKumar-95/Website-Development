const express = require("express");
const path = require('path')
const hbs = require("hbs")
const app = express();
const port = 8000;

// THE STATIC FILE PATH IN THIS VARIABLE
const staticpath = path.join(__dirname, '../public');

// SERVING FILES USING MIDDLEWARE <express.static>
// app.use(express.static(staticpath));

// IF WE WANT TO SERVE STATIC WEBSITE THEN JUST GIVE THE PATH OF THE FOLDER IN EXPRESS STATIC MIDDLEWARE AS ABOVE MAKE SURE DYNAMIC DATA IS NOT COMING IN THE WEBSITE

//THIS GIVES PRESENT DIRECTORY IN WHICH THIS FILE IS
// console.log("Directory :- ", __dirname);

// THIS GIVES THE FILE NAME
// console.log("File :- ", __filename);

// IF WE WANT TO MOVE TO ANY PATH THEN WE USE PATH MODULE
// console.log(path.join(__dirname, '../public'));

// SETTING UP TEMPLATE ENGINE PATH
const TemplateEnginePath = path.join(__dirname, "../templates/views");
// HERE IT WILL GIVE THE PATH TO VIEWS FOLDER
// WE CAN ALSO CHANGE VIEWS FOLDER NAME AND SET-UP DIFFERENT PATH
app.set("views", TemplateEnginePath);

// SETTING UP TEMPLATE ENGINE :- HANDLEBARS
app.set("view engine", "hbs");

// SETTING UP PARTIALS PATH / ESSENTIAL COMPONENTS PATH
const partialspath = path.join(__dirname, "../templates/partials");
hbs.registerPartials(partialspath);

// SERVING THE FILE USING TEMPLATE ENGINE
// USING TOP TO BOTTOM APPROACH THIS IS EXECUTING AND IMMEDIATELY CONNECTION IS CLOSED.
app.get("/:name/:ph", (req, res) => {
    res.render('index', {
        name: req.params.name, // DYNAMIC DATA
        phone: req.params.ph
    });
});

app.get("/", (req, res) => {
    res.send("Hello World from Krishn Kumar..! and my phone number is 9518297071");
});

app.get("/about", (req, res) => {
    res.render("about", {
        aboutmsg: "Hey Dear my name is Krishn Kumar i am graduated in Bachelor of Computer Applications and i am a website developer.",
        name: req.query.name,
        age: req.query.age
    });
});

// THIS IS FOR ALL REFERENCES WHICH WILL BE SEARCHED INTO THE ABOUT
app.get("/about/*", (req, res) => {
    res.render("404", {
        errormsg: "This about page is not found 404"
    });
});

// USING THIS WE CAN GIVE THE << 404 >> NOT FOUND PAGE
// AS NODEJS FOLLOWS TOP TO BOTTOM APPROACH IF THE PATH GIVEN BY USER DOES NOT MATCH THEN THIS PAGE WILL CHECK FOR ALL THE PATHS EITHER THEY ARE MATCHING WITH IT OR NOT WITH (( * )) IF ANY PATH NOT FOUND THEN THIS PAGE WILL BE SHOWN TO THE USER
app.get("*", (req, res) => {
    res.render("404", {
        errormsg: "This page not found 404"
    });
});

app.listen(port, () => {
    console.log(`Server is listning at http://localhost:${port}`);
});

// WE USE TEMPLATE ENGINE :- IN CASE WE WANT DYNAMIC DATA IN A PARTICULAR PAGE THEN WE SHOULD USE TEMPLATE ENGINE THEN WE CAN RECIEVE DYNAMIC DATA IN THE PAGE