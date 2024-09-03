# WAP that swaps the value of two variabls using temporary variable.

a = input("Enter any value: ")
b = input("Enter any value: ")

print(f"Value before swapping: Value1 = {a} and Value2 = {b}")

# Swapping using a temporary variable
c = a
a = b
b = c

print(f"Value after swapping: Value1 = {a} and Value2 = {b}")