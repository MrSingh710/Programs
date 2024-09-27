def sum_and_average_of_digits(string):
    digits = [int(char) for char in string if char.isdigit()]
    total_sum = sum(digits)
    average = total_sum / len(digits) if digits else 0
    return total_sum, average
