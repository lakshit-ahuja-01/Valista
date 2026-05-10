import React from 'react'
import ReactDOM from 'react-dom/client'
import App from './App.jsx'
import './index.css' // THIS CONNECTS THE TAILWIND PAINT TO THE APP

ReactDOM.createRoot(document.getElementById('root')).render(
  <React.StrictMode>
    <App />
  </React.StrictMode>,
)