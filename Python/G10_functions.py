# Function with variable parameters/arguments
def add(*args):    # '*' is used to take any number of arguments
    sum=0
    for i in args:
        print(i)
        sum=sum+i
    print("Sum:", sum)

add(2, 4, 5)
add(33, 7)

# Returning multiple values
def calculator(n1, n2):
    sum = n1+n2
    mult = n1*n2

    return sum, mult

result = calculator(2, 5) # OR
addition, multication = calculator(3, 6)

print("Result:",result)
print("Addition:", addition)
print("Multiplication:", multication)

# Default values in arguments
def showStudentDetails(name, address, dept="CSE", clgName="NIT"):
    print("***Student Details***")
    print("Name:", name)
    print("Address:", address)
    print("Department Name:", dept)
    print("College Name:", clgName)

showStudentDetails("John", "Delhi", "Civil")
showStudentDetails("John", "Delhi", "Civil", "Delhi NIT")