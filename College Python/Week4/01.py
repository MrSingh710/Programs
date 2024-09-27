def length(string):
    count = 0
    for ch in string:
        count +=1
    return count

string = input("Enter the string: ")
print(f"Length using without inbuilt function: {length(string)}")
print(f"Lenght using inbuilt function: {len(string)}")