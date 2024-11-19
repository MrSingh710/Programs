with open("College Python/Week5/01.txt", "r") as f:
    fetchedLines = []
    for line in f:
        if(line.startswith("NIT")):
            fetchedLines.append(line.strip())

print(f"Fetched lines which starts with 'NIT': {fetchedLines}")