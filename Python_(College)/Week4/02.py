def countOccurance(string, character):
    count = 0
    for ch in string:
        if(ch == character):
            count += 1
    return count

string = input("Enter the string: ")
character = input("Enter the character: ")
print(f"Length using without inbuilt function: {countOccurance(string, character)}")
print(f"Lenght using inbuilt function: {string.count(character)}")