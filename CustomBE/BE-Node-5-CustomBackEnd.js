// first We include the modules
const http = require('http');
const fs = require('fs');

// Then We define the HostName and port using const because we dont want to change
const hostname = '127.0.0.1';
const port = 3000;

// Then we make the variables naming the web pages.
// We first include the << fs >> module then read the file using << readFileSync >> function and then define the file name.
const home = fs.readFileSync('./index.html');
const about = fs.readFileSync('./about.html');
const services = fs.readFileSync('./services.html');
const contact = fs.readFileSync('./contact.html');

// Then we create server and made the variable constant
// We make server using << http >> module and << createServer >> function
// This takes the parameters << req res >> 
const server = http.createServer((req, res) => {
    console.log(req.url);
    url = req.url;

    // This status code means that request has been recieved succesfully
    // And page will be loaded and will be shown to the user/ client
    res.statusCode = 200;
    res.setHeader('Content-type', 'text/html');

    if (url == '/') {
        res.end(home);
    } else if (url == '/about') {
        res.end(about);
    } else if (url == '/contact') {
        res.end(contact);
    } else if (url == '/services') {
        res.end(services);
    } else {
        res.statusCode = 404;
        res.end("<h1>404 NOT FOUND</h1>");
    }
});

server.listen(port, hostname, () => {
    console.log(`Server is running at http://${hostname}:${port}/`);
});