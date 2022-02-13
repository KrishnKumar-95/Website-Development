import { useState } from 'react'
import Comp from './Comp'


const Nesting = () => {

    const [data,setData] = useState('Hello')

    const change = () => {
        setData('My name is krishan kumar')
    }


    return (
        <>
            <h1>Nesting Demo</h1>

            <div>

                <h2>Title</h2>
                <h2>Data : {data}</h2>
                <Comp click={change} />
            </div>
        </>
    )
}

export default Nesting