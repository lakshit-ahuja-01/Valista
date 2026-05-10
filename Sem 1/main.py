import my_module
import importlib
import time
while True:
    my_module.greet()
    time.sleep(5)
    
    # Reload module 
    importlib.reload(my_module)