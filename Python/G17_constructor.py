class Game: 
    def __init__(self):         # default constructor
        self.life =3
        print("Welcome to our game")
    def level1(self):           # instance method
        print("You have", self.life, "lives")

user1 = Game()          # constructor is called when 
user1.level1()  