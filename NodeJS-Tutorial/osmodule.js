const { type } = require("express/lib/response");
const os = require("os");
const { uptime } = require("process");

console.log("Free-Memory    :- ", os.freemem());
console.log("Home-Directory :- ", os.homedir());
console.log("Host-Name      :- ", os.hostname());
console.log("Platform       :- ", os.platform());
console.log("Release        :- ", os.release());
console.log("Total Memory   :- ", os.totalmem());
console.log("Temp-Directory :- ", os.tmpdir());
console.log("Type           :- ", os.type());
console.log("UpTime         :- ", os.uptime());
console.log("EOL            :- ", JSON.stringify(os.EOL));
console.log("Architecture   :- ", os.arch());