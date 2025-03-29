with open("College Python/Week5/me.txt", "r") as f:
    data = f.read()
    words = data.split()
    print(f"Total characters: {len(data)}")
    print(f"Total words: {len(words)}")