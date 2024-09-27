def countEach(string):
    count = 0
    for ch in string:
        print(f"Total {ch}: {string.count(ch)}")

string = input("Enter the string: ")
countEach(string)