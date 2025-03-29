def countAll(string):
    letters = digits = specials = 0

    for char in string:
        if char.isalpha():
            letters += 1
        elif char.isdigit():
            digits += 1
        else:
            specials += 1

    print(f"Total letters: {letters}")
    print(f"Total digits: {digits}")
    print(f"Total specials: {specials}")

string = input("Enter the string: ")
countAll(string)