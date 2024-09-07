with open("C09_fileIO/Q08_Q09_this.txt", "r") as f:

    data = f.read()

with open("C09_fileIO/Q08_Q09_Q10_copy.txt", "w") as f:

    f.write(data)