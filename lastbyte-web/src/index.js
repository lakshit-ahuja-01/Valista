const express = require('express');
const mongoose = require('mongoose');
const cors = require('cors');

const app = express();
app.use(express.json());
app.use(cors()); // Allows your React app to talk to this server

// 1. Connect to MongoDB (Ensure MongoDB is running on your PC)
mongoose.connect('mongodb://localhost:27017/lastbyte')
  .then(() => console.log("✅ Connected to MongoDB"))
  .catch(err => console.error("❌ MongoDB Connection Error:", err));

// 2. Define the Data Model
const ItemSchema = new mongoose.Schema({
  name: String,
  daysLeft: Number,
  quantity: Number,
  category: String,
  risk: String, 
  status: { type: String, default: 'Inventory' }
});

const Item = mongoose.model('Item', ItemSchema);

// 3. API Routes
app.get('/api/items', async (req, res) => {
  const items = await Item.find().sort({ daysLeft: 1 });
  res.json(items);
});

app.post('/api/items', async (req, res) => {
  const { name, daysLeft, quantity, category } = req.body;
  
  // AI Risk Logic: Automated classification
  let risk = 'Low';
  if (daysLeft <= 3) risk = 'High';
  else if (daysLeft <= 7) risk = 'Medium';

  const newItem = new Item({ name, daysLeft, quantity, category, risk });
  await newItem.save();
  res.status(201).json(newItem);
});

app.delete('/api/items/:id', async (req, res) => {
  await Item.findByIdAndDelete(req.params.id);
  res.json({ message: "Item deleted" });
});

const PORT = 5000;
app.listen(PORT, () => console.log(`🚀 Backend running on http://localhost:${PORT}`));