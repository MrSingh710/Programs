with open("C09_fileIO/Q04_file.txt", "r+") as f:
    data = f.read()
    f.seek(0)               # For moving the file pointer to the starting of the file so that it can write over the whole file
    f.write(data.replace("Donkey", "#####")) 
    f.truncate()            # For making the length of the file synchronized
    