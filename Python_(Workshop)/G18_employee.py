class Employee:

    def __init__(self, uName, dept="CSE"):          # Parameterised constructor
        self.name=uName                 # variables with self keyword are instance variables
        self.deptName=dept

    def details(self):
        print ("Name is", self.name)
        print ("Department is", self.deptName)
         

emp1 = Employee("Aman", "EC")
emp1.details()
emp2 = Employee("Jas")          # No error because dept is by default CSE
emp2.details()