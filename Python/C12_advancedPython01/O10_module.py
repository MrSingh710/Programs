def myFunc():
    print("Hello World")

myFunc()
print(__name__)     # Prints the name of the file in which this code is running 

if (__name__ == "__main__"):
    print("We are directly running this code")
else:
    print("We are indirectly running this code")