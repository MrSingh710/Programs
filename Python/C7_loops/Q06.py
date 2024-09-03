number = int(input("Enter the number for its factorial calculation: "))

fact = 1
i = 1
for i in range(1, number + 1):
    fact *= i
    i += 1

print(f"{number}! = {fact}")
