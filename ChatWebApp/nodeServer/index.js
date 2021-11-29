//This is Node Server for our Chat App 

// const io = require('socket.io')(3000)

const io = require('socket.io')(3000, {
    cors: {
        origin: '*',
    }
});

// This is an object which will store the << socket.id >> as key and name as the related data which is the name ented by the user.
const users = {};

// io.on will listen all the socket connections. Using this connection user will connect to the socket
io.on('connection', socket => {
    // socket.on will decide what actually should be done when an user connected to the socket
    // this will perform actions when an connection is build
    // here it is handling the << new-user-joined >> event
    socket.on('new-user-joined', name => {

        // we are also storing the data in form of object and  << socket.id >> is an id which is given to the each user which will join the chat we use this socket id for future reference
        // New User krishn
        // { 'mE-uB7XqrarPK_4BAAAB': 'krishn' }
        users[socket.id] = name;

        // this will broadcast the name to the previous connected users when a new user joined
        // here is emitting an event for the client side action
        socket.broadcast.emit('user-joined', name);
    });


    // here it is handling the send event and broadcasting the message
    // here a new event is fired recieve
    socket.on('send', message => {
        socket.broadcast.emit('receive', { message: message, name: users[socket.id] })
    });

    // here it is handling the disconnected users and showing message to other connected users that the user is disconnected.
    socket.on('disconnect', message => {
        socket.broadcast.emit('left', users[socket.id]);

        //we are here deleting the user which has left
        delete users[socket.id];
    });
})