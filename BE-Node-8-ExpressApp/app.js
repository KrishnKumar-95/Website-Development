// included the express module for further use
const express = require('express');

// initialize the app using express function
const app = express();

// defined the port for further use..
const port = 3000;

// get request takes callback function which takes two parameters (req, res)
app.get('/', (req, res) => {
    // we can send the status code using this mathod
    res.status(200).send('This is homepage of my first app in Express by krishn.');
});

app.get('/about', (req, res) => {
    res.send('This is about page of my first app in Express by krishn.');
});

app.get('/services', (req, res) => {
    res.send('This is services page of my first app in Express by krishn.');
});

app.get('/contact', (req, res) => {
    res.send('This is contacts page of my first app in Express by krishn.');
});

// post request
app.post('/contact', (req, res) => {
    res.send('This is contacts page of my first app in Express by krishn.');
});

// post request with status code-400
app.post('/this', (req, res) => {
    res.status(400).send('This page is not found / Bad request');
});
// get request with status code-404
app.get('/thiss', (req, res) => {
    res.status(404).send('This page is not found in app');
});

// using this we listen the app.js code
app.listen(port, () => {
    console.log(`The application is started successfully on port ${port}`);
});