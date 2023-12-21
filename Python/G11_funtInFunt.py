# function in function
def outerFun(a, b):
    print("Outer Function Called")

    def addition(x, y):
        print("Inner Function Called")
        return x+y
    
    sum = addition(a, b)
    return 2*sum

result = outerFun(10, 13)
print(result) 