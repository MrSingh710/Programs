def find_substring_ignore_case(string, substring):
    string_lower = string.lower()
    substring_lower = substring.lower()
    occurrences = []
    start = 0
    while True:
        start = string_lower.find(substring_lower, start)
        if start == -1:
            break
        occurrences.append(start)
        start += len(substring_lower)
    return occurrences
