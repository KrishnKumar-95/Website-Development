import React from 'react';
import './App.css';
import HomeScreen from './screens/HomeScreen';
import {Route,Routes} from 'react-router-dom'
import LoginScreen from './screens/LoginScreen';

function App() {
  const user = null;
  return (
    <div className="app">
      {!user ? (<LoginScreen/>) : 
      (<Routes>
        <Route path='/' element={<HomeScreen />} />
      </Routes>)}
    </div>
  );
}

export default App;
