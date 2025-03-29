f = open("C09_fileIO/03_file.txt", "r")

# data = f.readlines()    # Returns a list of all lines

# print(f"{data} \nType of the data: {type(data)}")

# line1 = f.readline()
# print("Line 1:", line1)

# line2 = f.readline()
# print("Line 2:", line2)

# line3 = f.readline()
# print("Line 3:", line3)

# line4= f.readline()
# print("Line 4:", line4)

line = None
while(line != ""):
    line = f.readline()
    print(line)

f.close()