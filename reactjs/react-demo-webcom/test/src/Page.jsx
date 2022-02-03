import { useParams } from "react-router-dom";

const Page = () => {

    let params = useParams();

    return (
        <h1>Page : {params.id}</h1>
    )
}

export default Page