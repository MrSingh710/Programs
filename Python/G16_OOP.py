class CSEStudent:
    name = "John"   
    address = "Jammu"
    def details(self):          # method   
        print("Welcome to CSE department")
        print("Enter name")
        self.name = input()
        print("Enter address")
        self.address = input()
    def getDetails(self):
        print("Entered details are: ")
        print(self.name) 
        print(self.address)

class ITStudent:
    def details(self):
        print("Welcome to IT department")
        print("Enter name")
        self.name = input()
        print("Enter address")
        self.address = input()

cseStd1 = CSEStudent()          # cseStd1 is an object of class CSEStudent
cseStd2 = CSEStudent()
cseStd1.details()
cseStd2.getDetails() 