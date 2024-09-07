list = ["Donkey", "Monkey", "Bad"]

with open("C09_fileIO/Q05_file.txt", "r+") as f:
    data = f.read()

    for item in list:
        data = data.replace(item, "#" * len(item))

    f.seek(0)
    f.write(data)