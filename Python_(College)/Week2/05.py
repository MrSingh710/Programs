def fact(num):
    if(num == 0):
        return 1
    ans = num * fact(num - 1)

    return ans

num = int(input("Enter the number: "))

print(f"{num}! = {fact(num)}")