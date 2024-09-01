# if the names of 2 friends are same, then dictionary stores only 1 friends' name, that too the latest one (key should be different)

dict = {}

name = input("Enter your name: ")
lang = input("Enter your favourite language:")
dict.update({name : lang})

name = input("Enter your name: ")
lang = input("Enter your favourite language:")
dict.update({name : lang})

name = input("Enter your name: ")
lang = input("Enter your favourite language:")
dict.update({name : lang})

name = input("Enter your name: ")
lang = input("Enter your favourite language:")
dict.update({name : lang})

print(dict)
