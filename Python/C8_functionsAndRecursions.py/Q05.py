def pattern(n):
    if(n == 0):
        return
    print("*" * n)
    pattern(n - 1)

num = int(input("Enter the number: "))

pattern(num)