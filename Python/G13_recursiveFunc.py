def factorial(n):
    if (n==1 or n==0):
        return 1
    return n*factorial(n-1)

print("3! =", factorial(3))
print("4! =", factorial(4))
print("5! =", factorial(5))
