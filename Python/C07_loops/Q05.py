number = int(input("Enter the number till which sum will be done: "))

sum = 0
i = 1
while(i <= number):
    sum += i 
    i += 1
print(f"Sum of first {number} natural numbers = {sum}")
