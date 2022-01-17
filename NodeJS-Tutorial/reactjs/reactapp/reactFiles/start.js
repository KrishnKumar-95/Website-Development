import React from "react"
import ReactDOM from "react-dom"

// ReactDOM.render( < What to show > , < Where to show >)
// <h1> React Tutorial </h1>  => JSX Expresstion in ReactJS
ReactDOM.render( <h1> React Tutorial </h1>, document.getElementById('root'))

// TO RENDER MULTIPLE ELEMENTS IN REACT => WRAP INTO ONE HTML div TAG
ReactDOM.render( 
  <div>
    <h1> React Tutorial 1</h1>
    <p>This is ReactJS Tutorial </p>
  </div>, 
  document.getElementById('root'));

// ANOTHER WAY TO SHOW MULTIPLE ELEMENTS IN THE HTML DOM
// USING ARRAY OF ELEMENTS
ReactDOM.render(
  [
  <h1>React Tutorial 2</h1>,
  <p>These elements in the square enclosed braketts</p>,
  <p>This is react tutorial and today is 16.01.2022</p>
],document.getElementById("root"));

// ANOTHER WAY TO SHOW THE MULTIPLE ELEMENTS IN THE HTML DOM
// USING THIS WE DONT HAVE TO USE THE div TAG / ARRAY OF ELEMENTS
ReactDOM.render(
  <React.Fragment>
    <h1>React Tutorial 3</h1>
    <p>This para is written using React Fragment</p>
  </React.Fragment>,
document.getElementById("root"));

// NOW WE DONT NEED TO WRITE THE REACT.FRAGMENT
ReactDOM.render(
  <>
  <h1>React Tutorial 4</h1>
  <p>This para is written in the ReactJS</p>
  </>,document.getElementById("root"));

// // BELOW IS THE CONVERTED FORM OF THE REACT CODE BY BABEL
// ReactDOM.render( React.createElement("h1",null,"IndianDexter from babel"),document.getElementById("root"));

// // USING JAVASCRIPT
// var h1 = document.createElement("h1");
// h1.innerHTML = "IndianDexter from Pure JavaScript"
// document.getElementById("root").appendChild(h1);