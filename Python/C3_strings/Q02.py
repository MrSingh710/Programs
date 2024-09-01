letter = '''Dear <|Name|>,
You are selected!
<|Date|>        '''

name = input("Enter name: ")
date = input("Enter date: ")

# letter = letter.replace("<|Name|>", name)
# letter = letter.replace("<|Date|>", date)

# print(letter)

# Here, original letter is not changed, i.e., strings are immutable
print(letter.replace("<|Name|>", name).replace("<|Date|>", date))   # Firstly, name is replaced and then date is replaced
