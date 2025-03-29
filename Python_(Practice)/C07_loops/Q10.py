number = int(input("Enter the number of which multiplication table is required: "))
stop = int(input("Enter the number till which multiplication table is required: "))

# for i in range(stop, 0, -1):
#     print(f"{number} x {i} = {number * i}")

for i in range(1, stop + 1):
    print(f"{number} x {stop - i + 1} = {number * (stop - i + 1)}")