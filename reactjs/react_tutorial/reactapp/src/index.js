import React from "react";
import ReactDOM from "react-dom";
// import Comp1 from "./Comp1";
import App from "./App"
// const fname = "krishn";
// const lname = "kumar";


// TEMPLATE LITERALS IN REACTJS
// JSX EXPRESSION => WE CAN ADD THE SPACE IN THE FNAME AND LNAME USING THE DOUBLE QOUTES
// TEMPLATE LITERAL => JUST ADD SPACE
ReactDOM.render(
    <>
        <App />
        {/* USING JSX EXPRESSION */}
        {/* <h1>My name is {fname+ " " +lname}</h1> */}
        {/* USING TEMPLATE LITERALS */}
        {/* <h1>My name is {`${fname} ${lname}`}</h1> */}
        {/* <Comp1 /> */}
    </>,
    document.getElementById("root"));