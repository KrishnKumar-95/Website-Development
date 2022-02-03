// WE CAN USE COMPONENT IN ANOTHER COMPONENT LIKE THIS
// COMPONENT MAY BE ANY DESIGN / FORM ETC
const Comp3 = ()=>{
    return(
        <>
            <h3>This is Component 3</h3>
        </>
    )
}

const Comp2 = () =>{
    return (
        <>
            <h2>This is Component 2</h2>
            <Comp3 />
        </>
    )
}

const Comp1 = () => {
    return (
        <>
            <h1>This is Component 1</h1>
            <Comp2 />
        </>
    )
}


export default Comp1