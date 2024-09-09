# WAP that swaps the value of two variabls using temporary variable.

a = input("Enter value 1: ")
b = input("Enter value 2: ")

print(f"Value before swapping: Value 1 = {a} and Value 2 = {b}")

# Swapping using a temporary variable
c = a
a = b
b = c

print(f"Value after swapping: Value 1 = {a} and Value 2 = {b}")