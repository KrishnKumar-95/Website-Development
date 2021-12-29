import url from "url";

const myURL = new URL('https://indiandexter.com:8000');
myURL.pathname = "/krishn/path";
myURL.search = "?d=e";
myURL.hash = "#fgh";
myURL.host = "8000";
console.log(myURL);
console.log(myURL.searchParams);

// difference between host and hostname
// host >> address+port
// hostname >> address