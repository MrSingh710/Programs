def reverse_with_loop(string):
    reversed_string = ''
    for char in string:
        reversed_string = char + reversed_string
    return reversed_string
