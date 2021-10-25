const express = require('express')
const formidable = require('formidable')

const app = express()

app.get('/', (req, res) => {
    res.sendFile(__dirname + '/index.html')
})

app.post('/', (req, res) => {
    var form = new formidable.IncomingForm()

    form.parse(req)

    form.on('fileBegin', function(name, file) {
        file.path = __dirname + '/uploads/' + file.name

    })

    form.on('file', function(name, file) {
        console.log('Uploaded file' + file.name)

    })

    res.send("Files Uploaded Succesfully :)")
})

app.listen(5000, () => {
    console.log("My App is running....")
})