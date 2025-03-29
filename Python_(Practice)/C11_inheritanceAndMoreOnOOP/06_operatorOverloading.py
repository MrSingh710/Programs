class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):   # __add__ dunder method is used for + operator overloading
        return self.x + other.x, self.y + other.y

# Create two points
p1 = Point(2, 3)
p2 = Point(4, 5)

# Use the overloaded + operator
print(p1 + p2)