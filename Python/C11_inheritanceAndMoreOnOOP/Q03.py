class Employee:
    def __init__(self, salary, inc = 0):
        self.salary = salary
        self.inc = inc

    @property
    def salaryAfterIncrement(self):
        return (self.salary + ((self.salary*self.inc)/100))
    
    @salaryAfterIncrement.setter
    def salaryAfterIncrement(self, salary):
        self.inc = ((salary/self.salary) - 1) * 100

    
e = Employee(12000, 20)
e.salaryAfterIncrement = 14400

print(e.inc)