with open("C09_fileIO/Q01_poems.txt") as f:
    poem = f.read()

    if("twinkle" in poem):
        print("twinkle is present")
    else:
        print("twinkle is not present")