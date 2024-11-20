import re

def isValidEmail(email):
    emailPattern = r'[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}'
    return re.match(emailPattern, email)

email = input("Enter the email address: ")
if isValidEmail(email):
    print("Email is valid")
else:
    print("Email is not valid")