# WAP that calculates the BMI based on user's weight and height.

height = float(input("Enter your height in meters: "))
weight = float(input("Enter your weight in kilograms: "))

BMI = float(weight / (height * height))

print("Calculated BMI:", BMI)