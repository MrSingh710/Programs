def count_char_types(string):
    letters = digits = specials = 0
    for char in string:
        if char.isalpha():
            letters += 1
        elif char.isdigit():
            digits += 1
        else:
            specials += 1
    return letters, digits, specials
