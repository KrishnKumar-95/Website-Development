import { useState } from "react"

const Form = () => {

    // var [count,setCount] = useState(0)

    // const add = () => {

    //     var _count = count++
    //     setCount(_count)
    // }

    const [email,setEmail] = useState('Enter Email')
    const [pass,setPass] = useState('')

    const frmSubmit = (e) => {
        e.preventDefault()
        console.log(e);
    }
    console.log(email);

    return (
        <div>
           {/* <h1>count is {count}</h1>
           <button onClick={add}>Add +1</button> */}
           <form onSubmit={frmSubmit}>
               Email : <input type="text" name="email" id="" value={email} onChange={(e) => {setEmail(e.target.value)}}/><br />
               {email}<br/>
               Password : <input type="text" name="password" id="" value={pass} onChange={(e) => {setPass(e.target.value)}}/><br />
               <input type="submit" value="Save" />
           </form>
        </div>
    )
}

export default Form
