// IMPORTING REQUIRED MODULES
const express = require("express");
const path = require("path");
const hbs = require("hbs");

// IMPORTING DATABASE
require("./db/conn");
const User = require("./models/usermessage");

const app = express();
const port = process.env.PORT || 3000;

// SETTIG PATH FOR NPM PACKAGES BOOTSTRAP/JAVASCRIPT/JQUERY
app.use("/css", express.static(path.join(__dirname, "../node_modules/bootstrap/dist/css")));
app.use("/js", express.static(path.join(__dirname, "../node_modules/bootstrap/dist/js")));
app.use("/jq", express.static(path.join(__dirname, "../node_modules/jquery/dist")));

// WE MAKE THIS FALSE BECAUSE WE WANT TO GET THE DATA AND SHOW THE DATA ON THE SCREEN
app.use(express.urlencoded({ extended: false }))

// SERVING STATIC FILES JS/CSS/IMAGES
const staticpath = path.join(__dirname, "../public");
app.use(express.static(staticpath));

// SETTING UP TEMPLATE ENGINE
const TemplateEnginePath = path.join(__dirname, "../templates/views");
app.set("views", TemplateEnginePath);
app.set("view engine", "hbs");

// REGISTERING PARTIALS IE:- WEBSITE COMPONENTS
const PartialsPath = path.join(__dirname, "../templates/partials");
hbs.registerPartials(PartialsPath);

// ENDPOINTS
app.get("/", (req, res) => {
    res.send("<a href='https://redsack.red'><strong>REDSACK</strong></a> is my Online Shopping website");
});

app.get("/home", (req, res) => {
    res.render("index");
});

// POST MATHOD
app.post("/contact", async(req, res) => {
    try {
        // res.send(req.body);
        // req.body -> IS THE DATA WHICH IS FILLED IN THE CONTACT FORM THIS IS GOING TO BE STORED IN THE DATABASE
        // USER >> IS THE MODEL IN WHICH THE DATA WILL BE COMPILED AND STORED INTO THE VARIABLE
        const userData = new User(req.body);
        // HERE WE ARE SAVING THE DATA USING save() FUNCTION
        await userData.save();
        // THIS PAGE WILL BE SHOWN TO THE USER AFTER THE DATA WILL BE STORED INTO THE DATABASE WITH THE STATUS CODE 201 (CREATED)
        res.status(201).render("index");
    }
    // IF ERROR HAPPNED THEN ERROR WILL BE CATCHED BY CATCH MATHOD 
    catch (error) {
        res.status(500).send(error);
    }
})

// LISTENING SERVER AT GIVEN PORT
app.listen(port, () => {
    console.log(`Server is listening at http://localhost:${port}`);
});