# Write a program that calculate and prints simple interest.
# Take the principle amount, rate and time from the user input.

interest = float(input("Enter the interset rate: "))
amount = float(input("Enter the principal amount: "))
time = float(input("Enter the time in years: "))

simpleInterest = (interest * amount * time) / 100

print("Simple Interest calculated per annum:", simpleInterest)