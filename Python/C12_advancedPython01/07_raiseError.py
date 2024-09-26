a = int(input("Enter num1: "))
b = int(input("Enter num2: "))

if(b == 0):
    raise ZeroDivisionError("Division by zero not possible")

else:
    print(f"Division: {a}/{b} = {a/b}")