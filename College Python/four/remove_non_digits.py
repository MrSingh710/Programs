def remove_non_digits(string):
    return ''.join([char for char in string if char.isdigit()])
