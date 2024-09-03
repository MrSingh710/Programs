# WAP that swaps the value of two variabls.

a = input("Enter any value: ")
b = input("Enter any value: ")

print(f"Value before swapping: Value1 = {a} and Value2 = {b}")

# Swapping
a, b = b, a

print(f"Value after swapping: Value1 = {a} and Value2 = {b}")