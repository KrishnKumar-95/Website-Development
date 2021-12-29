const { fstat } = require("fs");
const http = require("http");
const fs = require("fs");

const port = 3000;

const server = http.createServer((req, res) => {
    console.log(req.url);
    res.statusCode = 200;
    res.setHeader("Content-Type", "text/html");

    if (req.url == "/service") {
        res.statusCode = 200;
        res.end(
            "<h1>NodeJS Tutorial</h1><p>This is the NodeJS Tutorial in one Video by Krishn-Kumar. PH-NO => 9518297071</p>"
        );

    } else if (req.url == "/about") {
        res.statusCode = 200;
        res.end("<h1>This is About Page</h1>");

    } else if (req.url == "/contact") {
        res.statusCode = 200;
        res.end(
            "<h1>Contact Page</h1><span>Click Below</span>Ping Me at :- <a href='https://wa.me/919518297071'>Whatsapp</a>"

        );
    } else if (req.url == "/") {

        res.statusCode = 200;

        const page = fs.readFileSync('index.html');
        res.end(page.toString());

    } else {
        res.statusCode = 404;
        res.end("<h1>Not Found</h1>");
    }
});

server.listen(port, () => {
    console.log(`Server is listening on ${port}`);
});