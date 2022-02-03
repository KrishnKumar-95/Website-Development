import Card from "../UI/Card";
import ExpenseDate from "./ExpenseDate";
import './ExpenseItem.css'
import { useState } from "react";

const ExpenseItem = (props)=>{

    /* 
     << useState >> IS A DEFAULT STATE WHICH STORE THE DEFAULT VALUE
     << title >> IS THE VARIABLE WHICH STORES THE VALUE OF THE VARIABLE
     << setTitle >> IS THE FUNCTION WHICH TAKES THE NEW VALUE AS AN ARGUMENT
     THEN RESET THE << title >> VARIABLE VALUE WITH THE NEW ONE AND REEXECUTE THE CODE
    */

    const [title, setTitle] = useState(props.title);

    const changeTitle = ()=>{
        setTitle(props.title);
        console.log(title)
    }

    return (
        // we are passing classname into Card
    <Card className="expense-item">
        <ExpenseDate date={props.date}/>
        <div className="expense-item__description">
            <h2>{title}</h2> 
            <div className="expense-item__price">₹{props.amount}</div>
        </div>
        <button onClick={changeTitle}>Click me</button>
    </Card>
    );
}

export default ExpenseItem;