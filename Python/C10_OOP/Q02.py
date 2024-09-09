class Calculator:
    def __init__(self, num):
        self.num = num
    
    def square(self):
        print(f"{self.num}^2 = {self.num**2}")
    def cube(self):
        print(f"{self.num}^3 = {self.num**3}")
    def sqRt(self):
        print(f"{self.num}^(1/2) = {self.num**(1/2)}")

a = Calculator(9)
a.square()
a.cube()
a.sqRt()