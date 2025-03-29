class Employee:
    a = 1

    @classmethod    # It is used if want to give preference of class attribute over instance attribute
    def show(cls):
        print(f"The class attribute of a: {cls.a}")

e = Employee()
e.a = 45

e.show()