with open("College Python/Week5/me.txt", "r") as f:
    for line in f:
        words = line.split()
        maxWord = max(words, key=len)
        print(maxWord)