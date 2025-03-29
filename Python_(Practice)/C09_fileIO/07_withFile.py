# f = open("C09_fileIO/file.txt")
# print(f.read())
# f.close()


# Above can be written as follows:-

with open("C09_fileIO/03_file.txt") as f:
    print(f.read())

# We don't have to explicitly close the file