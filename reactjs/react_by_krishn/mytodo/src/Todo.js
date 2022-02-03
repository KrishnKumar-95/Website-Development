import React,{useState,useEffect} from 'react';
// import {Count} from './Count'

export const Todo = () => {

    // TO STORE THE ITEMS IN LOCALSTORAGE
    let initTodo;
    if(localStorage.getItem("todos")===null){
        initTodo= {item:[]}
    }else{
        initTodo = JSON.parse(localStorage.getItem("todos"));
    }

    const [todos, setTodos] = useState(initTodo);
    const [todo, setTodo] = useState("");

    // USING THIS HOOK WE CAN STORE THE TODOS IN THE LOCALSTORAGE WHEN THERE IS ANY CHANGE IN TODOS
    useEffect(() => {
        // SAVING THE TODOS IN LOCALSTORAGE
        localStorage.setItem("todos",JSON.stringify(todos));
    }, [todos])

    function newDate(){
        document.getElementById('time').innerHTML = new Date().toLocaleTimeString();
    }

    setInterval(newDate,1000)

    const formSubmit = (event)=>{
        event.preventDefault();
        if(todo===""){
            alert("Todo can't be empty")
        }
        else {
            let _todos = todos.item;
            let temp = _todos.filter((e)=>e===todo)
            if(temp.length > 0) {
                setTodo("")
                return alert("Already Exists")
            }else {

                const time = new Date().toLocaleTimeString()
                console.log(time)
                _todos.push(todo)
                // console.log(_todos.length)
                setTodos({...todos,item:_todos});
                // SET TODO TO EMPTY VALUE
                setTodo("")
            }

        }
    }
    
    const onDelete = (index)=>{
        let _todos = todos.item;
        _todos.splice(index,1)
        setTodos({...todos,item:_todos})
        localStorage.setItem("todos",JSON.stringify(todos));
    }

    // CSS TO STYLE BOXES
    const boxStyle = {
        border: "2px solid black",
        borderRadius: "15px",
        padding: "10px 15px", 
        fontSize: "20px",
        margin: "1px 5px"
    }
    const mainBox = {
        padding: "10px 15px", 
        fontSize: "20px",
        margin: "2rem 1rem"
    }

    return (
        <div>
            <h1>My Todo List</h1>
            <h2 id='time'>Time</h2>
            <form onSubmit={formSubmit}>
              Enter Todo : <input style={boxStyle} type="text" key={todos.item.length+1} value={todo} onChange={(inputVal)=>{setTodo(inputVal.target.value)}} name="todo" placeholder='Enter the Todo' />
              <input style={boxStyle} type="submit" value="Add" />
            </form>
            {/* <div style={boxStyle}>
                <Count />
            </div> */}
            <ol>
                <span style={boxStyle}>Total Todos : {todos.item.length}</span>
                <div style={mainBox}>
                    
                    {/* HERE WE ARE PASSING TWO PARAMETERS Item and index ITEM IS THE ELEMENT OF THE ARRAY AND INDEX IS THE RELATED INDEX NUMBER OF THAT ELEMENT */}
                    {todos.item.length===0?"No Todos to display":todos.item.map((item,index)=>{
                        return (
                            <>
                                <li key={item.index} style={boxStyle}>{item}
                                <button style={boxStyle} onClick={()=>{onDelete(index)}}>Delete</button>
                                </li>
                            <hr/>
                            </>
                        ) 
                    })}
                </div>
            </ol>

        </div>
    )
}
// value={todo}