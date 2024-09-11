class TwoD_Vector:
    def __init__(self, i, j):
        self.i = i
        self.j = j
    
    def show(self):
        print(f"Vector: {self.i}i + {self.j}j")
    

class ThreeD_Vector(TwoD_Vector):
    def __init__(self, i, j, k):
        super().__init__(i, j)
        self.k = k
    def show(self):
        print(f"Vector: {self.i}i + {self.j}j + {self.k}k")
    

a = TwoD_Vector(2, 3)
a.show()
b = ThreeD_Vector(2, 3, 4)
b.show()