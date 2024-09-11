class Employee:
    company = "ITC"
    name = "Jassi"
    def show(self):
        print(f"Name of employee: {self.name} and Company: {self.company}")

class Coder(Employee):                  # Single Inheritance
    language = "Python"
    def printLanguage(self):
        print(f"Language: {self.language}")

class Programmer(Employee, Coder):      # Multiple Inheritance
    company = "ITC Infotech"
    def showLanguage(self):
        print(f"Company: {self.company} and Good in language: {self.language}")

a = Employee()
b = Programmer()

b.show()
b.printLanguage()
b.showLanguage()
