def max(a, b):
    if(a > b):
        return a
    else:
        return b
    
a = int(input("Enter value 1: "))
b = int(input("Enter value 2: "))

print(f"Maximum value: {max(a, b)}")