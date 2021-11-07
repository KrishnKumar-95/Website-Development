// Dance Website Using Node Js (NPM) Package Manager as Backend

// Included required Modules
const express = require('express');
const path = require('path');
// const fs = require('fs');

// Initialized the app
const app = express();

// Defined the port
const port = 3000;

// EXPRESS SPECIFIC STUFF
app.use('/static', express.static('static')); // serving static files
app.use(express.urlencoded()) // To send the data from form to backend file.

// PUG SPECIFIC STUFF
app.set('view engine', 'pug'); // set the template engine as pug
// below is the directory defination from which we want to read our template files.
app.set('views', path.join(__dirname, 'views')); // set the template directory

// ENDPOINTS GET/POST ETC
app.get('/', (req, res) => {
    const param = {};
    res.status(200).render('home.pug', param);

    // const con = 'This is the content of my website which is the best content on the internet';
    // const param = { 'title': 'Krishna Dance Academy', 'content': con };
});

app.get('/contact', (req, res) => {
    const param = {};
    res.status(200).render('contact.pug', param);
});

app.listen(port, () => {
    console.log(`The server is running on port ${port}`);
});