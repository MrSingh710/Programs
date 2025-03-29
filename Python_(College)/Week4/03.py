def countEach(string):

    for i in range(len(string)):
        if string[i] not in string[:i]:
            print(f"Total {string[i]}: {string.count(string[i])}")

string = input("Enter the string: ")
countEach(string)