const express = require("express");
const path = require("path");
const exphbs = require("express-handlebars");

// Setting Port
const port = 8000;

// Initializing ExpressApp
const app = express();

// Setting Template Engine HandleBars
app.engine('handlebars', exphbs.engine());
app.set('view engine', 'handlebars');

// Serving static files
app.use(express.static(path.join(__dirname, "static")));

// GET request from another page Imported Here
app.use("/", require(path.join(__dirname, "routes/blog.js")));

// Listning our App on Port 8000
app.listen(port, () => {
    console.log(`Server is listning at http://localhost:${port}`);
});