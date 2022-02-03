import React from 'react'
// WE CAN ALSO DEFINE THE PROPS TYPES SO THAT WE CAN GIVE THE DATATYPE TO THE PROPS VALUES
import PropTypes from 'prop-types';

export default function Header(props) {
    return (
        <nav className="navbar navbar-expand-lg navbar-light bg-light">
        <div className="container-fluid">
          <a className="navbar-brand" href="#">{props.title}</a>
          <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
            <span className="navbar-toggler-icon"></span>
          </button>
          <div className="collapse navbar-collapse" id="navbarSupportedContent">
            <ul className="navbar-nav me-auto mb-2 mb-lg-0">
              <li className="nav-item">
                <a className="nav-link active" aria-current="page" href="#">Home</a>
              </li>
              <li className="nav-item">
                <a className="nav-link" href="#">About</a>
              </li>
            </ul>

            {/* USING TERNARY OPERATOR SO THAT WE CAN SHOW AND HIDE IT ACCORDING TO OUR VALUE */}

            {props.searchBar ? <form className="d-flex">
              <input className="form-control me-2" type="search" placeholder="Search" aria-label="Search" />
              <button className="btn btn-outline-success" type="submit">Search</button>
            </form> :"Search Bar Value false"}
          </div>
        </div>
      </nav>
    )
}

// THIS IS THE DEFAULT VALUE OF THE PROPS IF NO TITLE VALUE WILL BE PASSED IN THE PARENT COMPONENT APP THEN THIS VALUE OF THE TITLE WILL BE SHOWN TO THE USER
Header.defaultProps = {
  title: "Your_name_here",
  searchBar: true
}

// WE CAN ALSO GIVE THE PROPS TYPE TO THE PROPS VALUES
// I GAVE THE REQUIRED VALUE TO THE SEARCH BAR SO THAT WE HAVE TO GIVE THE VALUE OF SEARCH BAR IN BOOL EITHER TRUE OR FALSE IF THE DEFAULT VALUE IS NOT GIVEN
// IF WE DONT PASS THE REQUIRED VALUE THEN IT WILL SHOW ERROR
Header.propTypes = {
  title: PropTypes.string,
  searchBar: PropTypes.bool.isRequired
}

// priye likhkar niche likh du nam tumhara kuch jagah bich me chod
// niche likh du sada tumhara !!!!!!

// likha bich me kya? ye tumko padhna hai!!!!!!

// kagaz par man ki bhasha ka arth smjhna hai....

// jo bhi arth nikalogi tum wo mujhko swikar

// jhuke nain... maun adhar... ya kora kagaz arth sabhi ka pyar...