n = int(input("Enter n: "))

# for i in range(1, n + 1):
    
#     for j in range(n, i, -1):
#         print(" ", end = "")
    
#     for j in range(1, i + 1):
#         print("*", end = "")

#     for j in range(1, i):
#         print("*", end = "")

#     print()

for i in range(1, n + 1):
    print(" " * (n - i), end = "")
    print("*" * ((2 * i) - 1), end = "")
    print()