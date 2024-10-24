def reverseUsingSlicing(string):
    return string[-1::-1]
    
string = input("Enter any string: ")
string = reverseUsingSlicing(string)
print(f"Reversed string: {string}")