string = input("Enter anything: ")

detect = string.find("  ")

if(detect == -1) :
    print("Double space not available")
else :
    print("Double space available")
