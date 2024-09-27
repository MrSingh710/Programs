def reverse_with_recursion(string):
    if len(string) == 0:
        return string
    else:
        return reverse_with_recursion(string[1:]) + string[0]
