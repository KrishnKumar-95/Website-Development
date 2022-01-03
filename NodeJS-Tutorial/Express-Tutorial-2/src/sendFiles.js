const { json } = require("body-parser");
const express = require("express")
const app = express();
const port = 3000;

// SEND SINGLE LINE MSG OR HTML INTO THE DOM
app.get("/", (req, res) => {
    res.send("<h1>(( res.send )) is to display one or two line HTML or msg</h1>");
});

// SEND MULTIPLE LINE HTML AND MSG WE USE <res.write> BUT ATLAST WE HAVE TO PUT <res.send()> OTHERWISE THIS CONTINUES TO SEARCH FOR MORE DATA
app.get("/mult", (req, res) => {
    res.write("<h1>This used to write Multiple line MSG or HTML</h1>");
    res.write("<h1>This msg using  (res.write) 1</h1>");
    res.write("<h1>This msg using  (res.write) 2</h1>");
    res.write("<h1>This msg using  (res.write) 3</h1>");
    // CLOSING THE CONNECTION AND STOPPING THE CODE TO SEARCH FOR DATA
    res.send();
});

// SEND JSON DATA
app.get("/json", (req, res) => {
    // WE CAN USE ONE OF THE BOTH
    // 1. if we want to send JSON data then we have to use <res.json> because it converts non-objects in to json

    // 2. but using <res.send> we have to write JS Object which will be converted to JSON

    // res.send([{ id: 1, name: "Krishn Kumar" }, { id: 2, phone: "9518297071" }, { id: 3, education: "BCA" }]);

    res.json([{ id: 1, name: "Krishn Kumar" }, { id: 2, phone: "9518297071" }, { id: 3, education: "BCA" }]);
})

app.listen(port, () => {
    console.log(`Server is listening at ${port}`);
});