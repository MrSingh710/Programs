with open("College Python/Week5/me.txt", "r") as f:
    count = 0
    for line in f:
        count += 1
    
    print('Number of lines:', count)