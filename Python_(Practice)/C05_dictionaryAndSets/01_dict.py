# Dictionary is a collection of keys-value pairs
d = {}  # Empty set
marks = {               
    "Jassi" : 100,
    "Shubham" : 87,
    "Rohan" : 56,
    "List" : [1, 2, 3],
    4 : "J"
}

marks["Jassi"] = 99
print(marks, "\n", type(marks))
print("Value of List Key:", marks["List"])
print("Value of Key 4:", marks[4])