with open("C09_fileIO\Q06_Q07_file.txt") as f:
    text = f.read()

    if("python" in text):
        print("python is present")
        
    else:
        print("python is not present")