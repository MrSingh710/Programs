# Changing self to slf does not change anything as it is just a variable

class Calculator:
    def __init__(slf, num):
        slf.num = num
    
    def square(slf):
        print(f"{slf.num}^2 = {slf.num**2}")
    def cube(self):
        print(f"{self.num}^3 = {self.num**3}")
    def sqRt(self):
        print(f"{self.num}^(1/2) = {self.num**(1/2)}")

a = Calculator(9)
a.square()
a.cube()
a.sqRt()