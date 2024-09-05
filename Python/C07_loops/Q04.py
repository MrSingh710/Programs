number = int(input("Enter the number for checking prime: "))

for i in range(2, number):
    if(number % i == 0):
        print("Number is not prime")
        break
else:
    print("Number is prime")
