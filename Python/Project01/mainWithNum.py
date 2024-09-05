import random

'''
1 for snake
0 for gun
-1 for water

'''

computer = random.choice([1, 0, -1]);

youStr = input("Enter your choice: ")
youDict = {
    "s" : 1,
    "g" : 0,
    "w" : -1
}
reverseDict = {
    1 : "Snake",
    0 : "Gun",
    -1 : "Water"
}
youNum = youDict[youStr]

print("Computer choice:", reverseDict[computer])
print("Your choice:", reverseDict[youNum])

if(computer == youNum):
    print("Draw!")

# elif(computer == -1 and youNum == 1):   # -2
#     print("You win!")

# elif(computer == -1 and youNum == 0):   # -1 
#     print("You lose!")

# elif(computer == 1 and youNum == -1):   # 2
#     print("You lose!")

# elif(computer == 1 and youNum == 0):    # 1 
#     print("You win!")

# elif(computer == 0 and youNum == -1):   # 1 
#     print("You win!")

# elif(computer == 0 and youNum == 1):    # -1
#     print("You lose!")

elif((computer - youNum) == 1 or (computer - youNum) == -2):
    print("You win!")

elif((computer - youNum) == -1 or (computer - youNum) == 2):
    print("You lose!")

else:
    print("Something went wrong")
