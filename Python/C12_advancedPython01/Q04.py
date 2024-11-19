a = int(input("Enter dividend(num): "))
b = int(input("Enter divisor(den): "))

try:
    print(f"a/b = {a/b}")

except Exception as e:
    print(f"a/b = infinite")