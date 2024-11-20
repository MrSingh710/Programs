for i in range(1, 3):
    with open(f"College Python/Week5/07/07_{i}.txt", "r") as f:
        for line in f:
            if("NIT" in line):
                print(f"Line: {line.strip()}\nFile name: 07_{i}.txt")