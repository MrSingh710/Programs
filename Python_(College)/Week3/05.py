floatingNum = float(input("Enter the floating number: "))

def float_to_binary():
    intPart = int(floatingNum)
    intBinary = bin(intPart).replace("0b", "")

#print(f"{floatingNum} = {intBinary}")