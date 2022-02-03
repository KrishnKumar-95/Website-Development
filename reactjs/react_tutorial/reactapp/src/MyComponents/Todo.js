import React from 'react'

export const Todo = ({todo, onDelete}) => {
    let todoStyle = {
        border: "2px solid black",
        padding: "12px",
        margin: "8px 0px",
        borderRadius: "15px"
    }
    return (
        <div style={todoStyle}>
            <h4>{todo.title}</h4>
            <p>{todo.desc}</p>
            {/* MAKE ARROW FUNCTION IN ONCLICK OTHERWISE IT WILL AUTOMATICALLY RUN */}
            <button className="btn btn-sm btn-danger" onClick={()=>onDelete(todo)}>Delete</button>
        </div>
    )
}