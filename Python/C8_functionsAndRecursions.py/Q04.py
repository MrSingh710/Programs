def sum(n):
    if(n == 0):
        return 0
    
    return n + sum(n - 1)

num = int(input("Enter the number: "))

print(f"Sum of first {num} numbers = {sum(num)}")
