import React,{useState} from "react";
import './ExpenseForm.css'

const ExpenseForm = ()=>{

    // These are the useStates which is going to change the userValues
    const [enteredTitle,setenteredTitle] = useState("");
    const [enteredAmount,setenteredAmount] = useState("");
    const [enteredDate,setenteredDate] = useState("");

    // Instead of using three states we just use One State
    // In this now we cannot update one value we have to update all three
    /*const [userInput,setUserInput] = useState({
        enteredTitle: '',
        enteredAmount: '',
        enteredDate: ''
    });*/

    // here we cannot update just one value but we have to update all the values
    // so we have to use the << spread >> operator
    // spread operator is used to merge the objects here the other values will also be included and required value will be updated
    const titleChangeHandler = event => {
        // setUserInput({...userInput, enteredTitle:event.target.value})

        // WE CAN ALSO USE THIS METHOD IF OUR STATE IS DEPENDENT UPON THE PREVIOUS STATE
        /*setUserInput((prevState)=>{
           return {...prevState, enteredTitle: event.target.value}
        })*/

        // BUT WE USE SINGLE STATE FOR EACH VALUE CHANGE SO
        setenteredTitle(event.target.value)
    }

    const amountChangeHandler = event => {
        setenteredAmount(event.target.value)
    }

    const dateChangeHandler = event => {
        setenteredDate(event.target.value)
    }

    const submitHandler = (event) => {
        // This prevent the default behaviour of sending request to the hosting server
        // But we want to handle it using the JavaScript manually
        event.preventDefault();

        const expenseData = {
            title: enteredTitle,
            amount: enteredAmount,
            date: new Date(enteredDate)
        };
       
        console.log(expenseData);
        setenteredTitle("");
        setenteredAmount("");
        setenteredDate("");
    }

    return (
        <form onSubmit={submitHandler}>
            <div className="new-expense__controls">
                <div className="new-expense__control">
                    <label>Title</label>
                    <input 
                        type="text"
                        value={enteredTitle}
                        onChange={(e)=>{titleChangeHandler(e)}} />
                </div>
                <div className="new-expense__control">
                    <label>Amount</label>
                    <input 
                        type="number"
                        value={enteredAmount}
                        onChange={(e)=>{amountChangeHandler(e)}} 
                        min="0.01" 
                        step="0.01"/>
                </div>
                <div className="new-expense__control">
                    <label>Date</label>
                    <input 
                        type="date" 
                        onChange={(e)=>{dateChangeHandler(e)}}
                        value={enteredDate}
                        min="2022-01-01" 
                        max="2023-01-01"/>
                </div>
            </div>
            <div className="new-expense__actions">
                <button type="submit">Add Expense</button>
            </div>
        </form>
    );
}

export default ExpenseForm;