import { useState } from "react";

export const Count = ()=>{

    // DEFAULT VALUE IS USESTATE
    // AND WE WILL SET THE NEW VALUE TO THE COUNT
    let [count,setCount] = useState(0)
    // let count = 0;

    // const formSubmit = (e)=>{
    //     e.preventDefault();
    // }

    const add = ()=>{
        // HERE WE INCREMENT THE VALUE ONCLICKING THE BUTTON
        count++
        // HERE WE ARE SETTING THE NEW INCREMENTED VALUE TO THE << setCount >>
        setCount(count)
    }

    const boxStyle = {
        border: "2px solid black",
        borderRadius: "15px",
        padding: "10px 15px", 
        fontSize: "20px",
        margin: "1px 5px"
    }  

    return (
        <>
            <h1>Count is {count}</h1>
            {/* ADD IS ONCLICK FUNCTION */}
            <button style={boxStyle} onClick={add}>Add +1</button>

            {/* <form onSubmit={formSubmit}>
                <input type="text" name="email" /><br />
                <input type="text" name="password" /><br />
                <input type="submit" value="save" />
            </form> */}
        </>
    )
}