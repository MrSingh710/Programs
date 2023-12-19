print("Enter 1st number")
num1 = int(input())
print("Enter 2nd number")
num2 = int(input())
print("Enter operator")
op = input()
if op == '+':
    print(num1+num2)
elif op == '-':
    print(num1-num2)
elif op == '*':
    print(num1*num2)
elif op == '/':
    print(num1/num2)
else:
    print("Invalid operator!!!")