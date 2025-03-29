# Multi Level Inheritance

class Level1:
    a = 1

class Level2(Level1):
    b = 2
    
class Level3(Level2):
    c = 3

o = Level1()
print(o.a)

o = Level2()
print(o.a, o.b)

o = Level3()
print(o.a, o.b, o.c)