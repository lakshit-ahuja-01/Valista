import React, { useState } from 'react';
import { motion, AnimatePresence } from 'framer-motion';
import { Bell, Package, Leaf, DollarSign, Plus, Zap, Utensils, Share2 } from 'lucide-react';

const LastByte = () => {
  const [activeTab, setActiveTab] = useState('inventory');
  
  // Mock Data with "Risk Levels"
  const [items, setItems] = useState([
    { id: 1, name: 'Greek Yogurt', days: 2, status: 'urgent', cat: 'Dairy', qty: '2' },
    { id: 2, name: 'Fresh Spinach', days: 4, status: 'warning', cat: 'Produce', qty: '1' },
    { id: 3, name: 'Almond Milk', days: 12, status: 'safe', cat: 'Beverage', qty: '3' },
    { id: 4, name: 'Avocado', days: 1, status: 'urgent', cat: 'Produce', qty: '4' },
  ]);

  const cardVariants = {
    hidden: { opacity: 0, y: 20 },
    visible: (i) => ({
      opacity: 1, 
      y: 0,
      transition: { delay: i * 0.1, duration: 0.5, ease: "easeOut" }
    })
  };

  return (
    <div className="min-h-screen bg-[#0f172a] text-slate-200 font-sans selection:bg-teal-500/30">
      
      {/* --- BACKGROUND GLOW ELEMENTS --- */}
      <div className="fixed top-[-10%] left-[-10%] w-[40%] h-[40%] bg-teal-500/10 blur-[120px] rounded-full" />
      <div className="fixed bottom-[-10%] right-[-10%] w-[40%] h-[40%] bg-blue-600/10 blur-[120px] rounded-full" />

      <div className="relative max-w-7xl mx-auto px-6 py-8">
        
        {/* --- NAVIGATION --- */}
        <nav className="flex justify-between items-center mb-12 backdrop-blur-xl bg-white/5 border border-white/10 p-5 rounded-3xl shadow-2xl">
          <div className="flex items-center gap-3">
            <div className="p-2 bg-gradient-to-br from-teal-400 to-blue-500 rounded-xl shadow-lg shadow-teal-500/20">
              <Package size={24} className="text-white" />
            </div>
            <h1 className="text-2xl font-bold tracking-tighter text-white">Last<span className="text-teal-400">Byte</span></h1>
          </div>
          
          <div className="hidden md:flex bg-black/20 p-1 rounded-2xl border border-white/5">
            {['Inventory', 'Analytics', 'Donations', 'Community'].map((tab) => (
              <button 
                key={tab}
                onClick={() => setActiveTab(tab.toLowerCase())}
                className={`px-6 py-2 rounded-xl text-sm font-medium transition-all ${activeTab === tab.toLowerCase() ? 'bg-white/10 text-white shadow-inner' : 'text-slate-400 hover:text-white'}`}
              >
                {tab}
              </button>
            ))}
          </div>

          <div className="flex items-center gap-4">
            <button className="relative p-2 hover:bg-white/5 rounded-full transition-colors">
              <Bell size={20} />
              <span className="absolute top-2 right-2 w-2 h-2 bg-red-500 rounded-full border-2 border-[#0f172a]"></span>
            </button>
            <div className="w-10 h-10 rounded-full border-2 border-teal-500/50 p-0.5">
              <img src="https://api.dicebear.com/7.x/avataaars/svg?seed=Felix" alt="avatar" className="rounded-full bg-slate-800" />
            </div>
          </div>
        </nav>

        {/* --- HERO STATS --- */}
        <div className="grid grid-cols-1 md:grid-cols-3 gap-6 mb-12">
          <StatCard icon={<Leaf className="text-teal-400"/>} label="CO2 Offset" value="24.8 kg" desc="Equivalent to 2 trees" />
          <StatCard icon={<DollarSign className="text-blue-400"/>} label="Money Saved" value="$184.20" desc="Based on local avg prices" />
          <StatCard icon={<Zap className="text-yellow-400"/>} label="Waste Risk" value="Medium" desc="3 items need attention" />
        </div>

        {/* --- MAIN CONTENT AREA --- */}
        <div className="flex flex-col lg:flex-row gap-8">
          
          {/* Inventory List */}
          <div className="flex-[2]">
            <div className="flex justify-between items-center mb-6">
              <h2 className="text-xl font-semibold text-white">Live Inventory</h2>
              <button className="flex items-center gap-2 bg-teal-500 hover:bg-teal-400 text-slate-900 px-5 py-2.5 rounded-2xl font-bold transition-all transform hover:scale-105 active:scale-95">
                <Plus size={18} /> Add Item
              </button>
            </div>

            <div className="grid grid-cols-1 sm:grid-cols-2 gap-4">
              <AnimatePresence>
                {items.map((item, i) => (
                  <motion.div 
                    key={item.id}
                    custom={i}
                    variants={cardVariants}
                    initial="hidden"
                    animate="visible"
                    className={`group p-6 rounded-[2rem] border backdrop-blur-md transition-all ${
                      item.status === 'urgent' ? 'bg-red-500/10 border-red-500/20 hover:border-red-500/40' :
                      item.status === 'warning' ? 'bg-yellow-500/10 border-yellow-500/20 hover:border-yellow-500/40' :
                      'bg-white/5 border-white/10 hover:border-white/20'
                    }`}
                  >
                    <div className="flex justify-between items-start mb-4">
                      <span className={`px-3 py-1 rounded-full text-[10px] font-bold uppercase tracking-wider ${
                         item.status === 'urgent' ? 'bg-red-500/20 text-red-400' :
                         item.status === 'warning' ? 'bg-yellow-500/20 text-yellow-400' :
                         'bg-teal-500/20 text-teal-400'
                      }`}>
                        {item.status === 'urgent' ? 'Expiring Soon' : item.cat}
                      </span>
                      <span className="text-slate-500 group-hover:text-slate-300 transition-colors cursor-pointer text-xs font-bold">QTY: {item.qty}</span>
                    </div>
                    
                    <h3 className="text-xl font-bold text-white mb-1">{item.name}</h3>
                    <p className="text-sm text-slate-400 mb-6">Expires in <span className="text-white font-mono">{item.days}d</span></p>
                    
                    <div className="flex gap-2">
                      <button className="flex-1 bg-white/5 hover:bg-white/10 py-2 rounded-xl text-xs font-bold border border-white/5 transition-colors">Consume</button>
                      <button className="p-2 bg-white/5 hover:bg-white/10 rounded-xl border border-white/5 transition-colors"><Share2 size={16}/></button>
                    </div>
                  </motion.div>
                ))}
              </AnimatePresence>
            </div>
          </div>

          {/* AI Insights Sidebar */}
          <div className="flex-1">
            <div className="backdrop-blur-2xl bg-white/5 border border-white/10 rounded-[2.5rem] p-8 sticky top-8">
              <h2 className="text-xl font-bold text-white mb-6 flex items-center gap-2">
                <Zap size={20} className="text-yellow-400" /> AI Insights
              </h2>
              
              <div className="space-y-6">
                <InsightItem 
                  icon={<Utensils size={18} className="text-teal-400"/>} 
                  title="Recipe Suggestion" 
                  body="Use your Spinach and Avocado to make a Green Smoothie today." 
                />
                <InsightItem 
                  icon={<Package size={18} className="text-blue-400"/>} 
                  title="Smart Buying" 
                  body="You usually waste 30% of Greek Yogurt. Try a smaller pack next time." 
                />
                <div className="p-4 bg-teal-500/10 rounded-2xl border border-teal-500/20 mt-4">
                    <p className="text-xs text-teal-400 font-bold mb-1 italic">Pro Tip:</p>
                    <p className="text-sm text-slate-300">Donating items 3 days before expiry increases acceptance rate by 80%.</p>
                </div>
              </div>
            </div>
          </div>

        </div>
      </div>
    </div>
  );
};

const StatCard = ({ icon, label, value, desc }) => (
  <div className="backdrop-blur-xl bg-white/5 border border-white/10 p-6 rounded-[2rem] hover:bg-white/10 transition-all cursor-default group">
    <div className="mb-4 p-3 bg-white/5 w-fit rounded-2xl group-hover:scale-110 transition-transform">{icon}</div>
    <p className="text-xs text-slate-400 uppercase tracking-widest font-bold mb-1">{label}</p>
    <p className="text-3xl font-black text-white mb-1 tracking-tight">{value}</p>
    <p className="text-[10px] text-slate-500 font-medium">{desc}</p>
  </div>
);

const InsightItem = ({ icon, title, body }) => (
  <div className="flex gap-4">
    <div className="mt-1">{icon}</div>
    <div>
      <h4 className="text-sm font-bold text-white mb-1">{title}</h4>
      <p className="text-xs text-slate-400 leading-relaxed">{body}</p>
    </div>
  </div>
);

export default LastByte;