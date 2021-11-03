// We include the modules in the file
const http = require('http')
const fs = require('fs')

// Reading the contents of HTML file using << readFileSync >> function of fs module
const filecontent = fs.readFileSync('Admission.html')

// Creating Server using << createServer >> function of http Module

// it takes << req, res >> (request, response)
const server = http.createServer((req, res) => {
    res.writeHead(200, { 'Content-type': 'text/html' });
    res.end(filecontent)
})

server.listen(8080, 'localhost', () => {
    console.log('Listning on the port 80...')
})