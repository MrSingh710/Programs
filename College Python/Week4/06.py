def checkBalanced(s1, s2):
    for ch in s1:
        if (not(ch in s2)):
            return False
    return True


s1 = input("Enter string 1: ")
s2 = input("Enter string 2: ")

if(checkBalanced(s1, s2)):
    print(f"s1 and s2 are balanced")
else:
    print(f"s1 and s2 are not balanced")
