# We cannot include list in a set. Even if it could be included in the set, then also
# we would not able to access and change the list as they are unindexed and immutable

s = {8, 7, 12, "Harry", [1, 2]}

s[2] = 14   # error
print(s) 