def countOcc(string, subString):
    string = string.lower()
    subString = subString.lower()
    occurances = []

    i = 0
    while (i < len(string)):
        index = string.find(subString, i)

        if(index == -1):
            break

        occurances.append(index)
        i = index + 1
        
    return occurances

string = input("Enter a string: ")
subString = input("Enter a sub string: ")

print(f"All occurances of sub string in the string: {countOcc(string, subString)}")