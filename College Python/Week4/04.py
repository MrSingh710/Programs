def appendMiddle(s1, s2):
    mid = len(s1) // 2
    s3 = s1[0: mid] + s2 + s1[mid: len(s1)]
    return s3

s1 = input("Enter string 1: ")
s2 = input("Enter string 2: ")

print(f"New string: {appendMiddle(s1, s2)}")