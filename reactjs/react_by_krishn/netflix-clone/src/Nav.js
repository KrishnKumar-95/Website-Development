import React,{useState,useEffect} from 'react';
import "./Nav.css"

function Nav() {

    const [show,handleShow] = useState(false);

    const transitionNavBar = ()=>{
        if(window.scrollY > 100){
            handleShow(true);
        }else{
            handleShow(false);
        }
    };

    // when to return
    useEffect(()=>{
        window.addEventListener("scroll",transitionNavBar);
        return () => window.removeEventListener("scroll",transitionNavBar);
    },[]);

  return( 
    <div className={`nav ${show && 'nav__black'}`}>
        <div className="nav__contents">
            {/* Netflix Logo */}
            <img 
                className='nav__logo' 
                src="https://upload.wikimedia.org/wikipedia/commons/0/08/Netflix_2015_logo.svg" 
                alt="netflix-logo" />

            {/* Netflix Avatar */}
            <img 
                className='nav__avatar' 
                src="https://upload.wikimedia.org/wikipedia/commons/0/0b/Netflix-avatar.png" 
                alt="Avatar" />
        </div>
    </div>
  )
}

export default Nav;