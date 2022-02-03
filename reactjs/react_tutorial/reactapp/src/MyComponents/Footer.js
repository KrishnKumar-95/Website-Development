import React from 'react'

export const Footer = () => {
    let footerStyle = {
        position: "relative",
        width: "100%",
        top: "70vh"
    }
    return (
        <footer className='bg-dark text-light' style={footerStyle}>
            <p className="text-center py-3">
                Copyright &copy; MyTodos.com
            </p>
        </footer>
    )
}
