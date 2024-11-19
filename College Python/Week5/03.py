n = int(input("Enter the lines you want to read: "))
with open("College Python/Week5/02.txt", "r") as f:
    lines = f.readlines(n)

print(lines)
