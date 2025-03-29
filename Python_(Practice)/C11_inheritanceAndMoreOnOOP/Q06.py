class Vector:
    def __init__(self, i, j, k):
        self.i = i
        self.j = j
        self.k = k
    
    def __add__(self, other):
        return Vector(self.i + other.i, self.j + other.j, self.k + other.k)
    
    def __mul__(self, other):
        return Vector(self.i * other.i, self.j * other.j, self.k * other.k)
    
    def __str__(self):
        return f"{self.i}i + {self.j}j + {self.k}k"
    
v1 = Vector(2, 3, 4)
v2 = Vector(3, 4, 5)
v3 = Vector(1, 2, 3)

print(v1 + v2 + v3)
print(v1 * v2)