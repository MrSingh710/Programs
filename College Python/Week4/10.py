def reverseUsingLoops(string):
    reversedString = ""
    
    for ch in string:
        reversedString = ch + reversedString

    return reversedString

string = input("Enter any string: ")
string = reverseUsingLoops(string)
print(f"Reversed string: {string}")