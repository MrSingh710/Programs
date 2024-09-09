class Programmer:
    company = "Microsoft"
    def __init__(self, name, salary, pin):
        self.name = name
        self.salary = salary
        self.pin = pin

j = Programmer("Jassi", 1300000, 190006)

print(j.name, j.salary, j.pin, j.company)

r = Programmer("Rohan", 1000000, 184120)

print(r.name, r.salary, r.pin, r.company)
