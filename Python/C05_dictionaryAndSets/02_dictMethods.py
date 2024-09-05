marks = {               
    "Jassi" : 100,
    "Shubham" : 87,
    "Rohan" : 56,
    "List" : [1, 2, 3],
    4 : "J",
}

print("marks.items():", marks.items())    # Returns a list of (key,value) tuples
print("marks.keys():", marks.keys())    # Returns a list containing dictionary's keys

marks.update({"Jassi" : 99, "Sam" : 44})
print(marks)

print(marks.get("Jassi2"))  # Returns none
# print(marks["Jassi2"])      # Shows error