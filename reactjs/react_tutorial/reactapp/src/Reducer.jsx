import React,{useReducer, useState} from 'react';

const store = {name:''}

function reducer(state, action) {
    switch (action.type) {
      case 'ADDNAME':
        return {name:action.payload};
      default:
        throw new Error();
    }
  }

const Reducer = () => {


    const [state, dispatch] = useReducer(reducer, store);

    const [nameinp,setNameInp] = useState('')

  return <div>
      <h1>Your Name : {state.name}</h1>
      Enter Name : <input type='text' value={nameinp} onChange={e => setNameInp(e.target.value.trim())} />
      <button onClick={() => dispatch({type:'ADDNAME',payload:nameinp})}>Click</button>
  </div>;
};

export default Reducer;
