with open("College Python/Week5/me.txt", "r") as f:
    print(f"Current position of cursor: {f.tell()}")
    f.seek(10)
    print(f"Current position of cursor: {f.tell()}")
    data = f.read()
    print(f"Printing from 10th index:-\n{data}")

print(f"Is file closed?")
if (f.closed):
    print("Yes")
else:
    print("No")
    