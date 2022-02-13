import './App.css';
import Header from './MyComponents/Header';
import {Todos} from './MyComponents/Todos';
import {Footer} from './MyComponents/Footer';
import React, { useState ,createContext} from 'react';
import { Addtodo } from './MyComponents/Addtodo';
import Reducer from './Reducer';

export const UserContext = createContext()

function App() {

  // HERE WE ARE PASSING A PARAMETER SO THAT WE CAN PASS TODO
  const onDelete = (todo)=>{
    // console.log(`This is onDelete`,todo);
    // USING THIS useState to delete the todos in our Todos List
    setTodos(todos.filter((e)=>{return e!==todo;}))
  }

  // ADD TODO FUNCTION
  const addTodo = (title,desc)=>{
    // console.log("I am adding this Todo",title,desc);

    let sno;
    if(todos.length===0){
      sno=0;
    }else{
      // SERIAL NO OF NEW TODO
      sno = todos[todos.length-1].sno + 1;
    }


    // HERE ASSIGNING THE VALUES TO THE NEW TODO
    const myTodo = {
      sno: sno,
      title: title,
      desc: desc
    }

    // HERE ADDING NEW TODOS IN THE TODO LIST
    setTodos([...todos,myTodo]);
    console.log(myTodo)
  }

  // DEFAULT VALUE OF TODOS
  const [todos, setTodos] = useState([
    { 
      sno:1,
      title:"Go to the Market",
      desc:"Go to the Market to get the Vegetables"
    },
    {
      sno:2,
      title:"Go to the Station",
      desc:"Go to the Station to get Bus"
    },
    {
      sno:3,
      title:"Go to the Shop",
      desc:"Go to the Shop to get the Grocery"
    },
    {
      sno:4,
      title:"Go to the Mall",
      desc:"Go to the Mall to get the Tshit"
    },
  ]);
  return (
    <>
      {/* <Header title="MyTodoList"/>
      <Addtodo addTodo={addTodo}/>
      <UserContext.Provider value={['aman','amit']}>
        <Todos todos={todos} onDelete={onDelete}/>
      </UserContext.Provider>
      <Footer /> */}
      <Reducer />
    </>
  );
}

export default App;

/* <div className="App">
       <header className="App-header">
         <p>
           Edit <code>src/App.js</code> and save to reload.
         </p>
         <a
           className="App-link"
           href="https://reactjs.org"
           target="_blank"
           rel="noopener noreferrer"
         >
           Learn React
         </a>
       </header>
     </div> */
