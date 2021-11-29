// Dance Website Using Node Js (NPM) Package Manager as Backend
// I made this website using :-
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  FRONT-END  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// Front-End >> PUG-Template Engine [HTML-CSS-JS]

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>  BACK-END  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// 1. Back-End >> Node.JS - Express.JS
// 2. Here I am using << MongoDB Database >> to store the Data which comes from contact page Form of this Website
// 3. We are connecting to the << MongoDB Database >> using << Mongoose.JS >> by installing Mongoose Module

// Included required Modules
const express = require('express');
const path = require('path');
// const fs = require('fs');

// AFTER INSTALLING ( bodyparser ) WE HAVE TO IMPORT THE MODULE...
const bodyparser = require('body-parser');
// Initialized the app
const app = express();

//DATABSE--MONGODB>>MONGOOSEJS
//-------------------------------------------------------------------------------------------------------------------------------------------
// here we include the module to use mongoose
const mongoose = require('mongoose');

// here we are connecting to the Database contactDance
mongoose.connect('mongodb://localhost/contactDance', { useNewUrlParser: true });

// Here we are define mongoose Schema
// const <schema-name> = new mongoose.Schema({
const contactSchema = new mongoose.Schema({
    name: String,
    age: String,
    gender: String,
    email: String,
    phone: String,
    address: String
});

// HERE WE ARE COMPILING OUR SCHEMA INTO MODEL
// Here Newly created Model use contactSchema properties ie:- name has String type DataType
// const <Model-Variable-Name> = mongoose.model('<Model-Name>', <Schema-Name>);
const Contact = mongoose.model('Contact', contactSchema);

//DATABASE DEFINITON ENDS
//-------------------------------------------------------------------------------------------------------------------------------------------
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

// HERE WE ARE MAKING POST REQUEST 
// IF WE WANT TO MAKE POST REQUEST USING EXPRESSJS (AND WANT TO SAVE DATA IN THE MONGODB DATABASE) THEN WE HAVE TO INSTALL THE NEW MODULE << body-parser >> 
app.post('/contact', (req, res) => {
    // Contact is the << Model-Variable >> and same name given to the newly created object then the model will create the new object with the extracted data from the POST-Request.
    const myData = new Contact(req.body);

    // then This data will be saved in the database >> 
    //  but this porcess is Async and returning a promise so we have to use << then >> function to handle that situation and we return CallBack Arrow Function << () => { } >> with the message either the Data has been saved or any error occured.
    myData.save().then(() => {

        // this message will be shown if data has been saved in the DataBase
        res.send("Joy....! The item has been saved to the DataBase Successfully...")

        // this message will be shown with status code 400 if any error occured
    }).catch(() => {
        res.status(400).send(" :( Item has not been saved to the DataBase...")
    })
});

app.listen(port, () => {
    console.log(`The server is running on port ${port}`);
});