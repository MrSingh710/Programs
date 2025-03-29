def fact(n):
    if(n == 0 or n == 1):
        return 1
    ans = n * fact(n - 1)
    return ans

number = int(input("Enter a number: "))
factorial = fact(number)
print(f"{number}! = {factorial}")