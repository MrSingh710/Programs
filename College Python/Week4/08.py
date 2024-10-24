def sum_and_avg_of_digits(string):
    digits = []

    for ch in string:
        if (ch.isdigit() == 1):
            digits.append(int(ch))
    
    total_sum = sum(digits)

    if(len(digits) == 0):
        avg = 0
    else:
        avg = total_sum / len(digits)

    return total_sum, avg


string = input("Enter the string: ")

sum, avg = sum_and_avg_of_digits(string)
print(f"Sum of the digits present in the string: {sum}")
print(f"Average of the digits present in the string: {avg}")