import os
os.path.isfile('g0.py') #true if exists and is a file
os.path.isdir('.vscode') #true if exists and is a directory
print(os.path.isfile('g0.py'))
print(os.path.isdir('.venv'))

from pathlib import Path
p=Path('g0.py')
print(p.is_file())
print(p.is_dir())

import os
os.mkdir('mydir') #create single directory, will give error if already exists
os.makedirs('a/b/c/d/e/f/g/h/i/j/k/l/i/m/n/o/p/q/r/s/t/u/v/w/x/y/z',exist_ok=True) #created nested directories ,no error if already exists

#remove directory
os.rmdir('mydir') #remove single empty directory
os.removedirs('a/b/c/d/e/f/g/h/i/j/k/l/i/m/n/o/p/q/r/s/t/u/v/w/x/y/z') #remove nested empty directories
import shutil
shutil.rmtree('a') #remove dir tree (careful with this one)

#list directory contents
os.listdir('.') #returnd list of names of files and directories in current directory
#with details
for name in os.listdir('.'):
    print(name,os.path.getsize(name))


