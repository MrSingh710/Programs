import random

def game():
    score = random.randint(0, 100)
    return score

# with open("C09_fileIO/Q02_hi-score.txt", "r+") as f:

#     hiScore = f.read().strip()
#     score = game()
    
#     if(hiScore == ""):
#         print(f"Game playing first time")
#         f.seek(0)
#         f.write(str(score))
#         print(f"Score updated!\nNew Hi-Score: {score}")
    
#     elif(score > int(hiScore)):
#         f.seek(0)
#         f.write(str(score))
#         print(f"Your Score: {score}\nPrevious Score: {int(hiScore)}")
#         print("You have scored a new high score!\nNew high score updated")
    
#     else:
#         print(f"Your Score: {score}\nPrevious Score: {int(hiScore)}")
#         print("Your score is less than high score\nBetter luck next time")


with open("C09_fileIO/Q02_hi-score.txt") as f:

    hiScore = f.read().strip()
    score = game()

    # If score is less, then don't update, hence don't open the file for writing
    if(hiScore != "" and score < int(hiScore)):
        print(f"Your Score: {score}\nPrevious Score: {int(hiScore)}")
        print("Your score is less than high score\nBetter luck next time")

    # If score is empty or more, then update (open the file for writing)
    else:
         with open("C09_fileIO/Q02_hi-score.txt", "w") as file:
            file.seek(0)
            file.write(str(score))

            if(hiScore == ""):
                print(f"Game playing first time")
                print(f"Score updated!\nNew Hi-Score: {score}")
            
            else:
                print(f"Your Score: {score}\nPrevious Score: {int(hiScore)}")
                print("You have scored a new high score!\nNew high score updated")

        