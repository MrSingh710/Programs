class Employee:

    @property       # getter function
    def name(self):
        return f"{self.fname} {self.lname}"
    
    @name.setter    # setter function
    def name(self, value):
        self.fname = value.split(" ")[0]
        self.lname = value.split(" ")[1]

e = Employee()
e.name = "Jassi Singh"

print(e.fname, e.lname)