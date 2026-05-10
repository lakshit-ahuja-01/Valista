f=open("first.txt",mode="r")
text= f.read()
print(text) #reads entire file
f.close()

f=open("first.txt",mode="w")
f.write("hey this is new file") #this will overwrite existing content
f.close()
f=open("first.txt",mode="a")
f.write("\nthis is appended line") #this will append to existing content
f.close()

f=open("first.txt",mode="r")
res=f.read(10) #reads first 10 characters
print(res)
f.close()

#read line by line
f=open("first.txt",mode="r")
r=f.readlines() #reads all lines into a list
print("Lines:",r) 

#tell() and seek()
f=open("first.txt",mode="r")
f.read(4)
print("location of curor is ",f.tell()) #prints current cursor position
f.seek(5) #moves cursor to beginning
print("location of curor is ",f.tell())
f.close()

#reading patterns
with open("first.txt","r",encoding="utf-8") as f:
    #read all at once
    data=f.read()
    print(data)

with open("first.txt","r",encoding="utf-8") as f:
    #read line by line
    for line in f:
        print(repr(line))

with open("first.txt","r",encoding="utf-8") as f:
    #read a single line
    line=f.readline()
    print(repr(line))
    #read a list of lines
    lines=f.readlines()
    print(repr(lines))

#using with statement
with open("first.txt",mode="r") as f:
    data=f.read()
    print(data)


#file copy to another file
f1=open("first.txt",mode="r")
f2=open("task.txt",mode="w")
data=f1.read()
f2.write(data)
f1.close()
f2.close()

#check if a path exists
import os
print(os.path.exists('first.txt')) #true if file or directory exists

#using pathlib
from pathlib import Path
p=Path("first.txt")
print(p.resolve()) #absolute path
print([x.name for x in p.parent.iterdir()]) #list name in folder

#create folder with pathlib
(Path("myfolder")).mkdir(exist_ok=True) #creates folder if not exists

#
from pathlib import Path
base=Path(".")
base="D:user//documents/file handling.py"
file="D:user//documents"
print(file.relative_to(base.parent)) 

