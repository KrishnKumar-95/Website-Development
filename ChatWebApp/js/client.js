const socket = io('http://localhost:3000');

// here i get the DOM elements in the JavaScript Variable
const form = document.getElementById('send-container');
const msgInp = document.getElementById('msgInp');
const msgContainer = document.querySelector('.container');
// here is the audio which will be played when message receive
const audio = new Audio('ting.mp3');

// message will be printed in the container when chat is going on
// append is a variable which will call the callback function which takes (message, position)
const append = (message, position) => {
    // variable which has query which will create a << div >>
    const messageElement = document.createElement('div');
    // this will enter the innerText to the << div >> which will be our message
    messageElement.innerText = message;
    // this will add the new class to this div container
    messageElement.classList.add('message');
    // this will add the class position
    messageElement.classList.add(position);
    // this will append the message which contains the message with class message
    msgContainer.append(messageElement);
    // this is sound which will play when a message will be sent by another person
    if (position == 'left') {
        audio.play();
    }
}

// In this our message will shown when we send message with the prefix you
// this is eventlistner which is applied to the form's submit button
form.addEventListener('submit', (e) => {
    // this will let the button not to reload the page
    e.preventDefault();
    // this variable will contain the input field text which contain our message
    const message = msgInp.value;
    // this is the message which will show into the container
    append(`You: ${message}`, 'right');
    // this emit the send event to its on handler with message
    socket.emit('send', message);
    // this will empty the text input field after sending the message
    msgInp.value = '';
})

// this will show an message when a new user joins
const name = prompt('Enter your name to join');
socket.emit('new-user-joined', name);

// This will give message on New user joined the chat.
socket.on('user-joined', name => {
    append(`${name} joined the chat...`, 'right');
});

// using this we will send message in the chat container
socket.on('receive', data => {
    append(`${data.name} : ${data.message}`, 'left');
});

// this will show an message when an user left the chat
socket.on('left', name => {
    append(`${name} left the chat`, 'left');
});