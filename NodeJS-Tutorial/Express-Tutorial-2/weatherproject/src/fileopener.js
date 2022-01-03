// THIS IS TO OPEN THE LINK IN DESIRED APP
const open = require("open");
(async() => {
    await open('http://localhost:3000', { app: "chrome" });
})();