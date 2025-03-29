import random

computer = random.choice(["snake", "gun", "water"]);

you = input("Enter your choice: ")

print("Computer choice:", computer)
print("Your choice:", you)

if(computer == you):
    print("Draw!")

elif(computer == "water" and you == "snake"):  
    print("You win!")

elif(computer == "water" and you == "gun"): 
    print("You lose!")

elif(computer == "snake" and you == "water"): 
    print("You lose!")

elif(computer == "snake" and you == "gun"):  
    print("You win!")

elif(computer == "gun" and you == "water"): 
    print("You win!")

elif(computer == "gun" and you == "snake"): 
    print("You lose!")

else:
    print("Something went wrong")