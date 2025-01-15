'''password generator in python'''
import random
character="abcdefghijklmnopqrstuvwxyz123456780#$(**)"
length=int(input("enter length:"))
password=""
for a in range(length):
    password+=random.choice(character)
print(password)
