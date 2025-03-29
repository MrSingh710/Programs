n = int(input("Enter the lines you want to read: "))

with open("College Python/Week5/me.txt", "r") as f:
    lines = []
    for _ in range(n):
        line = f.readline()
        if(not line):
            break
        lines.append(line.strip())
for line in lines:
    print(line)

if(len(lines) < n):
    print("End of file reached")