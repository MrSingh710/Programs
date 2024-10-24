def reverseUsingRecursion(string):
    if(len(string) == 0):
        return ""
    return reverseUsingRecursion(string[1:]) + string[0]

string = input("Enter any string: ")
string = reverseUsingRecursion(string)
print(f"Reversed string: {string}")