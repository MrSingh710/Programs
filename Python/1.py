# printing the strings and numbers
print("welcome")
print('welcome')
print('''welcome''')
print(5*10/2)
print('\n')

# variable can store any data type 
name = 'Jas'
print(type(name))
print('My name is ', name)
print(name, 'likes nothing') # comma automatically adds a space
print(name+ ' likes everything') # concatenation doesn't adds a space
print(f'{name} likes something') # f-string method
age = 20
print(type(age))
print('He is', age, 'years old')
print('He is '+ str(age) + ' years old') # only strings can concatenate, so we have first typecasted the integer into string






# if-else
guessList = ['John', 'Rahul', 'Pinak', 'Akash']
print("Please enter your name: ")
nameVar = input()
if nameVar in guessList:
    print("Welcome", nameVar)
else:
    print("Sorry, you are not welcome")

