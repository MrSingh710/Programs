def removeChar(string):
    newString = ""
    for ch in string:
        if(ch.isdigit()):
            newString = newString + ch

    return newString

string = input("Enter any string: ")
string = removeChar(string)
print(f"New string which has all the characters removed: {string}")