// In this tutorial we will learn to use Template Engine PUG.

// included the express module for further use
const express = require('express');
const path = require('path');
const fs = require('fs');

// initialize the app using express function
const app = express();

// defined the port for further use.
const port = 3000;

// EXPRESS SPECIFIC STUFF
app.use('/static', express.static('static')); // for serving static files
app.use(express.static('static')); // we can also use this with path localhost/style.css or index.js
app.use(express.urlencoded());

// PUG SPECIFIC STUFF
app.set('view engine', 'pug'); // set template engine as pug
app.set('views', path.join(__dirname, 'views')); // set the views directory

// ENDPOINTS
app.get('/', (req, res) => {
    const con = "This is the best content on the internet so / far";
    const params = { 'title': 'PubG is the best game', "content": con };
    res.status(200).render('index.pug', params);
})

app.post('/', (req, res) => {
    name = req.body.name
    age = req.body.age
    gender = req.body.gender
    address = req.body.address
    more = req.body.more

    let outputToWrite = `The name of the client is ${name}. He/She is ${age} years old ${gender} residing at ${address} more about him/her - ${more}.`;
    fs.writeFileSync("output.txt", outputToWrite)
    const params = { 'message': 'Your form has been submitted successfully' };
    res.status(200).render('index.pug', params)
})


// START THE SERVER
// using this we listen the app.js code
app.listen(port, () => {
    console.log(`The application is started successfully on port ${port}`);
});

// COMMENTED ENDPOINTS
// app.get('/demo', (req, res) => {
//     res.status(200).render('demo', { title: 'Hey krishn', message: 'Hello there! and thanks to teach me how to use Template Engine.' });
// });

// // get request takes callback function which takes two parameters (req, res)
// app.get('/', (req, res) => {
//     // we can send the status code using this mathod
//     res.status(200).send('This is homepage of my first app in Express by krishn.');
// });

// app.get('/about', (req, res) => {
//     res.send('This is about page of my first app in Express by krishn.');
// });

// app.get('/services', (req, res) => {
//     res.send('This is services page of my first app in Express by krishn.');
// });

// app.get('/contact', (req, res) => {
//     res.send('This is contacts page of my first app in Express by krishn.');
// });

// // post request
// app.post('/contact', (req, res) => {
//     res.send('This is contacts page of my first app in Express by krishn.');
// });

// // post request with status code-400
// app.post('/this', (req, res) => {
//     res.status(400).send('This page is not found / Bad request');
// });
// // get request with status code-404
// app.get('/thiss', (req, res) => {
//     res.status(404).send('This page is not found in app');
// });