# if-else in single name
print("Please enter your name: ")
name = input()
if name == 'Jas':
    print("Welcome", name)
else:
    print("Sorry, you are not welcome", name)

# if-else in a list
guestList = ['John', 'Rahul', 'Pinak', 'Akash', 'Rahul']
print("Please enter your name: ")
nameList = input()
if nameList in guestList:
    print("Welcome", nameList)
else:
    print("Sorry, you are not welcome", nameList)

# list are mutable, indexed, ordered and can store duplicate values 
guestList[0] = 'Don' # mutable
print("Element at 0th index:", guestList[0]) # indexed