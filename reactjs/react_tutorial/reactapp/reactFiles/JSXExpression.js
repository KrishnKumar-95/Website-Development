import React from "react";
import ReactDOM from "react-dom"

const myName = `Krishn Kumar : 9518297071`;

// JSX EXPRESSION USING CURLY-BRACES
// IF WE WANT TO WRITE THE JAVASCRIPT IN JSX WE HAVE TO WRITE THE EXPRESSION IN CURLY-BRACES
ReactDOM.render(
    <>
        <h1>My name is {myName}</h1>
        <p>My lucky number is {2+3}</p>
    </>,
    document.getElementById("root")
)