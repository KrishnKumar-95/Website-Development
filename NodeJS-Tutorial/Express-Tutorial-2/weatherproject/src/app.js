const express = require("express");
const path = require("path");
const hbs = require("hbs");
const app = express();

// WE ONLY USE AT THE TIME OF HOSTING ONLINE
const port = process.env.PORT || 8000;

const TemplateEnginePath = path.join(__dirname, "../templates/views");
app.set("views", TemplateEnginePath);
app.set("view engine", "hbs");


// FOR STATIC SITE
// const staticpath = path.join(__dirname, "../public");
// app.use(express.static(staticpath));

const PartialsPath = path.join(__dirname, "../templates/partials");
hbs.registerPartials(PartialsPath);

app.get("/", (req, res) => {
    // res.send("This is our HomePage");
    res.render("index");
});

app.get("/about", (req, res) => {
    // res.send("This is our About page");
    res.render("about");
});

app.get("/weather", (req, res) => {
    // res.send("This is Weather Page");
    res.render("weather");
});

app.get("/image", (req, res) => {
    res.render("image");
})

app.get("*", (req, res) => {
    // res.send("Page not Found Error 404");
    res.render("404");
});

app.listen(port, () => {
    console.log(`http://localhost:${port}`);
});
