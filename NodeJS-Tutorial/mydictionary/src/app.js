// Modules
const express = require("express");
const hbs = require("hbs");
const path = require("path");

// Initialize express app
const app = express();

// port
const port = process.env.PORT || 3000;

// Database Connection
require("./db/connection");

// Static Files
const staticPath = path.join(__dirname,"../public");
app.use(express.static(staticPath));

// Set Template Engine
const TemplateEnginePath = path.join(__dirname,"../template/views");
app.set("views",TemplateEnginePath);
app.set("view engine","hbs");

// Partials
const PartialsPath = path.join(__dirname,"../template/partials");
hbs.registerPartials(PartialsPath);

// Router
const RoutesPath = path.join(__dirname,"./routes/routes");
app.use("/",require(RoutesPath));

app.listen(port,()=>{
    console.log(`Server is started at http://localhost:${port}`);
});