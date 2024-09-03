m1 = float(input("Enter marks of subject 1: "))
m2 = float(input("Enter marks of subject 2: "))
m3 = float(input("Enter marks of subject 3: "))

totalPercent = ((m1 + m2 + m3) / 3)

if(m1 >= 33 and m2 >= 33 and m3 >= 33 and totalPercent >= 40):
    print("Student is passed")

else:
    print("Student is failed")

