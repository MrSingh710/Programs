class Student:
    @classmethod            # Class methods can be called with class name without creating any object
    def cDetails(cls):
        print("Hi")
        print("This is class method")
    @classmethod            # Only one copy is created for every object      
    def paraDetails(cls, name, age):
        print("Name:", name)
        print("Age:", age)
    @staticmethod           # Static methods cannot access or modify the attributes while class methods can
    def sDetails():         
        print("This is static method")

    def instanceMethod(self, name):             # Copy of instance methods are created for every object
        print("Name:", name)

Student.cDetails()
Student.paraDetails("Jas", 20)
Student().instanceMethod("Gur")             # Class cannot access directly the instance method with class name but can accessed by this shortcut as it calls the default constructor
Student.cDetails()
std = Student()
std.Details()