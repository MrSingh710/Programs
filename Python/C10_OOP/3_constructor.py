class Employee:    
    language = "Python"     
    salary = 1300000   
    
    def __init__(self, name, salary, language):     # methods with __ __ are dunder methods (these are automatically called)
        print("Creating an object")
        self.name = name
        self.salary = salary
        self.language = language

    def getInfo(self):
        print(f"Name: {self.name}\nLanguage: {self.language}\nSalary: {self.salary}")
    
    @staticmethod  
    def greet():
        print("Good morning")

jassi = Employee("Jassi", 1200000, "JavaScript")      # Constructor(__init__()) is automatically called
print(f"Name: {jassi.name}\nLanguage: {jassi.language}\nSalary: {jassi.salary}")
# jassi.getInfo()     
