def greet(name, message="Hello"):
    return f"{message}, {name}!"

print(f"Printing with 1 argument: {greet("Jaspreet")}")
print(f"Printing with 2 arguments: {greet("Jaspreet", "Good Morning")}")