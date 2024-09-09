class Employee:     # Class declaration
    language = "Python"     # These are class attributes as these  
    salary = 1300000    # attributes are common to every object

jassi = Employee()      # Object Instantiation
jassi.name = "Jassi"    # name is an instance attribute as it is unique to an instance(object)
print(jassi.name, jassi.salary, jassi.language)

rohan = Employee()
rohan.name = "Rohan"
rohan.language = "JavaScript"   # Instance attribute takes preference over class attribute
print(rohan.name, rohan.language, rohan.salary)