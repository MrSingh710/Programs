# For creating a new file
# myFile = open("students.txt", "x")
# myFile.close()

# For listing all the files in the path
import os 
print(os.listdir()) 

# For checking the availability of the file
print(os.path.isfile("students.txt"))
if os.path.isfile("demo.txt"):
    print("File exists")
else:
    print("File does not exists")

# For creating a file anywhere
myfile = open("G:\Programs\Python\demo.txt", "w")
myfile.write("Welcome")       # For writing some data in the file
myfile.close()

# Efficient way to create a file without closing it
with open ("textFile.txt", "a") as file:        # 'a' appends the data to the previous data
    file.write("\nThis is a file")