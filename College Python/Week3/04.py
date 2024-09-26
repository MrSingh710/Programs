def calculatePrice(originalPrice, discount = 10):
    discoutPrice = originalPrice * (discount//100)
    price = originalPrice - discoutPrice

originalPrice = int(input("Enter the original price: "))

choice = input("You want to enter the value of discount(Y/N)?: ")
if(choice == 'Y'):
    discount = int(input("Enter discount % that you want: "))
else:
    pass

finalPrice = calculatePrice(originalPrice, discount)

print(f"Final price = {finalPrice} ")
