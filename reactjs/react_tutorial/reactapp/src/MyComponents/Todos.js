import React from 'react'
import { Todo } from './Todo'

export const Todos = (props) => {
    return (
        <div className='container'>
            <h3 className='my-3'>Todos List</h3>

            {/* HERE WE USE MAP FUNCTION WITH PROPS.TODOS SO THAT WE CAN ACCESS ALL THE TODOS WHICH WERE PASSED FROM PARENT COMPONENT */}

            {props.todos.length=== 0 ? "No Todos to Display" : props.todos.map((todo)=>{return <Todo todo={todo} key={todo.sno} onDelete={props.onDelete}/>})}
            
        </div>
    )
}
