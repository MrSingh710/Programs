binary = int(input("Enter binary number: "))

i = 0
ans = 0
while(binary != 0):
    digit = binary % 10     
    dec = digit * (2**i)
    i = i + 1
    ans += dec
    binary //= 10

print(f"Equivalent decimal number = {ans}")