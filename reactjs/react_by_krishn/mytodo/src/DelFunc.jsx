const DelFunc = (props)=>{
    return (
        <>
            <button style={props.style} onClick={()=>props.delete()}>Delete</button>
        </>
    )
}

export default DelFunc