# Function with return-type
def add(n1, n2):
    sum = n1+n2
    return sum

tot = add(10, 20)
print(tot)



# Dynamic-function
def details(name, age):
    print(name, age)

print("Enter the name")
uname = input()
print("Enter the age")
uage = int(input())
details(uname, uage)