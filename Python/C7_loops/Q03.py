number = int(input("Enter the number of which multiplication table is required: "))
stop = int(input("Enter the number till which multiplication table is required: "))

i = 1
while(i <= stop):
    print(f"{number} x {i} = {number * i}")
    i += 1