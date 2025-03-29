password = input("Enter your password: ")
lengthOfPassword = len(password)
patternOfPassword = r'[!@#$%^&*(),.?":{}|<>]'
if(lengthOfPassword >= 8 and patternOfPassword):
    print("Password is Strong")
else:
    print("Password is not Strong")