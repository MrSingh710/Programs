import random

n = random.randint(1, 100)
g = int(input("Guess a number: "))
count = 0
while(n != g):

    if(n < g):
        print("Guess is high")
        count += 1
        g = int(input("Guess a lower number: "))
    
    else:
        print("Guess is low")
        count += 1
        g = int(input("Guess a higher number: "))
        
print(f"You have guessed the correct number {n} by using {count + 1} guesses")