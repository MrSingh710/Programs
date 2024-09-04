def C_to_F(celsius):
    f = (celsius * (9 / 5)) + 32
    return f

c = int(input("Enter the temperature in celcius: "))
f = C_to_F(c)
print(f"{c}° C = {round(f, 2)} F")
