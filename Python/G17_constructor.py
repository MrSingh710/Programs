class Game: 
    def __init__(self):         # constructor
        self.life =3
        print("Welcome to our game")
    def level1(self):
        print("You have", self.life, "lives")

user1 = Game()
user1.level1() 