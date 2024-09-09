# WAP that swaps the value of two variables.

a = input("Enter value 1: ")
b = input("Enter value 2: ")

print(f"Value before swapping: Value1 = {a} and Value2 = {b}")

# Swapping
a, b = b, a

print(f"Value after swapping: Value1 = {a} and Value2 = {b}")