# Multi Level Inheritance

class Employee:
    def __init__(self):
        print("Constructor of Employee")
    a = 1

class Programmer(Employee):
    def __init__(self):
        print("Constructor of Programmer")
    b = 2
    
class Manager(Programmer):
    def __init__(self):
        super().__init__()      # By using super(), we can call its super(base) class
        print("Constructor of Manager")
    c = 3

# o = Employee()
# print(o.a)

# o = Programmer()
# print(o.a, o.b)

o = Manager()
print(o.a, o.b, o.c)