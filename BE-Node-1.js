// console.log('Hello World, Welcome to the BackEnd-NodeJS-Tutorial');

const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
    res.statusCode = 200;

    // text/plain is for writing just plain text
    // res.setHeader('Content-Type', 'text/plain');

    // text/html is for writing html code
    res.setHeader('Content-Type', 'text/html');

    // res.end('Hello World this is krishan kumar...!');
    res.end(`<!DOCTYPE html>
    <html lang="en">
    
    <head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>CSS Grid Autofit MinMax</title>
    </head>
    <style>
        .container {
            display: grid;
            grid-gap: 1rem;
            /* grid-template-columns: 112px 112px 112px; */
            grid-template-columns: repeat(2, 1fr);
            justify-content: center;
            /* grid-template-columns: repeat(auto-fit, minmax(400px, 1fr)); */
            width: 500px;
        }
        
        .box {
            border: 2px solid black;
            background-color: rgb(242, 172, 68);
            /* padding: 34px; */
        }
    </style>
    
    <body>
        <div class="container">
            <div class="box"><input type="button" value="+91-9518297071" onclick="Whatsapp1()"></div>
            <div class="box"><input type="button" value="+91-8708759060" onclick="Whatsapp2()"></div>
            <div class="box">item-3</div>
            <div class="box">item-4</div>
            <div class="box">item-5</div>
            <div class="box">item-6</div>
            <div class="box">item-7</div>
            <div class="box">item-8</div>
            <div class="box">item-9</div>
            <div class="box">item-10</div>
            <div class="box">item-11</div>
            <div class="box">item-12</div>
    
            <input type="button" value="whatsapp" onclick="Whatsapp();">
    
            <input type="button" value="+91-8708759060" onclick="Whatsapp2()">
        </div>
    </body>
    
    </html>`);
});

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
});