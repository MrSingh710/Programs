class Employee:    
    language = "Python"     
    salary = 1300000   
    def getInfo(self):
        print(f"Language: {self.language}\nSalary: {self.salary}")
    
    @staticmethod   # These methods does not take self parameter
    def greet():
        print("Good morning")

jassi = Employee()  
jassi.greet()
jassi.getInfo()     # Converted into Employee.getInfo(jassi)
