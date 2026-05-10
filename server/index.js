const express = require('express');
const cors = require('cors');
const app = express();

app.use(cors());
app.use(express.json());

// Mock Database
let inventory = [
    { id: 1, name: 'Greek Yogurt', days: 2, status: 'urgent', cat: 'Dairy', qty: '2' }
];

// Routes
app.get('/api/items', (req, res) => {
    res.json(inventory);
});

app.post('/api/items', (req, res) => {
    const newItem = { id: Date.now(), ...req.body };
    inventory.push(newItem);
    res.status(201).json(newItem);
});

const PORT = 5000;
app.listen(PORT, () => {
    console.log(`🚀 LastByte Server running at http://localhost:${PORT}`);
});