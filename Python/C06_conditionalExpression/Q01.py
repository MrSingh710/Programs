n1 = int(input("Enter number 1: "))
n2 = int(input("Enter number 2: "))
n3 = int(input("Enter number 3: "))
n4 = int(input("Enter number 4: "))

if(n1 >= n2 and n1 >= n3 and n1 >= n4):
    print(n1, "is the greatest number")

elif(n2 >= n1 and n2 >= n3 and n2 >= n4):
    print(n2, "is the greatest number")

elif(n3 >= n1 and n3 >= n2 and n3 >= n4):
    print(n3, "is the greatest number")

else:
    print(n4, "is the greatest number")