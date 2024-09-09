from random import randint

class Train:
    def __init__(self, trainNo):
        self.trainNo = trainNo

    def book(self, froym, to):
        print(f"Your ticket is booked in train no: {self.trainNo} from {froym} to {to}")
    
    def getStatus(self):
        print(f"Train no: {self.trainNo} is running on time")

    def getFare(self, froym, to):
        print(f"Ticket fare in train no: {self.trainNo} from {froym} to {to} is {randint(222, 999)}")

t = Train(12399)
t.book("Jammu", "Srinagar")
t.getStatus()
t.getFare("Jammu", "Srinagar")