import React,{useState,useEffect} from 'react'

const TODO = () => {

    // const todos = []

    const [todos,setTodos] = useState({items : []})
    const [todo,setTodo] = useState('')

    useEffect(() => {
        console.log("Effect Called");
        apiCall()
    },[todo])


    const apiCall = async () => {

    }

    const frmSubmit = (e) => {
        e.preventDefault()
        var _todos = todos.items
        _todos.push(todo)
        setTodos({...todos,items:_todos})
        console.log(_todos);
    }

    const onDelete = (index) => {
        // console.log("Delete");
        var _todos = todos.items
        const newArr = _todos.splice(index,1)
        // console.log(_todos);
        setTodos({...todos,items:_todos})
    }

    return (
        <div>
            <h1>TODO LIST</h1>
            
            <form action="" onSubmit={frmSubmit}>
               Enter todo : <input type="text" name="todo" id="" value={todo} onChange={(e) => setTodo(e.target.value)} />
                <input type="submit" value="Add" />
            </form>
            <ol>

            {todos.items.map((item,index) => {
            return (
                <div key={index}>
                 <li>{item}</li>
                 <button onClick={() => onDelete(index)}>Delete</button>
                </div>
            )})}
            </ol>
        </div>
    )
}

export default TODO
