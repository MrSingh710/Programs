class Check:
    a = 4

obj = Check()   # Prints the class attribute as instance attribute is not present
print(obj.a)
obj.a = 0       # Instance attribute is set
print(obj.a)    # Prints the instance attribute as instance attribute is present

print(Check.a)      # Class attribute is not changed. It is only changed for the object.