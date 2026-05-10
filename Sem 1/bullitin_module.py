# https://docs.python.org/3/py-modindex.html

#Random Module
import random
print(random.random())
print(random.randint(1,10))
colours = ['red', 'blue', 'green', 'yellow', 'black', 'white']
print(random.choice(colours))
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
random.shuffle(nums)
print(nums)

#Datetime Module
from datetime import datetime
now = datetime.now()
print("current time:", now)
print("year:", now.year)
print("month:", now.month)
print("day:", now.day)
print("hour:", now.hour)
print("minute:", now.minute)
print("second:", now.second)

#OS Module
import os
print("current directory:", os.getcwd()) #
print("list of files and directories:", os.listdir()) #
os.mkdir("my_folder") #os.mkdir used to make a folder
print("folder created") 
os.removedirs("my_folder") #os.removedirs used to remove a folder
print("folder removed")

#statistics Module
import statistics
data = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("mean:", statistics.mean(data))
print("median:", statistics.median(data))
print("mode:", statistics.mode(data))

#json Module
import json

#converting python object to json

data = {'name': 'John', 'age': 30, 'city': 'New York'}
json_data = json.dumps(data)
print(type(json_data))

#converting json to python object

json_string = '{"name": "John", "age": 30, "city": "New York"}'
result = json.loads(json_string) 
print(result["name"])
print(type(result))

#time module
import time
print(time.time()) #current timestamp
print(time.ctime()) #readable format
print("sleeping for 2 seconds..")
time.sleep(2)
print("Awake!")

#asycronous programming where code can run without waiting for other code to complete
#sycronous programming where code runs line by line waiting for each line to complete
