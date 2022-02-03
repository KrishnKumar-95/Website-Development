import { Link } from "react-router-dom";

const Home = () => {
    return (
        <>
        <h1>Home Page</h1>
        <Link to="/contact">Contact</Link> <br/>
        <Link to={`/page/${123}`}>Page</Link>
        </>
    )
}

export default Home