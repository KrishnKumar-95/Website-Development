import { Children } from 'react'
import {Fun1,Fun2} from  './Contact'
// import './App.css'
import Form from './Form'
import TODO from './TODO'
import Nesting from './Nesting'

import {
    BrowserRouter as Router,
    Routes,
    Route
  } from "react-router-dom";

import Home from './Home'
import Contact from './Contact'
import Page from './Page'

const App = () => {

    const products = [
        {name:'ipHone',price:55000},
        {name:'iPad',price:40000},
        {name:'laptop',price:25000},
        {name:'PC',price:35000},
    ]

    const Item = ({name,price}) => {
        return (
            <>
                <h1>{name}</h1>
                <h3>Price : Rs {price}</h3>
                <button onClick={() => {click(name)}}>Buy Now</button>
            </>
        )
    }

    const array1 = [
        {id:1,name:`krishn`,language:`c++`},
        {id:2,name:`ashish`,language:`python`},
        {id:3,name:`arjun`,language:`dart`},
        {id:4,name:`vikrant`,language:`golang`}
    ]

    const Item2 = ({id,name,language})=>{
        return (
            <>
                <h1>{name}</h1>
                <h2>id:{id} ,language:{language}</h2>
                <button onClick={()=>{click(language)}}>Buy Now</button>
            </>
        )
    }

    // const Comp1 = () => {
    //     return (
    //         <>
    //             <p>Hello</p>
    //         </>
    //     )
    // }

    // const Comp2 = () => {
    //     return (
    //         <>
    //         <h1>Welcome</h1>
    //         <Comp1 />
    //         </>
    //     )
    // }

    // const NewComp = (props) => {
    //     return (
    //         <>
    //         <h1>Parent Componenet</h1>
    //         {props.children}
    //         <h2>By bye</h2>
    //         </>
    //     )
    // }

    const click = (id) => {
        console.log('Button Clicked',id)
    }


    return (
        <div>
            {/* <Item name='iPhone' price={50000} />
            <Item name='iPAd' price={45000}/>
            <Item name='Laptop' price={25000}/> */}
            {/* <Comp2 /> */}
            {/* <NewComp>
                {/* <h3>Hello from children</h3> */}
                {/* <Comp2 /> */}
            {/* </NewComp> */}

            {/* {products.map((item,index) => <Item key={index} name={item.name} price={item.price}/>)} */}

            {/* Array.map((item_of_array, array_index)=>{ component with parameters }) */}
            
            {/* {array1.map((item2,index) => <Item2 key={index} id={item2.id} name={item2.name} language={item2.language} />)} */}
            {/* <button onClick={() => {console.log('Cliked')}}>Click ME</button> */}
            {/* <button onClick={() => click(1)}>Click ME 1</button> */}
            {/* <button onClick={() => click(2)}>Click ME 2</button> */}

                {/* <Form /> */}
                {/* <TODO /> */}

                <Router>
                    <Routes>
                        <Route path="/" element={<Home />} />
                        <Route path="contact" element={<Contact />} />
                        <Route path="Nesting" element={<Nesting />} />
                        <Route path="page" element={<Page />} >
                            <Route path=":id" element={<Page />} />
                        </Route>
                        <Route path="*"
                            element={
                                <main style={{ padding: "1rem" }}>
                                <p>There's nothing here!</p>
                                </main>
                            }
                            />
                    </Routes>
                </Router>
        </div>
        )
}

  
export default App
  
  
  // _rafce => short_cut for component
  // rafce => short_cut for component with React

  // const MyName = ()=>{
  //     let myfname = "Krishn";
  //     let mylname = "Kumar";
  
  //     return (
  //         <>
  //             <h1>Hello, My name is {myfname} {mylname}</h1>
  //             <p>I am learning React for Front-End Development</p>
  //         </>
  //     )
  // }