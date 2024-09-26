try:
    a = int(input("Hey, Enter a number: "))
    print(a)

except Exception as e:
    print(e)

else:
    print("Inside else block")      # Executed only if the try was successful