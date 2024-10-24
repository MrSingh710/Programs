def apply_operators(s1, s2):
    print("Concatenation (+):", s1 + s2)
    print("Repetition (*):", s1 * 3)
    print("Membership (in):", 'a' in s1)
    print("Equality (==):", s1 == s2)
    print("Greater than (>):", s1 > s2)

s1 = input("Enter string 1: ")
s2 = input("Enter string 2: ")

apply_operators(s1, s2)