import React, { useState, useEffect } from 'react';
import { motion, AnimatePresence } from 'framer-motion';
import { 
  Package, Leaf, DollarSign, Plus, Zap, Trash2, X, 
  BarChart3, Utensils, Bell, Heart, ShoppingBag, 
  User, Store, Camera, Smartphone, MapPin, Search, Bot
} from 'lucide-react';
const LastByte = () => {
  const [mode, setMode] = useState('Personal'); 
  const [showForm, setShowForm] = useState(false);
  const [loading, setLoading] = useState(true);
  const [items, setItems] = useState([]);
  const [newItem, setNewItem] = useState({ name: '', days: '', cat: 'Produce', qty: 1 });
  const [aiSuggestion, setAiSuggestion] = useState(null);

  // --- ADD THIS LINE TO FIX THE CRASH ---
  const [notifications, setNotifications] = useState([
    { id: 1, text: "Welcome! 3 items need attention.", priority: "high" }
  ]);
  // ---------------------------------------

  // --- 1. THE "LOADER" (Fetches items from MongoDB on Startup) ---
  useEffect(() => {
    const fetchItems = async () => {
      try {
        const response = await fetch('http://localhost:5000/api/items');
        const data = await response.json();
        setItems(data);
        setLoading(false);
      } catch (error) {
        console.error("Backend offline. Check if 'node index.js' is running.");
        setLoading(false);
      }
    };
    fetchItems();
  }, []);

  // --- 2. THE "SAVER" (Sends new item to Node.js) ---
  const addItem = async (e) => {
    e.preventDefault();
    try {
      const response = await fetch('http://localhost:5000/api/items', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({
          name: newItem.name,
          daysLeft: parseInt(newItem.days),
          category: newItem.cat,
          quantity: parseInt(newItem.qty)
        })
      });
      const savedItem = await response.json();
      setItems([savedItem, ...items]); // Update UI with real DB item
      setShowForm(false);
    } catch (error) {
      alert("Error: Backend is not responding!");
    }
  };

  // --- 3. THE "DELETER" (Removes from MongoDB) ---
  const deleteItem = async (id) => {
    try {
      await fetch(`http://localhost:5000/api/items/${id}`, { method: 'DELETE' });
      setItems(items.filter(item => item._id !== id)); // MongoDB uses _id
    } catch (error) {
      console.error("Failed to delete from server.");
    }
  };
  // --- ADD THIS FUNCTION TO FIX THE CRASH ---
  const getAiRecipe = () => {
    // Looks for items with 'High' risk or less than 3 days left
    const expiring = items.find(i => i.risk === 'High' || i.daysLeft <= 3);
    
    if (expiring) {
      setAiSuggestion(`AI Analysis: Your ${expiring.name} is about to expire. Recommendation: Use it in a smoothie or stir-fry today!`);
    } else {
      setAiSuggestion("AI Analysis: No urgent waste risks detected. Your inventory is looking great!");
    }

    // Automatically hide the message after 6 seconds
    setTimeout(() => setAiSuggestion(null), 6000);
  };
  // -------------------------------------------
  return (
    <div className="min-h-screen bg-[#060b13] text-slate-200 font-sans selection:bg-teal-500/30 pb-20">
      {/* Dynamic Ambient Background Glows */}
      <div className="fixed top-0 left-0 w-full h-full pointer-events-none overflow-hidden z-0">
        <div className="absolute top-[-10%] left-[-10%] w-[50%] h-[50%] bg-teal-500/10 blur-[120px] rounded-full" />
        <div className="absolute bottom-[-10%] right-[-10%] w-[50%] h-[50%] bg-blue-600/10 blur-[120px] rounded-full" />
      </div>

      <div className="relative z-10 max-w-7xl mx-auto px-6 py-8">
        
        {/* --- DUAL INTERFACE TOGGLE --- */}
        <div className="flex justify-center mb-8">
          <div className="bg-white/5 p-1.5 rounded-2xl border border-white/10 flex gap-2 backdrop-blur-md shadow-2xl">
            <button 
              onClick={() => setMode('Personal')} 
              className={`px-8 py-2.5 rounded-xl text-sm font-bold transition-all flex items-center gap-2 ${mode === 'Personal' ? 'bg-teal-500 text-slate-900 shadow-lg shadow-teal-500/20' : 'text-slate-400 hover:text-white'}`}
            >
              <User size={16}/> Personal
            </button>
            <button 
              onClick={() => setMode('Business')} 
              className={`px-8 py-2.5 rounded-xl text-sm font-bold transition-all flex items-center gap-2 ${mode === 'Business' ? 'bg-blue-600 text-white shadow-lg shadow-blue-600/20' : 'text-slate-400 hover:text-white'}`}
            >
              <Store size={16}/> Business
            </button>
          </div>
        </div>

        {/* --- NAVIGATION & NOTIFICATIONS --- */}
        <nav className="flex flex-col md:flex-row justify-between items-center mb-10 backdrop-blur-3xl bg-white/5 border border-white/10 p-5 rounded-[2.5rem] gap-4 shadow-2xl">
          <div className="flex items-center gap-3">
            <div className="bg-teal-500 p-2.5 rounded-2xl shadow-xl shadow-teal-500/20">
              <Package size={26} className="text-slate-900" />
            </div>
            <h1 className="text-2xl font-black text-white tracking-tighter italic uppercase">
              Last<span className="text-teal-400 tracking-normal">Byte</span>
            </h1>
          </div>
          
          <div className="flex items-center gap-6">
            <motion.div whileHover={{ scale: 1.1 }} className="relative cursor-pointer">
              <Bell size={24} className="text-slate-400 hover:text-white transition-colors" />
              <span className="absolute -top-1 -right-1 w-4 h-4 bg-red-500 text-[10px] flex items-center justify-center rounded-full text-white font-bold animate-pulse">
                {notifications.length}
              </span>
            </motion.div>
            <button 
              onClick={() => setShowForm(true)} 
              className="bg-teal-500 hover:bg-teal-400 text-slate-900 px-8 py-3.5 rounded-2xl font-bold flex items-center gap-2 transition-all active:scale-95 shadow-2xl shadow-teal-500/20"
            >
              <Plus size={22} /> New Item
            </button>
          </div>
        </nav>

        {/* --- AI SUGGESTION BANNER --- */}
        <AnimatePresence>
          {aiSuggestion && (
            <motion.div 
              initial={{ height: 0, opacity: 0, y: -20 }} 
              animate={{ height: 'auto', opacity: 1, y: 0 }} 
              exit={{ height: 0, opacity: 0, y: -20 }} 
              className="mb-8 p-5 bg-teal-500/10 border border-teal-500/20 rounded-[1.5rem] flex items-center gap-4 backdrop-blur-md overflow-hidden"
            >
              <div className="bg-teal-500/20 p-2 rounded-xl">
                <Bot className="text-teal-400" size={20} />
              </div>
              <p className="text-sm font-semibold text-teal-100">{aiSuggestion}</p>
            </motion.div>
          )}
        </AnimatePresence>

        {/* --- ANALYTICS DASHBOARD --- */}
        <div className="grid grid-cols-1 lg:grid-cols-3 gap-6 mb-12">
          <div className="lg:col-span-2 p-10 rounded-[3rem] bg-white/5 border border-white/10 backdrop-blur-md relative overflow-hidden group">
             <div className="flex justify-between items-center mb-10">
                <div>
                  <h2 className="text-xl font-bold text-white mb-1 flex items-center gap-2">
                    <BarChart3 size={20} className="text-teal-400"/> Waste Impact
                  </h2>
                  <p className="text-xs text-slate-500 font-bold uppercase tracking-widest">Efficiency Trend (7 Days)</p>
                </div>
                <button 
                  onClick={getAiRecipe} 
                  className="p-3 bg-white/5 rounded-xl border border-white/10 text-teal-400 hover:bg-teal-400 hover:text-slate-900 transition-all shadow-lg"
                  title="Generate AI Advice"
                >
                  <Zap size={20}/>
                </button>
             </div>
             <div className="flex items-end gap-4 h-32">
                {[45, 80, 55, 100, 70, 90, 85].map((h, i) => (
                  <div key={i} className="flex-1 flex flex-col items-center gap-3">
                    <motion.div 
                      initial={{ height: 0 }} 
                      animate={{ height: `${h}%` }} 
                      className={`w-full rounded-t-xl transition-all duration-700 ${i === 6 ? 'bg-teal-400 shadow-[0_0_20px_rgba(45,212,191,0.3)]' : 'bg-teal-500/20 group-hover:bg-teal-500/30'}`} 
                    />
                    <span className="text-[10px] text-slate-500 font-bold">D{i+1}</span>
                  </div>
                ))}
             </div>
          </div>
          
          <div className="flex flex-col gap-4">
             <StatBox icon={<Leaf className="text-green-400"/>} label="CO2 Offset" val="24.8 kg" />
             <StatBox icon={<DollarSign className="text-blue-400"/>} label="Money Saved" val="$184.20" />
             <StatBox icon={<Heart className="text-red-400"/>} label="Donations" val="4 Pending" />
          </div>
        </div>

        {/* --- LIVE INVENTORY SECTION --- */}
        <div className="flex items-center justify-between mb-8">
          <h2 className="text-2xl font-bold text-white flex items-center gap-3">
            <ShoppingBag size={24} className="text-teal-400"/> Live Inventory Tracker
          </h2>
          <div className="bg-white/5 px-4 py-2.5 rounded-2xl border border-white/10 flex items-center gap-3 backdrop-blur-md">
            <Search size={18} className="text-slate-500" />
            <input type="text" placeholder="Search items..." className="bg-transparent text-sm outline-none w-40 text-white" />
          </div>
        </div>
        
        <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-8">
          <AnimatePresence mode="popLayout">
            {items.map((item) => (
              <motion.div 
                key={item._id} layout initial={{ opacity: 0, y: 20 }} animate={{ opacity: 1, y: 0 }} exit={{ opacity: 0, scale: 0.9 }}
                className={`p-8 rounded-[2.5rem] border backdrop-blur-2xl relative group transition-all hover:scale-[1.02] hover:shadow-2xl ${
                  item.risk === 'High' ? 'bg-red-500/5 border-red-500/20' : 
                  item.risk === 'Medium' ? 'bg-yellow-500/5 border-yellow-500/20' : 'bg-white/5 border-white/10'
                }`}
              >
                {/* Status Badge */}
                <div className={`absolute top-8 right-8 px-4 py-1.5 rounded-full text-[10px] font-black uppercase tracking-widest shadow-lg ${
                  item.risk === 'High' ? 'bg-red-500 text-white' : 
                  item.risk === 'Medium' ? 'bg-yellow-500 text-slate-900' : 'bg-green-500 text-white'
                }`}>{item.risk} Risk</div>

                <span className="text-[11px] font-bold text-teal-400/60 uppercase tracking-[0.2em]">{item.category}</span>
                <h3 className="text-2xl font-black text-white mt-1 mb-6 leading-tight">{item.name}</h3>
                
                {/* Progress Tracking */}
                <div className="flex justify-between text-xs text-slate-400 mb-2 font-bold uppercase tracking-wider">
                  <span>EXP: {item.daysLeft} DAYS</span>
                  <span>QTY: {item.quantity}</span>
                </div>
                <div className="w-full bg-white/5 h-2.5 rounded-full mb-8 overflow-hidden border border-white/5">
                   <motion.div 
                    initial={{ width: 0 }} 
                    animate={{ width: `${Math.max(10, 100 - (item.daysLeft * 7))}%` }} 
                    className={`h-full shadow-lg transition-all duration-1000 ${item.risk === 'High' ? 'bg-red-500' : 'bg-teal-400'}`} 
                   />
                </div>

                {/* ACTION BUTTONS */}
                <div className="flex gap-3">
                   <button className="flex-1 bg-white/5 hover:bg-white/10 py-4 rounded-2xl text-[12px] font-black uppercase border border-white/10 flex items-center justify-center gap-2 transition-all active:scale-95">
                     <Utensils size={16}/> Consume
                   </button>
                   <button 
                    onClick={() => deleteItem(item._id)} 
                    className="p-4 bg-red-500/10 hover:bg-red-500/20 text-red-500 rounded-2xl border border-red-500/10 transition-all active:scale-90"
                   >
                     <Trash2 size={18}/>
                   </button>
                </div>
              </motion.div>
            ))}
          </AnimatePresence>
        </div>

        {items.length === 0 && !loading && (
          <div className="text-center py-20 bg-white/5 rounded-[3rem] border border-dashed border-white/10">
            <Package size={48} className="mx-auto text-slate-700 mb-4" />
            <p className="text-slate-500 font-bold">No items found. Tap 'New Item' to start tracking.</p>
          </div>
        )}
      </div>

      {/* --- ADD ITEM MODAL --- */}
      <AnimatePresence>
        {showForm && (
          <div className="fixed inset-0 z-[100] flex items-center justify-center p-6 bg-black/95 backdrop-blur-xl">
            <motion.div initial={{ y: 100, opacity: 0 }} animate={{ y: 0, opacity: 1 }} exit={{ y: 100, opacity: 0 }} className="bg-[#111827] border border-white/10 p-12 rounded-[4rem] w-full max-w-xl shadow-[0_0_100px_rgba(45,212,191,0.1)] relative">
               <div className="flex justify-between items-center mb-10">
                  <h2 className="text-4xl font-black text-white italic tracking-tighter uppercase">Smart<span className="text-teal-400 tracking-normal">Intake</span></h2>
                  <button onClick={() => setShowForm(false)} className="p-3 bg-white/5 rounded-full hover:bg-white/10 transition-colors"><X size={24}/></button>
               </div>
               
               <div className="grid grid-cols-2 gap-4 mb-8">
                  <div className="p-5 bg-white/5 rounded-3xl border border-white/10 flex flex-col items-center gap-3 cursor-pointer hover:border-teal-500/50 transition-all group">
                     <Camera size={24} className="text-teal-400 group-hover:scale-125 transition-transform"/>
                     <span className="text-[10px] font-black uppercase tracking-widest">OCR Vision Scan</span>
                  </div>
                  <div className="p-5 bg-white/5 rounded-3xl border border-white/10 flex flex-col items-center gap-3 cursor-pointer hover:border-blue-500/50 transition-all group">
                     <Smartphone size={24} className="text-blue-400 group-hover:scale-125 transition-transform"/>
                     <span className="text-[10px] font-black uppercase tracking-widest">Barcode Link</span>
                  </div>
               </div>

               <form onSubmit={addItem} className="space-y-5">
                  <input type="text" placeholder="PRODUCT NAME" required className="w-full bg-white/5 border border-white/10 p-6 rounded-3xl text-white font-bold placeholder:text-slate-600 focus:border-teal-400 transition-colors outline-none" onChange={(e) => setNewItem({...newItem, name: e.target.value})} />
                  <div className="grid grid-cols-2 gap-4">
                    <input type="number" placeholder="DAYS LEFT" required className="bg-white/5 border border-white/10 p-6 rounded-3xl text-white font-bold outline-none focus:border-teal-400" onChange={(e) => setNewItem({...newItem, days: e.target.value})} />
                    <input type="number" placeholder="QTY" className="bg-white/5 border border-white/10 p-6 rounded-3xl text-white font-bold outline-none focus:border-teal-400" onChange={(e) => setNewItem({...newItem, qty: e.target.value})} />
                  </div>
                  <select className="w-full bg-white/5 border border-white/10 p-6 rounded-3xl text-white font-bold outline-none focus:border-teal-400" onChange={(e) => setNewItem({...newItem, cat: e.target.value})}>
                     <option value="Produce">PRODUCE / FOOD</option>
                     <option value="Dairy">DAIRY</option>
                     <option value="Medicine">MEDICINE / HEALTH</option>
                     <option value="Groceries">HOUSEHOLD / CLEANING</option>
                  </select>
                  <button type="submit" className="w-full bg-teal-500 py-6 rounded-3xl font-black text-slate-900 text-xl uppercase tracking-[0.2em] shadow-2xl shadow-teal-500/20 hover:bg-teal-400 active:scale-95 transition-all mt-6">Confirm to Inventory</button>
               </form>
            </motion.div>
          </div>
        )}
      </AnimatePresence>
    </div>
  );
};

const StatBox = ({ icon, label, val }) => (
  <div className="p-6 rounded-[2rem] bg-white/5 border border-white/10 flex items-center gap-5 hover:bg-white/10 transition-all cursor-default group backdrop-blur-md">
     <div className="p-4 bg-white/5 rounded-2xl group-hover:scale-110 transition-transform shadow-inner">{icon}</div>
     <div>
        <p className="text-[10px] text-slate-500 font-black uppercase tracking-widest">{label}</p>
        <p className="text-2xl font-black text-white leading-none mt-1">{val}</p>
     </div>
  </div>
);

export default LastByte;