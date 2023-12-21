#  name = input('Enter name:\n') # can use \n for the cursor to be moved in the next line
#  print(name)
#  # alternatively 
#  print('Enter name:') # By default, print function has end parameter which has \n like print('Enter name:', end="\n")
#  nextInName = input()
#  print('Enter name: ', end="")
#  sameInName = input()
#  print(sameInName)

print("Enter 1st number")
num1 = float(input())          
print("Enter 2nd number")
num2 = float(input())           # By default, input treats every data as a string,
print(num1+num2)         # so, it concatenates everything. To correct this we will typecast input into integer/float