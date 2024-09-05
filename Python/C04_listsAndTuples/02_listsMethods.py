friends = ["Aakash", "Apple", 5, False, "Rohan", "Orange", 44.05]   # lists can store any type of data
print(friends)

friends.append("Harry")

print(friends)

l1 = [1, 8, 7, 2, 21, 15]
print("l1:", l1)
l1.sort()
print("l1.sort():", l1)

value = l1.pop(1)   # pop() function pops the value at index 1 and returns the value at index 1
print(value)
print(l1)