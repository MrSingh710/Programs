marks = int(input("Enter your marks: "))

if(90 < marks <= 100):
    print("Grade: Ex")

elif(80 < marks <= 90):
    print("Grade: A")

elif(70 < marks <= 80):
    print("Grade: B")

elif(60 < marks <= 70):
    print("Grade: C")

elif(50 < marks <= 60):
    print("Grade: D")

elif(0 <= marks <= 50):
    print("Grade: F")

else:
    print("Enter valid marks")