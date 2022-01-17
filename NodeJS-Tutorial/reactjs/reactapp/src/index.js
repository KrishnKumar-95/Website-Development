import React from "react";
import ReactDOM from "react-dom";

const fname = "krishn";
const lname = "kumar";


// TEMPLATE LITERALS IN REACTJS
// JSX EXPRESSION => WE CAN ADD THE SPACE IN THE FNAME AND LNAME USING THE DOUBLE QOUTES
// TEMPLATE LITERAL => JUST ADD SPACE
ReactDOM.render(
    <>
        {/* USING JSX EXPRESSION */}
        <h1>My name is {fname+ " " +lname}</h1>
        {/* USING TEMPLATE LITERALS */}
        <h1>My name is {`${fname} ${lname}`}</h1>
    </>,
    document.getElementById("root"));