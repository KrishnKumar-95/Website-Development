const http = require('http');

const port = 8000;

const server = http.createServer((req, res) => {
    console.log(req.url);
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/html');
    res.end('<h1>Node.Js Tutorial</h1><p>This is Node.Js Tutorial in One Video.</p>');
});

server.listen(port, () => {
    console.log(`Server is listning on the ${port}`);
})

// const http = require("http");

// // the port which is taken by process
// const port = process.env.PORT || 3000;

// const server = http.createServer((req, res) => {
//     res.statusCode = 200;
//     // we can set the Content Type in setHeader
//     res.setHeader("Content-Type", "text/html");

//     res.end(
//         "<h1>This is NodeJS Tutorial</h1><p>This is Node.JS Tutorial in one video.</p>"
//     );
// });

// server.listen(port, () => {
//     console.log(`Server is listning on port ${port}`);
// });