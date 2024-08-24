# Write a python program to find remainder when a number is divided by z

z = int(input("Enter the number which will divide: "))
num = int(input("Enter the number: "))

quot = int(num / z)
rem = num - z*quot      # OR rem = num % z

print("Remainder when", num, "is divided by", z, ":", rem)
