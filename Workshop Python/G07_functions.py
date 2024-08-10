def unparaGetDetails():
    print("Enter the name:")
    name = input()
    print("Enter your address")
    address = input()
    print("Your name:", name)
    print("Your address:", address)

def paraGetDetails(name, address):
    print("Your name:", name)
    print("Your address:", address)

def totalPercentage(marksScored, totalMarks):
    if (type(marksScored)==int and type(totalMarks)==int):
        result = (marksScored*100)/totalMarks
        print("Total percentage:", result)
    else:
        print("Enter a valid data-type")

totalPercentage("fhdd", 600)
totalPercentage(499, 500)
