class Student:
    collegeName='NIT'           # Class variable can be used with self keyword and as well as with class name
    def __init__(self):
        self.dept="CSE"         # Instance variable can only be accessed by self keyword

    def details(self):
        print("College name:", self.collegeName)
        print("College name:", Student.collegeName)
        print("Department:", Student.dept)

std1 = Student()
std1.details()