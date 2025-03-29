#  Write a python program to calculate the square of a number entered by the user

num = int(input("Enter the number whose square is to be calculated: "))

sq = num*num    # For power, we can use **
# sq = num**2   # Means num^2 but ^ is not valid in python

print("Square of", num, ":", sq)