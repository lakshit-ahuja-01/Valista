#file operations(common file-syestem functions)

#create,remove,rename,move,copy
import os
from pathlib import Path
import shutil

#create
Path('data').mkdir(exist_ok=True) #create directory if not exists

#rename
os.rename('data','mydata') #rename directory

#or using shutil.move
shutil.move('mydata','data') #rename directory

#copy file
shutil.copy('first.txt','data/first_copy.txt') #copy file to another location
shutil.copy2('first.txt','data/first_copy2.txt') #copy file with metadata

#delete file
os.remove('data/first_copy.txt') #remove file
