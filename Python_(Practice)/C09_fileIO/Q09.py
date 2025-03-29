with open("C09_fileIO/Q08_Q09_this.txt", "r") as f:

    data1 = f.read()

with open("C09_fileIO/Q08_Q09_Q10_copy.txt", "r") as f:

    data2 = f.read()

if(data1 == data2):
    print("File is identical")

else:
    print("File is not identical")