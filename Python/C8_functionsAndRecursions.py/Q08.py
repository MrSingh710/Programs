def table(num, stop):
    for i in range(1, stop + 1):
        print(f"{num} x {i} = {num * i}")


number = int(input("Enter the number of which multiplication table is required: "))
stop = int(input("Enter the number till which multiplication table is required: "))

table(number, stop)