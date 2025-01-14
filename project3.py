'''this is  rock, paper, scissor game where user have to input 
their choice as 'r' for 'rock' and 'p' for 'paper' and 's' for 'scissor'.'''
import random
choices=[0,1,-1]
computer=random.choice(choices)
you=input("Enter your choice: 'r'for rock, 'p' for paper and 's' for scissor:\n")
youdict={'r':0, 'p':1 ,'s':-1}
reversedict={0:'rock', -1:'scissor',1:'paper'}
print(f"You choose:{reversedict[youdict[you]]} and computer choose:{reversedict[computer]}")
if computer==youdict[you]:
    print("Match is draw!")
else:
    if(computer==0 and youdict[you]==1):
        print("You loose! \n Try again")
    elif(computer==1 and youdict[you]==0):
        print("Your wins! \n congratulations!")
    elif(computer==-1 and youdict[you==1]):
        print("You loose! \n Try again")
    elif(computer==1 and youdict[you]==-1):    
         print("Your wins! \n congratulations!")
    elif(computer==0 and youdict[you]==-1):
         print("You loose! \n Try again")
    elif(computer==-1 and youdict[you]==0):
         print("Your wins! \n congratulations!")