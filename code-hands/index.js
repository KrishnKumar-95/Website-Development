// IMPORTING REQUIRED MODULES
const express = require("express");
const path = require("path");
const exphbs = require("express-handlebars");

// SETTING UP PORT
const port = 8000;

// INITIALIZING EXPRESS APP
const app = express();

// SETING UP TEMPLATE-ENGINE HANDLEBARS
app.engine("handlebars", exphbs.engine());
app.set("view engine", "handlebars");

// IMPORTING ALL ROUTES FROM << routes.js >>
app.use("/", require(path.join(__dirname, "routes/routes.js")));

// LISTINING PORT ON DESIRED PORT
app.listen(port, () => {
    console.log(`SERVER IS LISTNING AT http://localhost:${port}`);
})