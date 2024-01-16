class Person():
    def p(self):
        print("This is inside person class")

class Student(Person):          # Person class's attributes are inherited
    def s(self):
        print("This is inside student class")
    def level(self):
        super().p()
        print("Function is inherited")

std = Student()
std.level()
std.p()
std.s()