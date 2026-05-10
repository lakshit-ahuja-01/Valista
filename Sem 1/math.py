import random
# print(random.random())
# print(random.randint(1,6))
n=int(input("enter your input between 1 to 10: "))
k=random.randint(1,10)
if n==k:
    print("you won the game")
else:
     print("try again")
     #import m1 (imports module from m1.py)

import g1 as mod #imports as {any name}

print(mod.name)
print(mod.cart)

#import a specific function
#from m0 import * (imports everything)
from g0 import coco,coconot
coco()
print(coco())
print(coconot)

#import random
from random import *
print(random())
print(randint(1,6))


#Guess The No. Game
play=input("\nWant to Play The Guess the No. Game? y/n: ")
if play=="y":
    numb=randint(1,3)
    Win = True
    Score=0
    Guesses=0
    while Win:
        Guesses+=1
        guess=int(input("\nGuess a number from 1 to 3: "))
        if numb==guess:
            Score+=1
            print(f"\nCorrect! Your Score:{Score}")
            retry=input("Go to next Round? y/n ")
            if retry=="n":
                Win = False
                print(f"\nYou Guessed it Right {Score} Times! Out of {Guesses} Guesses")
        else:
            print("\nNo Luck :(")
            retry=input("Retry? y/n ")
            if retry=="n":
                Win = False
                print(f"\nYou Guessed it Right {Score} Times! Out of {Guesses} Guesses")



