with open("C09_fileIO/Q06_Q07_file.txt") as f:
    
    text = f.readlines()

    for i in range(len(text)):

        if("python" in text[i]):
            print(f"python is present at line {i + 1}")
            break

    else:
        print("python is not present")
    
